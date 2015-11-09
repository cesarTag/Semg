/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"
#include "qxtspanslider.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionLogIn;
    QAction *actionExit;
    QAction *actionAdd_Edit_Remove_User;
    QWidget *centralWidget;
    QCustomPlot *grafico1;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *FileName;
    QLabel *label_3;
    QLineEdit *NumChannel;
    QLabel *label;
    QComboBox *comboChannel;
    QProgressBar *progressBar;
    QTabWidget *tabWidget;
    QWidget *tab;
    QCustomPlot *grafico2;
    QCustomPlot *grafico3;
    QGroupBox *ajustesGrafico3;
    QGroupBox *ajustesGrafico2;
    QWidget *tab_2;
    QGroupBox *groupBox_3;
    QPushButton *pushButton;
    QSpinBox *spinBoxInicio;
    QSpinBox *spinBoxFin;
    QLabel *label_4;
    QxtSpanSlider *horizontalSlider;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QTreeView *treeView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuExport;
    QMenu *menuHelp;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1327, 726);
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/Task Manager.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionLogIn = new QAction(MainWindow);
        actionLogIn->setObjectName(QStringLiteral("actionLogIn"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAdd_Edit_Remove_User = new QAction(MainWindow);
        actionAdd_Edit_Remove_User->setObjectName(QStringLiteral("actionAdd_Edit_Remove_User"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        grafico1 = new QCustomPlot(centralWidget);
        grafico1->setObjectName(QStringLiteral("grafico1"));
        grafico1->setGeometry(QRect(280, 30, 791, 221));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(1080, 30, 211, 121));
        QFont font;
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        groupBox->setFont(font);
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QLatin1String("QGroupBox { \n"
"     border: 1px solid gray; \n"
"     border-radius: 2px; \n"
" }"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        FileName = new QLineEdit(groupBox);
        FileName->setObjectName(QStringLiteral("FileName"));
        FileName->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, FileName);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        NumChannel = new QLineEdit(groupBox);
        NumChannel->setObjectName(QStringLiteral("NumChannel"));
        NumChannel->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, NumChannel);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label);

        comboChannel = new QComboBox(groupBox);
        comboChannel->setObjectName(QStringLiteral("comboChannel"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboChannel);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(40, 640, 171, 23));
        progressBar->setValue(24);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 310, 1261, 311));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        grafico2 = new QCustomPlot(tab);
        grafico2->setObjectName(QStringLiteral("grafico2"));
        grafico2->setGeometry(QRect(240, 20, 381, 241));
        grafico3 = new QCustomPlot(tab);
        grafico3->setObjectName(QStringLiteral("grafico3"));
        grafico3->setGeometry(QRect(650, 20, 381, 241));
        ajustesGrafico3 = new QGroupBox(tab);
        ajustesGrafico3->setObjectName(QStringLiteral("ajustesGrafico3"));
        ajustesGrafico3->setGeometry(QRect(1040, 20, 191, 241));
        ajustesGrafico3->setStyleSheet(QLatin1String("QGroupBox { \n"
"     border: 1px solid gray; \n"
"     border-radius: 2px; \n"
" }"));
        ajustesGrafico2 = new QGroupBox(tab);
        ajustesGrafico2->setObjectName(QStringLiteral("ajustesGrafico2"));
        ajustesGrafico2->setGeometry(QRect(20, 20, 201, 241));
        ajustesGrafico2->setStyleSheet(QLatin1String("QGroupBox { \n"
"     border: 1px solid gray; \n"
"     border-radius: 2px; \n"
" }"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(1080, 160, 211, 121));
        groupBox_3->setStyleSheet(QLatin1String("QGroupBox { \n"
"     border: 1px solid gray; \n"
"     border-radius: 2px; \n"
" }"));
        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 80, 151, 27));
        spinBoxInicio = new QSpinBox(groupBox_3);
        spinBoxInicio->setObjectName(QStringLiteral("spinBoxInicio"));
        spinBoxInicio->setEnabled(false);
        spinBoxInicio->setGeometry(QRect(50, 40, 71, 27));
        spinBoxFin = new QSpinBox(groupBox_3);
        spinBoxFin->setObjectName(QStringLiteral("spinBoxFin"));
        spinBoxFin->setEnabled(false);
        spinBoxFin->setGeometry(QRect(130, 40, 71, 27));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(490, 256, 141, 31));
        horizontalSlider = new QxtSpanSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(640, 260, 421, 29));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(610, 0, 141, 20));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 230, 61, 21));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/imagenes/Media-Player.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(16, 16));
        treeView = new QTreeView(centralWidget);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(30, 30, 241, 191));
        QFont font2;
        font2.setPointSize(8);
        treeView->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1327, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuExport = new QMenu(menuBar);
        menuExport->setObjectName(QStringLiteral("menuExport"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuExport->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionAdd_Edit_Remove_User);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(actionLogIn);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", 0));
        actionLogIn->setText(QApplication::translate("MainWindow", "LogIn", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionAdd_Edit_Remove_User->setText(QApplication::translate("MainWindow", "add/Edit/Remove User", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Informacion :", 0));
        label_2->setText(QApplication::translate("MainWindow", "Name: ", 0));
        label_3->setText(QApplication::translate("MainWindow", "N\302\260 Channels :", 0));
        label->setText(QApplication::translate("MainWindow", "Channel:", 0));
        comboChannel->clear();
        comboChannel->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "8", 0)
        );
        ajustesGrafico3->setTitle(QApplication::translate("MainWindow", "Ajustes Grafico 3", 0));
        ajustesGrafico2->setTitle(QApplication::translate("MainWindow", "Ajustes Grafico  2", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "An\303\241lisis B\303\241sico", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "An\303\241lisis Combinado", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Rango :", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Replot", 0));
        label_4->setText(QApplication::translate("MainWindow", "Rango de Analisis :", 0));
        label_5->setText(QApplication::translate("MainWindow", "SERIE TEMPORAL", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Abrir", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuExport->setTitle(QApplication::translate("MainWindow", "Export", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
