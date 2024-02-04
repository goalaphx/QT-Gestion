/********************************************************************************
** Form generated from reading UI file 'prof.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROF_H
#define UI_PROF_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_prof
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_refrech;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_registre;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *prof)
    {
        if (prof->objectName().isEmpty())
            prof->setObjectName("prof");
        prof->resize(512, 471);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img_file/teacher.png"), QSize(), QIcon::Normal, QIcon::Off);
        prof->setWindowIcon(icon);
        gridLayout = new QGridLayout(prof);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(prof);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        line = new QFrame(prof);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_delete = new QPushButton(prof);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_delete->setStyleSheet(QString::fromUtf8("/* Style pour le bouton Filiers - Style moderne d'entreprise */\n"
"#pushButton_delete {\n"
"    background: #ffffff; /* Fond blanc */\n"
"    color: #333333; /* Texte gris fonc\303\251 */\n"
"    padding: 15px 25px; /* Espacement autour du texte */\n"
"    border: 2px solid #555555; /* Contour gris fonc\303\251 */\n"
"    border-radius: 22px; /* Coins arrondis */\n"
"    font: 16px \"Helvetica Neue\", sans-serif; /* Police sans-serif moderne */\n"
"    cursor: pointer; /* Curseur pointer au survol */\n"
"    transition: background 0.3s ease, color 0.3s ease, border-color 0.3s ease; /* Animation de transition sur la couleur de fond, la couleur du texte et la couleur du contour */\n"
"}\n"
"\n"
"/* Effet de survol pour le bouton Filiers */\n"
"#pushButton_delete:hover {\n"
"    background: #f1f1f1; /* Fond l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"    color: #555555; /* Texte gris un peu plus clair au survol */\n"
"    border-color: #777777; /* Contour gris plus clair au survol */\n"
"}\n"
"\n"
""
                        "/* Effet de pression pour le bouton Filiers */\n"
"#pushButton_delete:active {\n"
"    background: #e6e6e6; /* Fond l\303\251g\303\250rement plus fonc\303\251 lorsqu'appuy\303\251 */\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1); /* L\303\251g\303\250re ombre lorsqu'appuy\303\251 */\n"
"    transform: translateY(2px); /* L\303\251g\303\250re translation vers le bas pour l'effet de pression */\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton_delete);

        pushButton_refrech = new QPushButton(prof);
        pushButton_refrech->setObjectName("pushButton_refrech");
        pushButton_refrech->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_refrech->setStyleSheet(QString::fromUtf8("/* Style pour le bouton Filiers - Style moderne d'entreprise */\n"
"#pushButton_refrech {\n"
"    background: #ffffff; /* Fond blanc */\n"
"    color: #333333; /* Texte gris fonc\303\251 */\n"
"    padding: 15px 25px; /* Espacement autour du texte */\n"
"    border: 2px solid #555555; /* Contour gris fonc\303\251 */\n"
"    border-radius: 22px; /* Coins arrondis */\n"
"    font: 16px \"Helvetica Neue\", sans-serif; /* Police sans-serif moderne */\n"
"    cursor: pointer; /* Curseur pointer au survol */\n"
"    transition: background 0.3s ease, color 0.3s ease, border-color 0.3s ease; /* Animation de transition sur la couleur de fond, la couleur du texte et la couleur du contour */\n"
"}\n"
"\n"
"/* Effet de survol pour le bouton Filiers */\n"
"#pushButton_refrech:hover {\n"
"    background: #f1f1f1; /* Fond l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"    color: #555555; /* Texte gris un peu plus clair au survol */\n"
"    border-color: #777777; /* Contour gris plus clair au survol */\n"
"}\n"
""
                        "\n"
"/* Effet de pression pour le bouton Filiers */\n"
"#pushButton_refrech:active {\n"
"    background: #e6e6e6; /* Fond l\303\251g\303\250rement plus fonc\303\251 lorsqu'appuy\303\251 */\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1); /* L\303\251g\303\250re ombre lorsqu'appuy\303\251 */\n"
"    transform: translateY(2px); /* L\303\251g\303\250re translation vers le bas pour l'effet de pression */\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton_refrech);


        gridLayout->addLayout(horizontalLayout_3, 2, 1, 1, 1);

        tableWidget = new QTableWidget(prof);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setDefaultSectionSize(160);
        tableWidget->verticalHeader()->setDefaultSectionSize(30);

        gridLayout->addWidget(tableWidget, 3, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_registre = new QPushButton(prof);
        pushButton_registre->setObjectName("pushButton_registre");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_registre->sizePolicy().hasHeightForWidth());
        pushButton_registre->setSizePolicy(sizePolicy);
        pushButton_registre->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_registre->setStyleSheet(QString::fromUtf8("/* Style pour le bouton Filiers - Style moderne d'entreprise */\n"
"#pushButton_registre {\n"
"    background: #ffffff; /* Fond blanc */\n"
"    color: #333333; /* Texte gris fonc\303\251 */\n"
"    padding: 15px 25px; /* Espacement autour du texte */\n"
"    border: 2px solid #555555; /* Contour gris fonc\303\251 */\n"
"    border-radius: 22px; /* Coins arrondis */\n"
"    font: 16px \"Helvetica Neue\", sans-serif; /* Police sans-serif moderne */\n"
"    cursor: pointer; /* Curseur pointer au survol */\n"
"    transition: background 0.3s ease, color 0.3s ease, border-color 0.3s ease; /* Animation de transition sur la couleur de fond, la couleur du texte et la couleur du contour */\n"
"}\n"
"\n"
"/* Effet de survol pour le bouton Filiers */\n"
"#pushButton_registre:hover {\n"
"    background: #f1f1f1; /* Fond l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"    color: #555555; /* Texte gris un peu plus clair au survol */\n"
"    border-color: #777777; /* Contour gris plus clair au survol */\n"
"}\n"
""
                        "\n"
"/* Effet de pression pour le bouton Filiers */\n"
"#pushButton_registre:active {\n"
"    background: #e6e6e6; /* Fond l\303\251g\303\250rement plus fonc\303\251 lorsqu'appuy\303\251 */\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1); /* L\303\251g\303\250re ombre lorsqu'appuy\303\251 */\n"
"    transform: translateY(2px); /* L\303\251g\303\250re translation vers le bas pour l'effet de pression */\n"
"}\n"
""));

        horizontalLayout_4->addWidget(pushButton_registre);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 2, 2);

        frame = new QFrame(prof);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");

        gridLayout->addWidget(frame, 5, 1, 1, 1);


        retranslateUi(prof);

        QMetaObject::connectSlotsByName(prof);
    } // setupUi

    void retranslateUi(QDialog *prof)
    {
        prof->setWindowTitle(QCoreApplication::translate("prof", "Professeurs", nullptr));
        label->setText(QCoreApplication::translate("prof", "Professeurs", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("prof", "Supprimer", nullptr));
        pushButton_refrech->setText(QCoreApplication::translate("prof", "Actualiser", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("prof", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("prof", "Pr\303\251nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("prof", "CIN", nullptr));
        pushButton_registre->setText(QCoreApplication::translate("prof", "Inscription", nullptr));
    } // retranslateUi

};

namespace Ui {
    class prof: public Ui_prof {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROF_H
