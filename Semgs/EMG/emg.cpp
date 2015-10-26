#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sstream>
#include <string.h>
#include <QProcess>


#include "emg.h"
#include "ui_emg.h"

EMG::EMG(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EMG)
{
    ui->setupUi(this);

    //  bloque de inicializacion de octave
    arguments << "-q"; //<< "--persist" << "--interactive "
    octave.setProcessChannelMode(QProcess::MergedChannels);
    octave.start("/usr/bin/octave", arguments);

    //

}

EMG::~EMG()
{
    delete ui;
}

// ========================================================================================== //
//                          FUNCIONES DE LOS BOTONES Y MENUS                                  //

// CLICK - ABRE EL ARCHIVO Y GUARDA LA RUTA PARA ENVIARLA A OCTAVE //
void EMG::on_botonArchivo_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(
                this,
                "Abrir Archivo - EGM",
                "/home/dcampos/",
                "Csv Files (*.csv);; Text Files (*.txt);; All Files (*.*)");

    if(!fileName.isEmpty()){
        QFile file(fileName);
        if(file.open(QFile::ReadOnly)){
            curFile = fileName;

            QRegExp sep("/");
            ui->labelSignal->setText(curFile.section(sep,-1));
            // ====================================================== //
            //          AQUI SE CARGARAN TODOS LOS METODOS            //
            /*
             * Objeto tipo signal debera contener todos los metodos de transformadas dentro
             * de él. En este punto se debe llamar a la funcion que invoca a octave y pasarle
             * los parametros para q devuelva un vector con los datos resultantes.
             */

            QString a = "octave -q signal_octave.m readsignal "+curFile+"";
            std::string s = a.toStdString();
            char const *pchar = s.c_str();

            fid = popen(pchar, "r");

            QTextStream in(fid);
            QString line = in.readAll();

            QStringList fields = line.split(" ");

            QVector<double> ejey(fields.length());
            QVector<double> ejex(fields.length());

            double ymin = 99999, ymax = -99999;
            double xmin = 99999, xmax = -99999;


            for (int i = 0; i < fields.length(); ++i) {
                ejey[i] = fields.at(i).toDouble();
                ejex[i] = i;

                if(ymin>ejey[i]) ymin = ejey[i];
                if(ymax<ejey[i]) ymax = ejey[i];

                if(xmin>ejex[i]) xmin = ejex[i];
                if(xmax<ejex[i]) xmax = ejex[i];

            }

            ui->grafico_at->addGraph();
            ui->grafico_at->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom);
            ui->grafico_at->xAxis->setRange(xmin,xmax);
            ui->grafico_at->yAxis->setRange(ymin,ymax);
            ui->grafico_at->graph(0)->setData(ejex,ejey);
            ui->grafico_at->replot();

        }else{
            QMessageBox::warning(
                        this,
                        "Error! - EGM",
                        tr("Cannot read File %1.\nError: %2")
                        .arg(fileName)
                        .arg(file.errorString()));
        }
    }
}

void EMG::on_botonRO_clicked()
{

    if (octave.state() == QProcess::Running) {
        QTextStream(stdout) <<"Estado actual: "<< octave.state()<< endl;
        QString command = ui->inputCom->toPlainText();
        if (command.isEmpty()) {
            return;
        }
        command += "\n";
        octave.write(command.toLatin1());
        octave.waitForFinished(1000);


        ui->outputCom->appendPlainText(octave.readAll() + "\n");

    }
    //octave.close();

/*
    QString gnuplot_path(tr("\"/usr/bin/gnuplot\""));
    QString gnuplot_cmd(tr("gnuplot_binary(%1)\n").arg(gnuplot_path));
    myProcess->write( gnuplot_cmd.toLatin1());
*/


}

// ========================================================================================== //
//                                2 BOTONES DE PRUEBA                                         //

void EMG::on_botonEnviar_clicked()
{

    if (!curFile.isEmpty()) {        
        QString option = ui->comboMetodo->currentText();
        QString a = "octave -q signal_octave.m "+option+" "+curFile+"";
        //QString a = "octave -q /home/dcampos/octave/ltfat-2.1.0/demos/demo_dgt.m ";
        std::string s = a.toStdString();
        char const *pchar = s.c_str();

        fid = popen(pchar, "r");

        pclose(fid);

    } else {
        QMessageBox::warning(
                    this,
                    "Error! - EGM",
                    tr("Open File first"));
    }

/*
    char buff[512];
    while(fgets(buff, sizeof(buff), fid)!=NULL){
        QTextStream(stdout) << buff << endl;
    }
*/
}

void EMG::on_botonCerrar_clicked()
{
    pclose(fid);
}
// ========================================================================================== //

void EMG::on_botonColorMap_clicked()
{

    ui->grafico_af->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom); // this will also allow rescaling the color scale by dragging/zooming
    ui->grafico_af->axisRect()->setupFullAxesBox(true);
    ui->grafico_af->xAxis->setLabel("Tiempo (s)");
    ui->grafico_af->yAxis->setLabel("Frecuencia (Hz)");

    // set up the QCPColorMap:
    QCPColorMap *colorMap = new QCPColorMap(ui->grafico_af->xAxis, ui->grafico_af->yAxis);
    ui->grafico_af->addPlottable(colorMap);

    // dimensiones de la matriz del resultado de la transformada.
    int nx = 100;
    int ny = 51;


    colorMap->data()->setSize(nx, ny); // we want the color map to have nx * ny data points    
    // now we assign some data, by accessing the QCPColorMapData instance of the color map:

    QString a = "octave -q signal_octave.m sgram "+curFile+"";
    std::string s = a.toStdString();
    char const *pchar = s.c_str();

    fid = popen(pchar, "r");

    QTextStream in(fid);
    QString line = in.readAll();

    QStringList fields = line.split(" ");


    int i=0;
    for (int xIndex=0; xIndex<nx; ++xIndex){
        for (int yIndex=0; yIndex<ny; ++yIndex){
            colorMap->data()->setCell(xIndex, yIndex, fields.at(i).toDouble());
            i++;
        }
    }

    colorMap->data()->setRange( QCPRange(0, 25), QCPRange(0, 25)); // and span the coordinate range -4..4 in both key (x) and value (y) dimensions

    // add a color scale:
    QCPColorScale *colorScale = new QCPColorScale(ui->grafico_af);
    ui->grafico_af->plotLayout()->addElement(0, 1, colorScale); // add it to the right of the main axis rect
    colorScale->setType(QCPAxis::atRight); // scale shall be vertical bar with tick/axis labels right (actually atRight is already the default)
    colorMap->setColorScale(colorScale); // associate the color map with the color scale
    colorScale->axis()->setLabel("Magnetic Field Strength");

    // set the color gradient of the color map to one of the presets:
    colorMap->setGradient(QCPColorGradient::gpPolar);
    // we could have also created a QCPColorGradient instance and added own colors to
    // the gradient, see the documentation of QCPColorGradient for what's possible.

    // rescale the data dimension (color) such that all data points lie in the span visualized by the color gradient:
    colorMap->rescaleDataRange();

    // make sure the axis rect and color scale synchronize their bottom and top margins (so they line up):
    QCPMarginGroup *marginGroup = new QCPMarginGroup(ui->grafico_af);
    ui->grafico_af->axisRect()->setMarginGroup(QCP::msBottom|QCP::msTop, marginGroup);
    colorScale->setMarginGroup(QCP::msBottom|QCP::msTop, marginGroup);

    // rescale the key (x) and value (y) axes so the whole color map is visible:
    ui->grafico_af->rescaleAxes();
    ui->grafico_af->replot();
}
