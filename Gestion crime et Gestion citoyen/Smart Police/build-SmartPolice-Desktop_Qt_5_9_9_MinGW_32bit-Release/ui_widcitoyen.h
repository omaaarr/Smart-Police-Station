/********************************************************************************
** Form generated from reading UI file 'widcitoyen.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDCITOYEN_H
#define UI_WIDCITOYEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widCitoyen
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *le_CIN;
    QLineEdit *Le_Nom;
    QLineEdit *Le_Prenom;
    QLineEdit *Le_Adresse;
    QLineEdit *Le_Telephone;
    QLineEdit *Le_Email;
    QPushButton *pb_Ajouter;
    QWidget *tab_2;
    QTableView *Tab_citoyen;
    QWidget *tab_3;
    QLabel *label_7;
    QLineEdit *le_cIN_supp;
    QPushButton *pb_supprimer;
    QWidget *tab_4;
    QLabel *label_8;
    QLineEdit *le_CIN_recherche;
    QLabel *label_9;
    QLineEdit *Le_Nom_recherche;
    QLabel *label_10;
    QLineEdit *Le_Prenom_recherche;
    QTableView *tab_recherche;
    QPushButton *pb_recherche;
    QGroupBox *groupBox;
    QCheckBox *cb_tri_nom;
    QCheckBox *cb_tri_cIN;
    QWidget *tab_5;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *le_email_email;
    QLineEdit *le_sujet_email;
    QPushButton *pb_envoyer_email;
    QTextEdit *te_message_email;

    void setupUi(QWidget *widCitoyen)
    {
        if (widCitoyen->objectName().isEmpty())
            widCitoyen->setObjectName(QStringLiteral("widCitoyen"));
        widCitoyen->resize(633, 359);
        tabWidget = new QTabWidget(widCitoyen);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 20, 561, 321));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 47, 13));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 70, 47, 13));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 100, 47, 13));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 130, 47, 13));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 160, 47, 13));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 190, 47, 13));
        le_CIN = new QLineEdit(tab);
        le_CIN->setObjectName(QStringLiteral("le_CIN"));
        le_CIN->setGeometry(QRect(110, 40, 113, 20));
        Le_Nom = new QLineEdit(tab);
        Le_Nom->setObjectName(QStringLiteral("Le_Nom"));
        Le_Nom->setGeometry(QRect(110, 70, 113, 20));
        Le_Prenom = new QLineEdit(tab);
        Le_Prenom->setObjectName(QStringLiteral("Le_Prenom"));
        Le_Prenom->setGeometry(QRect(110, 100, 113, 20));
        Le_Adresse = new QLineEdit(tab);
        Le_Adresse->setObjectName(QStringLiteral("Le_Adresse"));
        Le_Adresse->setGeometry(QRect(110, 130, 113, 20));
        Le_Telephone = new QLineEdit(tab);
        Le_Telephone->setObjectName(QStringLiteral("Le_Telephone"));
        Le_Telephone->setGeometry(QRect(110, 160, 113, 20));
        Le_Email = new QLineEdit(tab);
        Le_Email->setObjectName(QStringLiteral("Le_Email"));
        Le_Email->setGeometry(QRect(110, 190, 113, 20));
        pb_Ajouter = new QPushButton(tab);
        pb_Ajouter->setObjectName(QStringLiteral("pb_Ajouter"));
        pb_Ajouter->setGeometry(QRect(310, 120, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        Tab_citoyen = new QTableView(tab_2);
        Tab_citoyen->setObjectName(QStringLiteral("Tab_citoyen"));
        Tab_citoyen->setGeometry(QRect(30, 40, 501, 231));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 40, 47, 13));
        le_cIN_supp = new QLineEdit(tab_3);
        le_cIN_supp->setObjectName(QStringLiteral("le_cIN_supp"));
        le_cIN_supp->setGeometry(QRect(110, 40, 113, 20));
        pb_supprimer = new QPushButton(tab_3);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(130, 130, 75, 23));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 0, 47, 13));
        le_CIN_recherche = new QLineEdit(tab_4);
        le_CIN_recherche->setObjectName(QStringLiteral("le_CIN_recherche"));
        le_CIN_recherche->setGeometry(QRect(60, 0, 113, 20));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 30, 47, 13));
        Le_Nom_recherche = new QLineEdit(tab_4);
        Le_Nom_recherche->setObjectName(QStringLiteral("Le_Nom_recherche"));
        Le_Nom_recherche->setGeometry(QRect(60, 30, 111, 20));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 60, 47, 13));
        Le_Prenom_recherche = new QLineEdit(tab_4);
        Le_Prenom_recherche->setObjectName(QStringLiteral("Le_Prenom_recherche"));
        Le_Prenom_recherche->setGeometry(QRect(60, 60, 111, 20));
        tab_recherche = new QTableView(tab_4);
        tab_recherche->setObjectName(QStringLiteral("tab_recherche"));
        tab_recherche->setGeometry(QRect(20, 90, 511, 192));
        pb_recherche = new QPushButton(tab_4);
        pb_recherche->setObjectName(QStringLiteral("pb_recherche"));
        pb_recherche->setGeometry(QRect(460, 60, 75, 23));
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(210, 0, 120, 80));
        cb_tri_nom = new QCheckBox(groupBox);
        cb_tri_nom->setObjectName(QStringLiteral("cb_tri_nom"));
        cb_tri_nom->setGeometry(QRect(10, 20, 70, 17));
        cb_tri_cIN = new QCheckBox(groupBox);
        cb_tri_cIN->setObjectName(QStringLiteral("cb_tri_cIN"));
        cb_tri_cIN->setGeometry(QRect(10, 50, 70, 17));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_11 = new QLabel(tab_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 50, 47, 13));
        label_12 = new QLabel(tab_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 80, 47, 13));
        label_13 = new QLabel(tab_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 170, 47, 13));
        le_email_email = new QLineEdit(tab_5);
        le_email_email->setObjectName(QStringLiteral("le_email_email"));
        le_email_email->setGeometry(QRect(80, 50, 113, 20));
        le_sujet_email = new QLineEdit(tab_5);
        le_sujet_email->setObjectName(QStringLiteral("le_sujet_email"));
        le_sujet_email->setGeometry(QRect(80, 80, 113, 20));
        pb_envoyer_email = new QPushButton(tab_5);
        pb_envoyer_email->setObjectName(QStringLiteral("pb_envoyer_email"));
        pb_envoyer_email->setGeometry(QRect(430, 160, 75, 23));
        te_message_email = new QTextEdit(tab_5);
        te_message_email->setObjectName(QStringLiteral("te_message_email"));
        te_message_email->setGeometry(QRect(80, 110, 311, 171));
        tabWidget->addTab(tab_5, QString());

        retranslateUi(widCitoyen);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(widCitoyen);
    } // setupUi

    void retranslateUi(QWidget *widCitoyen)
    {
        widCitoyen->setWindowTitle(QApplication::translate("widCitoyen", "Form", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        tabWidget->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("widCitoyen", "CIN:", Q_NULLPTR));
        label_2->setText(QApplication::translate("widCitoyen", "Nom:", Q_NULLPTR));
        label_3->setText(QApplication::translate("widCitoyen", "Prenom:", Q_NULLPTR));
        label_4->setText(QApplication::translate("widCitoyen", "Adresse:", Q_NULLPTR));
        label_5->setText(QApplication::translate("widCitoyen", "Telephone:", Q_NULLPTR));
        label_6->setText(QApplication::translate("widCitoyen", "Email:", Q_NULLPTR));
        pb_Ajouter->setText(QApplication::translate("widCitoyen", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("widCitoyen", "Ajouter un citoyen", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("widCitoyen", "Afficher", Q_NULLPTR));
        label_7->setText(QApplication::translate("widCitoyen", "cIN:", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("widCitoyen", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("widCitoyen", "Supprimer", Q_NULLPTR));
        label_8->setText(QApplication::translate("widCitoyen", "CIN:", Q_NULLPTR));
        label_9->setText(QApplication::translate("widCitoyen", "Nom:", Q_NULLPTR));
        label_10->setText(QApplication::translate("widCitoyen", "Prenom:", Q_NULLPTR));
        pb_recherche->setText(QApplication::translate("widCitoyen", "rechercher", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("widCitoyen", "Trier par", Q_NULLPTR));
        cb_tri_nom->setText(QApplication::translate("widCitoyen", "Nom", Q_NULLPTR));
        cb_tri_cIN->setText(QApplication::translate("widCitoyen", "cIN", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("widCitoyen", "Recherche", Q_NULLPTR));
        label_11->setText(QApplication::translate("widCitoyen", "Email:", Q_NULLPTR));
        label_12->setText(QApplication::translate("widCitoyen", "Sujet:", Q_NULLPTR));
        label_13->setText(QApplication::translate("widCitoyen", "Message:", Q_NULLPTR));
        pb_envoyer_email->setText(QApplication::translate("widCitoyen", "Envoyer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("widCitoyen", "Email", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class widCitoyen: public Ui_widCitoyen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDCITOYEN_H
