/********************************************************************************
** Form generated from reading UI file 'frmCrime.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMCRIME_H
#define UI_FRMCRIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
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
    QLabel *label_5;
    QLineEdit *le_id;
    QLineEdit *Le_lieu;
    QPushButton *pb_Ajouter;
    QDateEdit *de_date;
    QTextEdit *te_description;
    QRadioButton *rb_Vol;
    QRadioButton *rb_meurtre;
    QRadioButton *rb_braquage;
    QRadioButton *rb_enlevement;
    QGroupBox *gb_categorie;
    QWidget *tab_2;
    QTableView *Tab_crime;
    QWidget *tab_3;
    QLabel *label_7;
    QLineEdit *le_id_supp;
    QPushButton *pb_supprimer;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(744, 392);
        tabWidget = new QTabWidget(Form);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(90, 30, 571, 321));
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
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 200, 61, 16));
        le_id = new QLineEdit(tab);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(110, 40, 113, 20));
        Le_lieu = new QLineEdit(tab);
        Le_lieu->setObjectName(QStringLiteral("Le_lieu"));
        Le_lieu->setGeometry(QRect(110, 100, 113, 20));
        pb_Ajouter = new QPushButton(tab);
        pb_Ajouter->setObjectName(QStringLiteral("pb_Ajouter"));
        pb_Ajouter->setGeometry(QRect(480, 150, 75, 23));
        de_date = new QDateEdit(tab);
        de_date->setObjectName(QStringLiteral("de_date"));
        de_date->setGeometry(QRect(110, 70, 110, 22));
        te_description = new QTextEdit(tab);
        te_description->setObjectName(QStringLiteral("te_description"));
        te_description->setGeometry(QRect(110, 150, 341, 141));
        rb_Vol = new QRadioButton(tab);
        rb_Vol->setObjectName(QStringLiteral("rb_Vol"));
        rb_Vol->setGeometry(QRect(290, 40, 82, 17));
        rb_meurtre = new QRadioButton(tab);
        rb_meurtre->setObjectName(QStringLiteral("rb_meurtre"));
        rb_meurtre->setGeometry(QRect(290, 60, 82, 17));
        rb_braquage = new QRadioButton(tab);
        rb_braquage->setObjectName(QStringLiteral("rb_braquage"));
        rb_braquage->setGeometry(QRect(290, 80, 82, 17));
        rb_enlevement = new QRadioButton(tab);
        rb_enlevement->setObjectName(QStringLiteral("rb_enlevement"));
        rb_enlevement->setGeometry(QRect(290, 100, 82, 17));
        gb_categorie = new QGroupBox(tab);
        gb_categorie->setObjectName(QStringLiteral("gb_categorie"));
        gb_categorie->setGeometry(QRect(280, 10, 141, 131));
        tabWidget->addTab(tab, QString());
        gb_categorie->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_5->raise();
        le_id->raise();
        Le_lieu->raise();
        pb_Ajouter->raise();
        de_date->raise();
        te_description->raise();
        rb_Vol->raise();
        rb_meurtre->raise();
        rb_braquage->raise();
        rb_enlevement->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        Tab_crime = new QTableView(tab_2);
        Tab_crime->setObjectName(QStringLiteral("Tab_crime"));
        Tab_crime->setGeometry(QRect(30, 40, 501, 231));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 40, 47, 13));
        le_id_supp = new QLineEdit(tab_3);
        le_id_supp->setObjectName(QStringLiteral("le_id_supp"));
        le_id_supp->setGeometry(QRect(110, 40, 113, 20));
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
        label->setText(QApplication::translate("Form", "ID:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Form", "date:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Form", "Lieu:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Form", "Description:", Q_NULLPTR));
        pb_Ajouter->setText(QApplication::translate("Form", "Ajouter", Q_NULLPTR));
        rb_Vol->setText(QApplication::translate("Form", "Vol", Q_NULLPTR));
        rb_meurtre->setText(QApplication::translate("Form", "Meurtre", Q_NULLPTR));
        rb_braquage->setText(QApplication::translate("Form", "Braquage", Q_NULLPTR));
        rb_enlevement->setText(QApplication::translate("Form", "enlevement", Q_NULLPTR));
        gb_categorie->setTitle(QApplication::translate("Form", "Categorie:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Form", "Ajouter un Crime", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Form", "Afficher", Q_NULLPTR));
        label_7->setText(QApplication::translate("Form", "ID:", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("Form", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Form", "Supprimer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMCRIME_H
