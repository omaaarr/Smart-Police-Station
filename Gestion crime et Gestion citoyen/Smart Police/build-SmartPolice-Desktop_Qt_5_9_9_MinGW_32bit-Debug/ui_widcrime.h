/********************************************************************************
** Form generated from reading UI file 'widcrime.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDCRIME_H
#define UI_WIDCRIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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

class Ui_widcrime
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
    QWidget *tab_4;
    QLineEdit *le_id_recherche;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_8;
    QLineEdit *le_lieu_recherche;
    QTableView *tab_recherche;
    QPushButton *pb_recherche;
    QLineEdit *le_date_recherche;
    QCheckBox *cb_tri_Date;
    QCheckBox *cb_tri_Lieu;
    QGroupBox *groupBox;

    void setupUi(QWidget *widcrime)
    {
        if (widcrime->objectName().isEmpty())
            widcrime->setObjectName(QStringLiteral("widcrime"));
        widcrime->setWindowModality(Qt::WindowModal);
        widcrime->resize(643, 359);
        tabWidget = new QTabWidget(widcrime);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(40, 20, 571, 321));
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
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        le_id_recherche = new QLineEdit(tab_4);
        le_id_recherche->setObjectName(QStringLiteral("le_id_recherche"));
        le_id_recherche->setGeometry(QRect(50, 10, 113, 20));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 47, 13));
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 70, 47, 13));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 40, 47, 13));
        le_lieu_recherche = new QLineEdit(tab_4);
        le_lieu_recherche->setObjectName(QStringLiteral("le_lieu_recherche"));
        le_lieu_recherche->setGeometry(QRect(50, 40, 113, 20));
        tab_recherche = new QTableView(tab_4);
        tab_recherche->setObjectName(QStringLiteral("tab_recherche"));
        tab_recherche->setGeometry(QRect(10, 110, 491, 181));
        pb_recherche = new QPushButton(tab_4);
        pb_recherche->setObjectName(QStringLiteral("pb_recherche"));
        pb_recherche->setGeometry(QRect(420, 70, 75, 23));
        le_date_recherche = new QLineEdit(tab_4);
        le_date_recherche->setObjectName(QStringLiteral("le_date_recherche"));
        le_date_recherche->setGeometry(QRect(50, 70, 113, 20));
        cb_tri_Date = new QCheckBox(tab_4);
        cb_tri_Date->setObjectName(QStringLiteral("cb_tri_Date"));
        cb_tri_Date->setGeometry(QRect(210, 40, 70, 17));
        cb_tri_Lieu = new QCheckBox(tab_4);
        cb_tri_Lieu->setObjectName(QStringLiteral("cb_tri_Lieu"));
        cb_tri_Lieu->setGeometry(QRect(210, 70, 70, 17));
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(190, 10, 120, 80));
        tabWidget->addTab(tab_4, QString());
        groupBox->raise();
        le_id_recherche->raise();
        label_4->raise();
        label_6->raise();
        label_8->raise();
        le_lieu_recherche->raise();
        tab_recherche->raise();
        pb_recherche->raise();
        le_date_recherche->raise();
        cb_tri_Date->raise();
        cb_tri_Lieu->raise();

        retranslateUi(widcrime);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(widcrime);
    } // setupUi

    void retranslateUi(QWidget *widcrime)
    {
        widcrime->setWindowTitle(QApplication::translate("widcrime", "Crime", Q_NULLPTR));
        label->setText(QApplication::translate("widcrime", "ID:", Q_NULLPTR));
        label_2->setText(QApplication::translate("widcrime", "date:", Q_NULLPTR));
        label_3->setText(QApplication::translate("widcrime", "Lieu:", Q_NULLPTR));
        label_5->setText(QApplication::translate("widcrime", "Description:", Q_NULLPTR));
        pb_Ajouter->setText(QApplication::translate("widcrime", "Ajouter", Q_NULLPTR));
        rb_Vol->setText(QApplication::translate("widcrime", "Vol", Q_NULLPTR));
        rb_meurtre->setText(QApplication::translate("widcrime", "Meurtre", Q_NULLPTR));
        rb_braquage->setText(QApplication::translate("widcrime", "Braquage", Q_NULLPTR));
        rb_enlevement->setText(QApplication::translate("widcrime", "enlevement", Q_NULLPTR));
        gb_categorie->setTitle(QApplication::translate("widcrime", "Categorie:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("widcrime", "Ajouter un Crime", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("widcrime", "Afficher", Q_NULLPTR));
        label_7->setText(QApplication::translate("widcrime", "ID:", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("widcrime", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("widcrime", "Supprimer", Q_NULLPTR));
        label_4->setText(QApplication::translate("widcrime", "ID:", Q_NULLPTR));
        label_6->setText(QApplication::translate("widcrime", "Date:", Q_NULLPTR));
        label_8->setText(QApplication::translate("widcrime", "Lieu:", Q_NULLPTR));
        pb_recherche->setText(QApplication::translate("widcrime", "rechercher", Q_NULLPTR));
        cb_tri_Date->setText(QApplication::translate("widcrime", "Date", Q_NULLPTR));
        cb_tri_Lieu->setText(QApplication::translate("widcrime", "Lieu", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("widcrime", "Trier par", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("widcrime", "Recherche", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class widcrime: public Ui_widcrime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDCRIME_H
