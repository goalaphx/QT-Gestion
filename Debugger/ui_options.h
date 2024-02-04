/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_options
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *filiers;
    QPushButton *note;
    QHBoxLayout *horizontalLayout;
    QPushButton *etudiant;
    QPushButton *prof;

    void setupUi(QDialog *options)
    {
        if (options->objectName().isEmpty())
            options->setObjectName("options");
        options->resize(423, 307);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img_file/options.png"), QSize(), QIcon::Normal, QIcon::Off);
        options->setWindowIcon(icon);
        options->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(options);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame = new QFrame(options);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(541, 16777215));
        frame->setLayoutDirection(Qt::LeftToRight);
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(7, 22, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(7);
        font.setBold(true);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        filiers = new QPushButton(frame);
        filiers->setObjectName("filiers");
        filiers->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(filiers->sizePolicy().hasHeightForWidth());
        filiers->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font1.setBold(false);
        font1.setItalic(false);
        font1.setKerning(true);
        filiers->setFont(font1);
        filiers->setCursor(QCursor(Qt::PointingHandCursor));
        filiers->setLayoutDirection(Qt::LeftToRight);
        filiers->setAutoFillBackground(false);
        filiers->setStyleSheet(QString::fromUtf8("/* Style pour le bouton Filiers - Style moderne d'entreprise */\n"
"#filiers {\n"
"    background: #ffffff; /* Fond blanc */\n"
"    color: #333333; /* Texte gris fonc\303\251 */\n"
"    padding: 15px 25px; /* Espacement autour du texte */\n"
"    border: 2px solid #555555; /* Contour gris fonc\303\251 */\n"
"    border-radius: 26px; /* Coins arrondis */\n"
"    font: 16px \"Helvetica Neue\", sans-serif; /* Police sans-serif moderne */\n"
"    cursor: pointer; /* Curseur pointer au survol */\n"
"    transition: background 0.3s ease, color 0.3s ease, border-color 0.3s ease; /* Animation de transition sur la couleur de fond, la couleur du texte et la couleur du contour */\n"
"}\n"
"\n"
"/* Effet de survol pour le bouton Filiers */\n"
"#filiers:hover {\n"
"    background: #f1f1f1; /* Fond l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"    color: #555555; /* Texte gris un peu plus clair au survol */\n"
"    border-color: #777777; /* Contour gris plus clair au survol */\n"
"}\n"
"\n"
"/* Effet de press"
                        "ion pour le bouton Filiers */\n"
"#filiers:active {\n"
"    background: #e6e6e6; /* Fond l\303\251g\303\250rement plus fonc\303\251 lorsqu'appuy\303\251 */\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1); /* L\303\251g\303\250re ombre lorsqu'appuy\303\251 */\n"
"    transform: translateY(2px); /* L\303\251g\303\250re translation vers le bas pour l'effet de pression */\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img_file/modules.png"), QSize(), QIcon::Normal, QIcon::Off);
        filiers->setIcon(icon1);
        filiers->setCheckable(true);
        filiers->setChecked(true);
        filiers->setAutoRepeat(false);
        filiers->setAutoExclusive(false);
        filiers->setAutoDefault(false);
        filiers->setFlat(false);

        horizontalLayout_2->addWidget(filiers);

        note = new QPushButton(frame);
        note->setObjectName("note");
        sizePolicy1.setHeightForWidth(note->sizePolicy().hasHeightForWidth());
        note->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font2.setBold(false);
        font2.setItalic(false);
        note->setFont(font2);
        note->setCursor(QCursor(Qt::PointingHandCursor));
        note->setStyleSheet(QString::fromUtf8("/* Style pour le bouton Filiers - Style moderne d'entreprise */\n"
"#note {\n"
"    background: #ffffff; /* Fond blanc */\n"
"    color: #333333; /* Texte gris fonc\303\251 */\n"
"    padding: 15px 25px; /* Espacement autour du texte */\n"
"    border: 2px solid #555555; /* Contour gris fonc\303\251 */\n"
"    border-radius: 26px; /* Coins arrondis */\n"
"    font: 16px \"Helvetica Neue\", sans-serif; /* Police sans-serif moderne */\n"
"    cursor: pointer; /* Curseur pointer au survol */\n"
"    transition: background 0.3s ease, color 0.3s ease, border-color 0.3s ease; /* Animation de transition sur la couleur de fond, la couleur du texte et la couleur du contour */\n"
"}\n"
"\n"
"/* Effet de survol pour le bouton Filiers */\n"
"#note:hover {\n"
"    background: #f1f1f1; /* Fond l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"    color: #555555; /* Texte gris un peu plus clair au survol */\n"
"    border-color: #777777; /* Contour gris plus clair au survol */\n"
"}\n"
"\n"
"/* Effet de pression po"
                        "ur le bouton Filiers */\n"
"#note:active {\n"
"    background: #e6e6e6; /* Fond l\303\251g\303\250rement plus fonc\303\251 lorsqu'appuy\303\251 */\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1); /* L\303\251g\303\250re ombre lorsqu'appuy\303\251 */\n"
"    transform: translateY(2px); /* L\303\251g\303\250re translation vers le bas pour l'effet de pression */\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img_file/time.png"), QSize(), QIcon::Normal, QIcon::Off);
        note->setIcon(icon2);

        horizontalLayout_2->addWidget(note);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        etudiant = new QPushButton(frame);
        etudiant->setObjectName("etudiant");
        sizePolicy1.setHeightForWidth(etudiant->sizePolicy().hasHeightForWidth());
        etudiant->setSizePolicy(sizePolicy1);
        etudiant->setFont(font2);
        etudiant->setCursor(QCursor(Qt::PointingHandCursor));
        etudiant->setStyleSheet(QString::fromUtf8("/* Style pour le bouton Filiers - Style moderne d'entreprise */\n"
"#etudiant {\n"
"    background: #ffffff; /* Fond blanc */\n"
"    color: #333333; /* Texte gris fonc\303\251 */\n"
"    padding: 15px 25px; /* Espacement autour du texte */\n"
"    border: 2px solid #555555; /* Contour gris fonc\303\251 */\n"
"    border-radius: 26px; /* Coins arrondis */\n"
"    font: 16px \"Helvetica Neue\", sans-serif; /* Police sans-serif moderne */\n"
"    cursor: pointer; /* Curseur pointer au survol */\n"
"    transition: background 0.3s ease, color 0.3s ease, border-color 0.3s ease; /* Animation de transition sur la couleur de fond, la couleur du texte et la couleur du contour */\n"
"}\n"
"\n"
"/* Effet de survol pour le bouton Filiers */\n"
"#etudiant:hover {\n"
"    background: #f1f1f1; /* Fond l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"    color: #555555; /* Texte gris un peu plus clair au survol */\n"
"    border-color: #777777; /* Contour gris plus clair au survol */\n"
"}\n"
"\n"
"/* Effet de pre"
                        "ssion pour le bouton Filiers */\n"
"#etudiant:active {\n"
"    background: #e6e6e6; /* Fond l\303\251g\303\250rement plus fonc\303\251 lorsqu'appuy\303\251 */\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1); /* L\303\251g\303\250re ombre lorsqu'appuy\303\251 */\n"
"    transform: translateY(2px); /* L\303\251g\303\250re translation vers le bas pour l'effet de pression */\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img_file/student.png"), QSize(), QIcon::Normal, QIcon::Off);
        etudiant->setIcon(icon3);

        horizontalLayout->addWidget(etudiant);

        prof = new QPushButton(frame);
        prof->setObjectName("prof");
        sizePolicy1.setHeightForWidth(prof->sizePolicy().hasHeightForWidth());
        prof->setSizePolicy(sizePolicy1);
        prof->setFont(font2);
        prof->setCursor(QCursor(Qt::PointingHandCursor));
        prof->setStyleSheet(QString::fromUtf8("/* Style pour le bouton Filiers - Style moderne d'entreprise */\n"
"#prof {\n"
"    background: #ffffff; /* Fond blanc */\n"
"    color: #333333; /* Texte gris fonc\303\251 */\n"
"    padding: 15px 25px; /* Espacement autour du texte */\n"
"    border: 2px solid #555555; /* Contour gris fonc\303\251 */\n"
"    border-radius: 26px; /* Coins arrondis */\n"
"    font: 16px \"Helvetica Neue\", sans-serif; /* Police sans-serif moderne */\n"
"    cursor: pointer; /* Curseur pointer au survol */\n"
"    transition: background 0.3s ease, color 0.3s ease, border-color 0.3s ease; /* Animation de transition sur la couleur de fond, la couleur du texte et la couleur du contour */\n"
"}\n"
"\n"
"/* Effet de survol pour le bouton Filiers */\n"
"#prof:hover {\n"
"    background: #f1f1f1; /* Fond l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"    color: #555555; /* Texte gris un peu plus clair au survol */\n"
"    border-color: #777777; /* Contour gris plus clair au survol */\n"
"}\n"
"\n"
"/* Effet de pression po"
                        "ur le bouton Filiers */\n"
"#prof:active {\n"
"    background: #e6e6e6; /* Fond l\303\251g\303\250rement plus fonc\303\251 lorsqu'appuy\303\251 */\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1); /* L\303\251g\303\250re ombre lorsqu'appuy\303\251 */\n"
"    transform: translateY(2px); /* L\303\251g\303\250re translation vers le bas pour l'effet de pression */\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img_file/teacher.png"), QSize(), QIcon::Normal, QIcon::Off);
        prof->setIcon(icon4);

        horizontalLayout->addWidget(prof);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_3);


        verticalLayout_2->addWidget(frame);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(options);

        filiers->setDefault(false);


        QMetaObject::connectSlotsByName(options);
    } // setupUi

    void retranslateUi(QDialog *options)
    {
        options->setWindowTitle(QCoreApplication::translate("options", "Les options", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("options", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:700; color:#0055ff;\">Les Options</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("options", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700; color:#35362c;\">Les Options</span></p></body></html>", nullptr));
#if QT_CONFIG(statustip)
        filiers->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        filiers->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        filiers->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        filiers->setText(QCoreApplication::translate("options", "            Fili\303\250res     ", nullptr));
        note->setText(QCoreApplication::translate("options", "          Emplois    ", nullptr));
        etudiant->setText(QCoreApplication::translate("options", "           Etudiant   ", nullptr));
        prof->setText(QCoreApplication::translate("options", "         Professeur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class options: public Ui_options {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H
