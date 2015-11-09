/********************************************************************************
** Form generated from reading UI file 'cargadatos.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARGADATOS_H
#define UI_CARGADATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CargaDatos
{
public:
    QStackedWidget *stackedPages;
    QWidget *pageTxt;
    QGroupBox *groupBoxTxt;
    QPushButton *ButtonFileTxt;
    QLineEdit *lineEditPathTxt;
    QGroupBox *groupBoxParamTxt;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditTxtFs;
    QLabel *label_5;
    QLabel *label_2;
    QComboBox *comboTxtChannels;
    QLabel *label_7;
    QLabel *label_3;
    QComboBox *comboTxtSep;
    QLabel *label_8;
    QLabel *label_4;
    QLineEdit *lineEditOtro;
    QLabel *label_9;
    QWidget *pageCsv;
    QGroupBox *groupBoxCsv;
    QLineEdit *lineEditPathCsv;
    QPushButton *ButtonFileCsv;
    QGroupBox *groupBoxParamCsv;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *lineEditCsvFs;
    QLabel *label_10;
    QLabel *label_11;
    QComboBox *comboCsvChannels;
    QLabel *label_12;
    QLabel *label_13;
    QComboBox *comboCsvSep;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEditLeerDesde;
    QLabel *label_16;
    QPushButton *ButtonAccept;
    QListWidget *listWidget;
    QPushButton *ButtonCancelar;

    void setupUi(QDialog *CargaDatos)
    {
        if (CargaDatos->objectName().isEmpty())
            CargaDatos->setObjectName(QStringLiteral("CargaDatos"));
        CargaDatos->resize(460, 320);
        CargaDatos->setMinimumSize(QSize(460, 320));
        CargaDatos->setMaximumSize(QSize(460, 320));
        stackedPages = new QStackedWidget(CargaDatos);
        stackedPages->setObjectName(QStringLiteral("stackedPages"));
        stackedPages->setGeometry(QRect(160, 10, 281, 261));
        pageTxt = new QWidget();
        pageTxt->setObjectName(QStringLiteral("pageTxt"));
        groupBoxTxt = new QGroupBox(pageTxt);
        groupBoxTxt->setObjectName(QStringLiteral("groupBoxTxt"));
        groupBoxTxt->setGeometry(QRect(0, 1, 261, 251));
        ButtonFileTxt = new QPushButton(groupBoxTxt);
        ButtonFileTxt->setObjectName(QStringLiteral("ButtonFileTxt"));
        ButtonFileTxt->setGeometry(QRect(8, 30, 51, 23));
        lineEditPathTxt = new QLineEdit(groupBoxTxt);
        lineEditPathTxt->setObjectName(QStringLiteral("lineEditPathTxt"));
        lineEditPathTxt->setEnabled(true);
        lineEditPathTxt->setGeometry(QRect(70, 30, 171, 23));
        lineEditPathTxt->setReadOnly(true);
        groupBoxParamTxt = new QGroupBox(groupBoxTxt);
        groupBoxParamTxt->setObjectName(QStringLiteral("groupBoxParamTxt"));
        groupBoxParamTxt->setEnabled(false);
        groupBoxParamTxt->setGeometry(QRect(10, 60, 241, 181));
        layoutWidget = new QWidget(groupBoxParamTxt);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 28, 221, 121));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditTxtFs = new QLineEdit(layoutWidget);
        lineEditTxtFs->setObjectName(QStringLiteral("lineEditTxtFs"));

        gridLayout->addWidget(lineEditTxtFs, 0, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboTxtChannels = new QComboBox(layoutWidget);
        comboTxtChannels->setObjectName(QStringLiteral("comboTxtChannels"));

        gridLayout->addWidget(comboTxtChannels, 1, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 2, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboTxtSep = new QComboBox(layoutWidget);
        comboTxtSep->setObjectName(QStringLiteral("comboTxtSep"));

        gridLayout->addWidget(comboTxtSep, 2, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 2, 2, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEditOtro = new QLineEdit(layoutWidget);
        lineEditOtro->setObjectName(QStringLiteral("lineEditOtro"));

        gridLayout->addWidget(lineEditOtro, 3, 1, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 3, 2, 1, 1);

        stackedPages->addWidget(pageTxt);
        pageCsv = new QWidget();
        pageCsv->setObjectName(QStringLiteral("pageCsv"));
        groupBoxCsv = new QGroupBox(pageCsv);
        groupBoxCsv->setObjectName(QStringLiteral("groupBoxCsv"));
        groupBoxCsv->setGeometry(QRect(0, 1, 261, 251));
        lineEditPathCsv = new QLineEdit(groupBoxCsv);
        lineEditPathCsv->setObjectName(QStringLiteral("lineEditPathCsv"));
        lineEditPathCsv->setEnabled(true);
        lineEditPathCsv->setGeometry(QRect(70, 30, 171, 23));
        lineEditPathCsv->setReadOnly(true);
        ButtonFileCsv = new QPushButton(groupBoxCsv);
        ButtonFileCsv->setObjectName(QStringLiteral("ButtonFileCsv"));
        ButtonFileCsv->setGeometry(QRect(8, 30, 51, 23));
        groupBoxParamCsv = new QGroupBox(groupBoxCsv);
        groupBoxParamCsv->setObjectName(QStringLiteral("groupBoxParamCsv"));
        groupBoxParamCsv->setEnabled(false);
        groupBoxParamCsv->setGeometry(QRect(10, 60, 241, 181));
        layoutWidget1 = new QWidget(groupBoxParamCsv);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 28, 221, 121));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        lineEditCsvFs = new QLineEdit(layoutWidget1);
        lineEditCsvFs->setObjectName(QStringLiteral("lineEditCsvFs"));

        gridLayout_2->addWidget(lineEditCsvFs, 0, 1, 1, 1);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 0, 2, 1, 1);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 1, 0, 1, 1);

        comboCsvChannels = new QComboBox(layoutWidget1);
        comboCsvChannels->setObjectName(QStringLiteral("comboCsvChannels"));

        gridLayout_2->addWidget(comboCsvChannels, 1, 1, 1, 1);

        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 1, 2, 1, 1);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 2, 0, 1, 1);

        comboCsvSep = new QComboBox(layoutWidget1);
        comboCsvSep->setObjectName(QStringLiteral("comboCsvSep"));

        gridLayout_2->addWidget(comboCsvSep, 2, 1, 1, 1);

        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_2->addWidget(label_14, 2, 2, 1, 1);

        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_2->addWidget(label_15, 3, 0, 1, 1);

        lineEditLeerDesde = new QLineEdit(layoutWidget1);
        lineEditLeerDesde->setObjectName(QStringLiteral("lineEditLeerDesde"));

        gridLayout_2->addWidget(lineEditLeerDesde, 3, 1, 1, 1);

        label_16 = new QLabel(layoutWidget1);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_2->addWidget(label_16, 3, 2, 1, 1);

        stackedPages->addWidget(pageCsv);
        ButtonAccept = new QPushButton(CargaDatos);
        ButtonAccept->setObjectName(QStringLiteral("ButtonAccept"));
        ButtonAccept->setGeometry(QRect(270, 280, 80, 23));
        listWidget = new QListWidget(CargaDatos);
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/txt.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem->setIcon(icon);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/imagenes/csv.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem1->setIcon(icon1);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 30, 128, 250));
        listWidget->setMaximumSize(QSize(128, 250));
        ButtonCancelar = new QPushButton(CargaDatos);
        ButtonCancelar->setObjectName(QStringLiteral("ButtonCancelar"));
        ButtonCancelar->setGeometry(QRect(360, 280, 80, 23));

        retranslateUi(CargaDatos);
        QObject::connect(ButtonCancelar, SIGNAL(clicked()), CargaDatos, SLOT(close()));

        stackedPages->setCurrentIndex(1);
        listWidget->setCurrentRow(0);


        QMetaObject::connectSlotsByName(CargaDatos);
    } // setupUi

    void retranslateUi(QDialog *CargaDatos)
    {
        CargaDatos->setWindowTitle(QApplication::translate("CargaDatos", "Dialog", 0));
        groupBoxTxt->setTitle(QApplication::translate("CargaDatos", "Carga de datos *.Txt", 0));
        ButtonFileTxt->setText(QApplication::translate("CargaDatos", "File", 0));
        groupBoxParamTxt->setTitle(QApplication::translate("CargaDatos", "Parametros", 0));
        label->setText(QApplication::translate("CargaDatos", "Frec. Sample", 0));
        label_5->setText(QApplication::translate("CargaDatos", "KHz", 0));
        label_2->setText(QApplication::translate("CargaDatos", "Canales", 0));
        comboTxtChannels->clear();
        comboTxtChannels->insertItems(0, QStringList()
         << QApplication::translate("CargaDatos", "1", 0)
         << QApplication::translate("CargaDatos", "2", 0)
         << QApplication::translate("CargaDatos", "3", 0)
         << QApplication::translate("CargaDatos", "4", 0)
         << QApplication::translate("CargaDatos", "5", 0)
         << QApplication::translate("CargaDatos", "6", 0)
         << QApplication::translate("CargaDatos", "7", 0)
         << QApplication::translate("CargaDatos", "8", 0)
        );
        label_7->setText(QApplication::translate("CargaDatos", "KHz", 0));
        label_3->setText(QApplication::translate("CargaDatos", "Separador", 0));
        comboTxtSep->clear();
        comboTxtSep->insertItems(0, QStringList()
         << QApplication::translate("CargaDatos", "espacio", 0)
         << QApplication::translate("CargaDatos", "coma", 0)
        );
        label_8->setText(QApplication::translate("CargaDatos", "KHz", 0));
        label_4->setText(QApplication::translate("CargaDatos", "otro", 0));
        label_9->setText(QApplication::translate("CargaDatos", "KHz", 0));
        groupBoxCsv->setTitle(QApplication::translate("CargaDatos", "Carga de Datos *.Csv", 0));
        ButtonFileCsv->setText(QApplication::translate("CargaDatos", "File", 0));
        groupBoxParamCsv->setTitle(QApplication::translate("CargaDatos", "Parametros", 0));
        label_6->setText(QApplication::translate("CargaDatos", "Frec. Sample", 0));
        label_10->setText(QApplication::translate("CargaDatos", "KHz", 0));
        label_11->setText(QApplication::translate("CargaDatos", "Canales", 0));
        comboCsvChannels->clear();
        comboCsvChannels->insertItems(0, QStringList()
         << QApplication::translate("CargaDatos", "1", 0)
         << QApplication::translate("CargaDatos", "2", 0)
         << QApplication::translate("CargaDatos", "3", 0)
         << QApplication::translate("CargaDatos", "4", 0)
         << QApplication::translate("CargaDatos", "5", 0)
         << QApplication::translate("CargaDatos", "6", 0)
         << QApplication::translate("CargaDatos", "7", 0)
         << QApplication::translate("CargaDatos", "8", 0)
        );
        label_12->setText(QApplication::translate("CargaDatos", "KHz", 0));
        label_13->setText(QApplication::translate("CargaDatos", "Separador", 0));
        comboCsvSep->clear();
        comboCsvSep->insertItems(0, QStringList()
         << QApplication::translate("CargaDatos", "espacio", 0)
         << QApplication::translate("CargaDatos", "coma", 0)
        );
        label_14->setText(QApplication::translate("CargaDatos", "KHz", 0));
        label_15->setText(QApplication::translate("CargaDatos", "leer Desde", 0));
        label_16->setText(QApplication::translate("CargaDatos", "KHz", 0));
        ButtonAccept->setText(QApplication::translate("CargaDatos", "Aceptar", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("CargaDatos", "Txt", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("CargaDatos", "Csv", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        ButtonCancelar->setText(QApplication::translate("CargaDatos", "Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class CargaDatos: public Ui_CargaDatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARGADATOS_H
