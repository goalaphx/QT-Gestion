/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_username;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_info;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(337, 284);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img_file/login.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 80, 261, 186));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName("lineEdit_username");

        horizontalLayout->addWidget(lineEdit_username);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName("lineEdit_password");

        horizontalLayout_2->addWidget(lineEdit_password);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font1.setBold(false);
        font1.setItalic(false);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setFocusPolicy(Qt::ClickFocus);
        pushButton->setStyleSheet(QString::fromUtf8("/* Style pour le bouton Filiers - Style moderne d'entreprise */\n"
"#pushButton {\n"
"    background: #ffffff; /* Fond blanc */\n"
"    color: #333333; /* Texte gris fonc\303\251 */\n"
"    padding: 15px 25px; /* Espacement autour du texte */\n"
"    border: 2px solid #555555; /* Contour gris fonc\303\251 */\n"
"    border-radius: 25px; /* Coins arrondis */\n"
"    font: 16px \"Helvetica Neue\", sans-serif; /* Police sans-serif moderne */\n"
"    cursor: pointer; /* Curseur pointer au survol */\n"
"    transition: background 0.3s ease, color 0.3s ease, border-color 0.3s ease; /* Animation de transition sur la couleur de fond, la couleur du texte et la couleur du contour */\n"
"}\n"
"\n"
"/* Effet de survol pour le bouton Filiers */\n"
"#pushButton:hover {\n"
"    background: #f1f1f1; /* Fond l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"    color: #555555; /* Texte gris un peu plus clair au survol */\n"
"    border-color: #777777; /* Contour gris plus clair au survol */\n"
"}\n"
"\n"
"/* Effet de"
                        " pression pour le bouton Filiers */\n"
"#pushButton:active {\n"
"    background: #e6e6e6; /* Fond l\303\251g\303\250rement plus fonc\303\251 lorsqu'appuy\303\251 */\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1); /* L\303\251g\303\250re ombre lorsqu'appuy\303\251 */\n"
"    transform: translateY(2px); /* L\303\251g\303\250re translation vers le bas pour l'effet de pression */\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img option/login_icon_176151.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setCheckable(true);
        pushButton->setChecked(true);
        pushButton->setAutoDefault(true);
        pushButton->setFlat(false);

        verticalLayout_2->addWidget(pushButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_info = new QLabel(layoutWidget);
        label_info->setObjectName("label_info");

        horizontalLayout_3->addWidget(label_info);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2\n"
"{	\n"
"	border-width: 7;\n"
"	border-color: rgb(255, 0, 0);\n"
"	border-radius: 5;\n"
"	border-image: none;\n"
"	font: 9pt \"Segoe UI\";\n"
"	text-decoration: underline;\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 10, 271, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift Condensed")});
        font2.setPointSize(7);
        font2.setBold(false);
        label_3->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-10, 10, 101, 51));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/img_file/fst.png);"));
        MainWindow->setCentralWidget(centralwidget);
        label_3->raise();
        layoutWidget->raise();
        label_4->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 337, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        label->setBuddy(lineEdit_username);
        label_2->setBuddy(lineEdit_password);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainWindow);

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nom d'utilisateur", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Mot de passe", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Login</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QString());
        label_info->setText(QCoreApplication::translate("MainWindow", "+statut", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "about", nullptr));
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Gestion de Departement Genie Informatique</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#35362c;\">D\303\251partement Genie Informatique</span></p></body></html>", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
