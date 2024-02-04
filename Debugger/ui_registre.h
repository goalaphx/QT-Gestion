/********************************************************************************
** Form generated from reading UI file 'registre.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRE_H
#define UI_REGISTRE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_register_2
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_1nom;
    QLineEdit *lineEdit_4cin;
    QLabel *label_10;
    QLineEdit *lineEdit_2prenom;
    QLabel *label_12;
    QLabel *label_15;
    QLineEdit *lineEdit_3cne;
    QLabel *label_11;
    QDateEdit *dateEdit;
    QLabel *label_9;
    QLabel *label_14;
    QLineEdit *lineEdit_5filiere;
    QPushButton *reg_button;
    QLabel *label;
    QLabel *lab;
    QFrame *line;

    void setupUi(QDialog *register_2)
    {
        if (register_2->objectName().isEmpty())
            register_2->setObjectName("register_2");
        register_2->resize(425, 334);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img_file/register.png"), QSize(), QIcon::Normal, QIcon::Off);
        register_2->setWindowIcon(icon);
        gridLayout = new QGridLayout(register_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        lineEdit_1nom = new QLineEdit(register_2);
        lineEdit_1nom->setObjectName("lineEdit_1nom");

        gridLayout_2->addWidget(lineEdit_1nom, 3, 2, 1, 1);

        lineEdit_4cin = new QLineEdit(register_2);
        lineEdit_4cin->setObjectName("lineEdit_4cin");

        gridLayout_2->addWidget(lineEdit_4cin, 6, 2, 1, 1);

        label_10 = new QLabel(register_2);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 7, 0, 1, 1);

        lineEdit_2prenom = new QLineEdit(register_2);
        lineEdit_2prenom->setObjectName("lineEdit_2prenom");

        gridLayout_2->addWidget(lineEdit_2prenom, 4, 2, 1, 1);

        label_12 = new QLabel(register_2);
        label_12->setObjectName("label_12");

        gridLayout_2->addWidget(label_12, 3, 0, 1, 2);

        label_15 = new QLabel(register_2);
        label_15->setObjectName("label_15");

        gridLayout_2->addWidget(label_15, 9, 0, 1, 1);

        lineEdit_3cne = new QLineEdit(register_2);
        lineEdit_3cne->setObjectName("lineEdit_3cne");

        gridLayout_2->addWidget(lineEdit_3cne, 5, 2, 1, 1);

        label_11 = new QLabel(register_2);
        label_11->setObjectName("label_11");

        gridLayout_2->addWidget(label_11, 5, 0, 1, 2);

        dateEdit = new QDateEdit(register_2);
        dateEdit->setObjectName("dateEdit");

        gridLayout_2->addWidget(dateEdit, 9, 2, 1, 1);

        label_9 = new QLabel(register_2);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 6, 0, 1, 2);

        label_14 = new QLabel(register_2);
        label_14->setObjectName("label_14");

        gridLayout_2->addWidget(label_14, 4, 0, 1, 2);

        lineEdit_5filiere = new QLineEdit(register_2);
        lineEdit_5filiere->setObjectName("lineEdit_5filiere");

        gridLayout_2->addWidget(lineEdit_5filiere, 7, 2, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        reg_button = new QPushButton(register_2);
        reg_button->setObjectName("reg_button");
        reg_button->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(reg_button, 3, 0, 1, 1);

        label = new QLabel(register_2);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lab = new QLabel(register_2);
        lab->setObjectName("lab");
        sizePolicy.setHeightForWidth(lab->sizePolicy().hasHeightForWidth());
        lab->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lab, 4, 0, 1, 1);

        line = new QFrame(register_2);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 1);


        retranslateUi(register_2);

        QMetaObject::connectSlotsByName(register_2);
    } // setupUi

    void retranslateUi(QDialog *register_2)
    {
        register_2->setWindowTitle(QCoreApplication::translate("register_2", "register", nullptr));
        label_10->setText(QCoreApplication::translate("register_2", "Filiere", nullptr));
        label_12->setText(QCoreApplication::translate("register_2", "Nom", nullptr));
        label_15->setText(QCoreApplication::translate("register_2", "date", nullptr));
        label_11->setText(QCoreApplication::translate("register_2", "CNE", nullptr));
        label_9->setText(QCoreApplication::translate("register_2", "CIN", nullptr));
        label_14->setText(QCoreApplication::translate("register_2", "Prenom", nullptr));
        reg_button->setText(QCoreApplication::translate("register_2", "register", nullptr));
        label->setText(QCoreApplication::translate("register_2", "Inscription", nullptr));
        lab->setText(QCoreApplication::translate("register_2", "+statut", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register_2: public Ui_register_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRE_H
