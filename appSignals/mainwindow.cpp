#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>



MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){

    ui->setupUi(this);

    //connect(octave,SIGNAL(stateChanged(Qoctave::octaveState)),this,SLOT(showState()));
    QStringList list=( QStringList()<<"dft"<<"fft"<<"dgt"<<"wdst"<<"sgram" );
    ui->comboMetodos->addItems(list);
    //QTextStream(stdout) <<"estado proceso "<<octave->state()<< endl;


}

MainWindow::~MainWindow(){
    QString s="exit\n";
    octave->write(s.toUtf8());
    octave->waitForFinished();
    delete ui;
}

void MainWindow::upOctave(){

    octave=new QProcess(this);
    octave->setProcessChannelMode(QProcess::MergedChannels);
    octave->start("octave",QStringList()<<"-q"<<"-i");
    if (!octave->waitForStarted(15000)){
        QTextStream(stdout) <<"(esperando inicio) no inicio"<<octave->processId()<< endl;
        return;
    }

}

void MainWindow::on_botonCargar_clicked(){

    path = QFileDialog::getOpenFileName(this, "Abrir Archivo - EGM",
                                        "/home/cesar/",
                                        "Text Files (*.txt)");
    QFile fin(path);
    if (!fin.open(QIODevice::ReadOnly | QIODevice::Text)){
        QMessageBox msgBox;
        msgBox.setText("Error al abrir el archivo");
        msgBox.exec();
    }

    if(path!=NULL){

        habilita();

        /*
        connect(ui->botonCargar,SIGNAL(clicked(bool),ui->comboMetodos,SLOT(setDisabled(false));
        */
    }
    QList<Pto> lista;
    int cont=leer(fin,lista);
    QVector<double>x(cont),y(cont);
    QTextStream (stdout)<<"lineas leidas "<<cont<<endl;
    //imprime por pantalla
    QListIterator<Pto> it(lista);
    int i=0;
    while(it.hasNext()){
        x[i]=it.next().x;
        y[i]=it.next().y;
        //QTextStream (stdout)<<"x="<<x.at(i)<<" y="<<y.at(i)<<endl;
        i++;
    }
    grafica(ui->grafico1,x,y,1);



}

int MainWindow::leer(QFile &fin, QList<Pto> &lista){

    QTextStream in(&fin);
    QString line = in.readLine();
    int cont=0;
    while (!line.isNull()) {
        QStringList strList;
        strList = line.split(" ");
        Pto st;
        st.x=(strList.at(0) ).toDouble();
        st.y=(strList.at(1) ).toDouble();
        lista.push_back(st);
        line = in.readLine();
        cont++;
    }
    return cont;
}

void MainWindow::habilita(){

    ui->botonGraficar->setDisabled(false);
    ui->text1->setDisabled(false);
    ui->text2->setDisabled(false);
    ui->text3->setDisabled(false);
    ui->comboFiltros->setDisabled(false);
    ui->comboMetodos->setDisabled(false);
    ui->label1->setDisabled(false);
    ui->label2->setDisabled(false);
    ui->label3->setDisabled(false);
    ui->label4->setDisabled(false);
    ui->label5->setDisabled(false);
}


void MainWindow::grafica(QCustomPlot *grafico, QVector<double> x, QVector<double> y, int tipo){

    // create graph and assign data to it:
    grafico->addGraph();
    switch (tipo){
        case 1: grafico->graph(0)->setData(x,y);
                grafico->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom);
                break;
        case 2: grafico->graph(0)->setData(x,y);
                grafico->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom);
                grafico->graph(0)->setLineStyle(QCPGraph::lsImpulse);
                grafico->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle,Qt::blue,Qt::white,3));
                break;
        case 3: grafico->graph(0)->setData(x,y);
                grafico->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom);
                grafico->graph(0)->setLineStyle(QCPGraph::lsImpulse);
                grafico->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle,Qt::blue,Qt::white,3));
                break;
        default:
                QTextStream (stdout)<<"Error en el tipo de grafico "<<endl;

    }

    grafico->graph(0)->rescaleAxes();
    grafico->replot();

}



void MainWindow::openOctave(QString opcion){


    QTextStream(stdout) <<"entra a openoctave"<<endl;
    QString cmd="menuOctave "+path+" "+opcion+"\n";


    if (octave->state()!=QProcess::Running)
        QTextStream(stdout) << "Make failed:" << octave->errorString()<<endl;
    else{
        octave->write(cmd.toUtf8());

    }
   // connect(octave,SIGNAL(readyRead()),this,SLOT());
    //QStringList salida;
    /*if(octave->waitForReadyRead()){
        octave->waitForFinished(60000);
        QString str=octave->readAll();
        salida=str.split(" ");

        QTextStream(stdout) << "salida " <<str;
    }*/

    QStringList salida;
    while(octave->waitForReadyRead()){

        salida.append(QString(octave->readAll()).split(" "));
        if(salida.last()=="fin"){
            QTextStream(stdout) << "salio del while ";
            break;
        }
    }
    int size=salida.size();
    QVector<double> signal(size), x(size);
    for (int var = 0; var < size; var++) {
        x[var]=var;
        QTextStream(stdout) <<salida.at(var)<<" ";
    }
    changeType(salida,signal,size);

    grafica(ui->grafico2,x,signal,2);

}

void MainWindow::changeType(QStringList q, QVector<double> & vector, int size){

    for(int i=0; i<size; i++)
        vector[i]=QString(q[i]).toDouble();

}

void MainWindow::showState(){

    QMessageBox msgBox;
    QTime tiempo=QTime::currentTime();
    if (octave->state()==QProcess::NotRunning)
        msgBox.setText("no esta corriendo "+tiempo.toString());
    else{
        if (octave->state()==QProcess::Starting)
            msgBox.setText("iniciando"+tiempo.toString());
        else
            msgBox.setText("ejecutando"+tiempo.toString());
    }

    msgBox.exec();
}



void MainWindow::on_botonGraficar_clicked(){

    QString opcion=ui->comboMetodos->currentText();
    QTextStream(stdout) << opcion << endl;
    openOctave(opcion);
    QTextStream(stdout) <<"(sale de open octave)estado proceso "<<octave->state()<< endl;

}
