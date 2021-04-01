/********************************************************************************
** Form generated from reading UI file 'frmCitoyen.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMCITOYEN_H
#define UI_FRMCITOYEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
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

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(682, 400);
        tabWidget = new QTabWidget(Form);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(60, 30, 581, 351));
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
        pb_Ajouter->setGeometry(QRect(290, 120, 75, 23));
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

        retranslateUi(Form);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Form", "CIN:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Form", "Nom:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Form", "Prenom:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Form", "Adresse:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Form", "Telephone:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Form", "Email:", Q_NULLPTR));
        pb_Ajouter->setText(QApplication::translate("Form", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Form", "Ajouter un citoyen", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Form", "Afficher", Q_NULLPTR));
        label_7->setText(QApplication::translate("Form", "cIN:", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("Form", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Form", "Supprimer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMCITOYEN_H
