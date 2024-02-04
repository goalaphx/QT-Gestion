/********************************************************************************
** Form generated from reading UI file 'regprof.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGPROF_H
#define UI_REGPROF_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_regprof
{
public:
    QGridLayout *gridLayout;
    QPushButton *regprof_2;
    QLabel *lab;
    QGridLayout *gridLayout_2;
    QLabel *label_14;
    QLabel *label_9;
    QLineEdit *lineEdit_2prenom;
    QLineEdit *lineEdit_4cin;
    QLineEdit *lineEdit_1nom;
    QLabel *label_12;
    QLabel *label;
    QFrame *line;

    void setupUi(QDialog *regprof)
    {
        if (regprof->objectName().isEmpty())
            regprof->setObjectName("regprof");
        regprof->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img_file/register.png"), QSize(), QIcon::Normal, QIcon::Off);
        regprof->setWindowIcon(icon);
        gridLayout = new QGridLayout(regprof);
        gridLayout->setObjectName("gridLayout");
        regprof_2 = new QPushButton(regprof);
        regprof_2->setObjectName("regprof_2");
        regprof_2->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(regprof_2, 3, 0, 1, 2);

        lab = new QLabel(regprof);
        lab->setObjectName("lab");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lab->sizePolicy().hasHeightForWidth());
        lab->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lab, 4, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_14 = new QLabel(regprof);
        label_14->setObjectName("label_14");

        gridLayout_2->addWidget(label_14, 1, 0, 1, 2);

        label_9 = new QLabel(regprof);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 2, 0, 1, 2);

        lineEdit_2prenom = new QLineEdit(regprof);
        lineEdit_2prenom->setObjectName("lineEdit_2prenom");

        gridLayout_2->addWidget(lineEdit_2prenom, 1, 2, 1, 1);

        lineEdit_4cin = new QLineEdit(regprof);
        lineEdit_4cin->setObjectName("lineEdit_4cin");

        gridLayout_2->addWidget(lineEdit_4cin, 2, 2, 1, 1);

        lineEdit_1nom = new QLineEdit(regprof);
        lineEdit_1nom->setObjectName("lineEdit_1nom");

        gridLayout_2->addWidget(lineEdit_1nom, 0, 2, 1, 1);

        label_12 = new QLabel(regprof);
        label_12->setObjectName("label_12");

        gridLayout_2->addWidget(label_12, 0, 0, 1, 2);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 2);

        label = new QLabel(regprof);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        line = new QFrame(regprof);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);


        retranslateUi(regprof);

        QMetaObject::connectSlotsByName(regprof);
    } // setupUi

    void retranslateUi(QDialog *regprof)
    {
        regprof->setWindowTitle(QCoreApplication::translate("regprof", "register", nullptr));
        regprof_2->setText(QCoreApplication::translate("regprof", "register", nullptr));
        lab->setText(QCoreApplication::translate("regprof", "+statut", nullptr));
        label_14->setText(QCoreApplication::translate("regprof", "Prenom", nullptr));
        label_9->setText(QCoreApplication::translate("regprof", "CIN", nullptr));
        label_12->setText(QCoreApplication::translate("regprof", "Nom", nullptr));
        label->setText(QCoreApplication::translate("regprof", "Inscription", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regprof: public Ui_regprof {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGPROF_H
