/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <qcustomplot.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *line;
    QFrame *line_2;
    QCustomPlot *grafico1;
    QCustomPlot *grafico2;
    QPushButton *botonCargar;
    QComboBox *comboMetodos;
    QComboBox *comboFiltros;
    QLabel *label1;
    QLabel *label0;
    QLabel *label2;
    QLabel *label4;
    QLabel *label3;
    QLabel *label5;
    QLineEdit *text1;
    QLineEdit *text3;
    QLineEdit *text2;
    QPushButton *botonGraficar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1022, 605);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 290, 231, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(220, 0, 20, 481));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        grafico1 = new QCustomPlot(centralWidget);
        grafico1->setObjectName(QStringLiteral("grafico1"));
        grafico1->setGeometry(QRect(259, 9, 731, 201));
        grafico2 = new QCustomPlot(centralWidget);
        grafico2->setObjectName(QStringLiteral("grafico2"));
        grafico2->setGeometry(QRect(260, 230, 731, 291));
        botonCargar = new QPushButton(centralWidget);
        botonCargar->setObjectName(QStringLiteral("botonCargar"));
        botonCargar->setGeometry(QRect(110, 40, 90, 23));
        comboMetodos = new QComboBox(centralWidget);
        comboMetodos->setObjectName(QStringLiteral("comboMetodos"));
        comboMetodos->setEnabled(false);
        comboMetodos->setGeometry(QRect(108, 80, 91, 23));
        comboFiltros = new QComboBox(centralWidget);
        comboFiltros->setObjectName(QStringLiteral("comboFiltros"));
        comboFiltros->setEnabled(false);
        comboFiltros->setGeometry(QRect(108, 120, 91, 23));
        label1 = new QLabel(centralWidget);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setEnabled(false);
        label1->setGeometry(QRect(20, 80, 71, 21));
        label0 = new QLabel(centralWidget);
        label0->setObjectName(QStringLiteral("label0"));
        label0->setGeometry(QRect(21, 40, 71, 21));
        label2 = new QLabel(centralWidget);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setEnabled(false);
        label2->setGeometry(QRect(20, 120, 71, 21));
        label4 = new QLabel(centralWidget);
        label4->setObjectName(QStringLiteral("label4"));
        label4->setEnabled(false);
        label4->setGeometry(QRect(20, 190, 71, 21));
        label3 = new QLabel(centralWidget);
        label3->setObjectName(QStringLiteral("label3"));
        label3->setEnabled(false);
        label3->setGeometry(QRect(20, 160, 71, 21));
        label5 = new QLabel(centralWidget);
        label5->setObjectName(QStringLiteral("label5"));
        label5->setEnabled(false);
        label5->setGeometry(QRect(20, 220, 71, 21));
        text1 = new QLineEdit(centralWidget);
        text1->setObjectName(QStringLiteral("text1"));
        text1->setEnabled(false);
        text1->setGeometry(QRect(110, 160, 91, 23));
        text3 = new QLineEdit(centralWidget);
        text3->setObjectName(QStringLiteral("text3"));
        text3->setEnabled(false);
        text3->setGeometry(QRect(110, 220, 91, 23));
        text2 = new QLineEdit(centralWidget);
        text2->setObjectName(QStringLiteral("text2"));
        text2->setEnabled(false);
        text2->setGeometry(QRect(110, 190, 91, 23));
        botonGraficar = new QPushButton(centralWidget);
        botonGraficar->setObjectName(QStringLiteral("botonGraficar"));
        botonGraficar->setEnabled(false);
        botonGraficar->setGeometry(QRect(109, 260, 91, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1022, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Analisis Semg", 0));
        botonCargar->setText(QApplication::translate("MainWindow", "Cargar", 0));
        label1->setText(QApplication::translate("MainWindow", "Metodos", 0));
        label0->setText(QApplication::translate("MainWindow", "Se\303\261al", 0));
        label2->setText(QApplication::translate("MainWindow", "Filtros", 0));
        label4->setText(QApplication::translate("MainWindow", "Dato2", 0));
        label3->setText(QApplication::translate("MainWindow", "Dato1", 0));
        label5->setText(QApplication::translate("MainWindow", "Dato3", 0));
        botonGraficar->setText(QApplication::translate("MainWindow", "Graficar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
