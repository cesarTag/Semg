/********************************************************************************
** Form generated from reading UI file 'userform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERFORM_H
#define UI_USERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserForm
{
public:
    QTabWidget *tabUsuarios;
    QWidget *tab;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *BtnEditar;
    QPushButton *BtnAgregar;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnEliminar;
    QWidget *tab_2;
    QLineEdit *rut;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QLabel *label_4;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QFrame *line;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_6;
    QPushButton *BtnSalir;

    void setupUi(QWidget *UserForm)
    {
        if (UserForm->objectName().isEmpty())
            UserForm->setObjectName(QStringLiteral("UserForm"));
        UserForm->resize(636, 475);
        UserForm->setMinimumSize(QSize(636, 475));
        UserForm->setMaximumSize(QSize(636, 475));
        tabUsuarios = new QTabWidget(UserForm);
        tabUsuarios->setObjectName(QStringLiteral("tabUsuarios"));
        tabUsuarios->setEnabled(true);
        tabUsuarios->setGeometry(QRect(20, 20, 591, 391));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 571, 341));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 4);

        BtnEditar = new QPushButton(layoutWidget);
        BtnEditar->setObjectName(QStringLiteral("BtnEditar"));

        gridLayout->addWidget(BtnEditar, 1, 2, 1, 1);

        BtnAgregar = new QPushButton(layoutWidget);
        BtnAgregar->setObjectName(QStringLiteral("BtnAgregar"));

        gridLayout->addWidget(BtnAgregar, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        BtnEliminar = new QPushButton(layoutWidget);
        BtnEliminar->setObjectName(QStringLiteral("BtnEliminar"));

        gridLayout->addWidget(BtnEliminar, 1, 3, 1, 1);

        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/Contact.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabUsuarios->addTab(tab, icon, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        rut = new QLineEdit(tab_2);
        rut->setObjectName(QStringLiteral("rut"));
        rut->setEnabled(false);
        rut->setGeometry(QRect(110, 30, 113, 27));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 31, 31));
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 70, 161, 27));
        lineEdit_2 = new QLineEdit(tab_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 110, 161, 27));
        lineEdit_3 = new QLineEdit(tab_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(230, 30, 41, 27));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 66, 81, 31));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 110, 71, 21));
        dateEdit = new QDateEdit(tab_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(110, 150, 161, 27));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 150, 51, 31));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(110, 200, 161, 91));
        groupBox->setStyleSheet(QLatin1String("QGroupBox { \n"
"     border: 1px solid gray; \n"
"     border-radius: 2px; \n"
" }"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(50, 30, 91, 22));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(50, 60, 91, 22));
        line = new QFrame(tab_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(280, 30, 16, 261));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(310, 190, 261, 101));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(310, 26, 91, 31));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(310, 80, 101, 17));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(530, 26, 21, 31));
        lineEdit_4 = new QLineEdit(tab_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(442, 30, 81, 27));
        lineEdit_4->setMaxLength(3);
        lineEdit_5 = new QLineEdit(tab_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(440, 80, 81, 27));
        lineEdit_5->setMaxLength(3);
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(530, 76, 31, 31));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(310, 170, 67, 17));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(310, 130, 67, 17));
        lineEdit_6 = new QLineEdit(tab_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setEnabled(false);
        lineEdit_6->setGeometry(QRect(410, 130, 113, 27));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/imagenes/Writing.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabUsuarios->addTab(tab_2, icon1, QString());
        BtnSalir = new QPushButton(UserForm);
        BtnSalir->setObjectName(QStringLiteral("BtnSalir"));
        BtnSalir->setGeometry(QRect(510, 420, 99, 31));

        retranslateUi(UserForm);
        QObject::connect(BtnSalir, SIGNAL(clicked()), UserForm, SLOT(close()));

        tabUsuarios->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UserForm);
    } // setupUi

    void retranslateUi(QWidget *UserForm)
    {
        UserForm->setWindowTitle(QApplication::translate("UserForm", "Form", 0));
        BtnEditar->setText(QApplication::translate("UserForm", "Editar", 0));
        BtnAgregar->setText(QApplication::translate("UserForm", "Agregar", 0));
        BtnEliminar->setText(QApplication::translate("UserForm", "Eliminar", 0));
        tabUsuarios->setTabText(tabUsuarios->indexOf(tab), QApplication::translate("UserForm", "Usuarios", 0));
        label->setText(QApplication::translate("UserForm", "ID", 0));
        label_2->setText(QApplication::translate("UserForm", "First Name", 0));
        label_3->setText(QApplication::translate("UserForm", "Last Name", 0));
        label_4->setText(QApplication::translate("UserForm", "Birth", 0));
        groupBox->setTitle(QApplication::translate("UserForm", "Sex:", 0));
        radioButton->setText(QApplication::translate("UserForm", "Male", 0));
        radioButton_2->setText(QApplication::translate("UserForm", "Female", 0));
        label_5->setText(QApplication::translate("UserForm", "Body Weight", 0));
        label_6->setText(QApplication::translate("UserForm", "Person Height", 0));
        label_7->setText(QApplication::translate("UserForm", "Kg", 0));
        label_8->setText(QApplication::translate("UserForm", "Cm", 0));
        label_9->setText(QApplication::translate("UserForm", "Extra", 0));
        label_10->setText(QApplication::translate("UserForm", "BMI", 0));
        tabUsuarios->setTabText(tabUsuarios->indexOf(tab_2), QApplication::translate("UserForm", "Editar Datos", 0));
        BtnSalir->setText(QApplication::translate("UserForm", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class UserForm: public Ui_UserForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERFORM_H
