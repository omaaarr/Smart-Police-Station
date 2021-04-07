#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <sstream>
#include <QString>
#include <QDebug>
#include <QtDebug>
#include <QMessageBox>
#include <QSqlQueryModel>
#include "connection.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QTextEdit>
#include <QApplication>
#include "connection.h"
#include "document.h"
#include "reclamation.h"
#include <QPrinter>
#include <QPrintDialog>
#include <QPdfWriter>
#include <QPainter>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->search_doc->setPlaceholderText("recherche");
    ui->recherche_nom->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::afficher_table_document()
{
    document doc;
    QSqlQuery* qry = doc.afficher_document();
    QSqlQueryModel* modal = new QSqlQueryModel();
    modal->setQuery(*qry);
    ui->table_document->setModel(modal);
}

void MainWindow::on_document_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    afficher_table_document();
}

void MainWindow::on_back_doc_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_ajouter_doc_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_annuler_doc_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    clear_ajouter();
}

void MainWindow::on_modifier_doc_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_annuler_doc_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    clear_modifier();
}

void MainWindow::on_supprimer_doc_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_annuler_doc_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->cin_doc_modifier_2->clear();
}

int MainWindow::check_string_without_number(QString s)
{
    int count(0);
    int length = s.length();

    for (int i=0; i<length; i++)
        if ( s[i] >= 0 || s[i] <= 9)
            count++;

    return count;
}
void MainWindow::clear_ajouter()
{
    ui->nom_doc->clear();
    ui->prenom_doc->clear();
    ui->age_doc->clear();
    ui->cin_doc->clear();
    ui->passeport_doc->clear();

}
void MainWindow::clear_modifier()
{
    ui->nom_doc_2->clear();
    ui->prenom_doc_2->clear();
    ui->age_doc_2->clear();
    ui->cin_doc_2->clear();
    ui->passeport_doc_2->clear();
    ui->cin_doc_modifier->clear();

}
void MainWindow::on_ajouter_doc_2_clicked()
{
    document doc(ui->nom_doc->text(),ui->prenom_doc->text(),ui->age_doc->text(),ui->cin_doc->text(),ui->passeport_doc->text());
    int res= doc.chercher_cin_unique( doc.get_cin());
    int verif_cin = check_string_without_number(doc.get_cin());
    int verif_passeport = check_string_without_number(doc.get_passeport());
    int age = doc.get_age().toInt();

    if ( doc.get_nom() == "" || doc.get_prenom() == "" || doc.get_age() == "" || doc.get_cin() == "" || doc.get_passeport() == "" )
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("tous les champs doit etre remplis .\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else if ( verif_cin != 8 || verif_passeport != 8 )
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("CIN DOIT CONTENIR SEULEMENT DES NOMBRES.\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else if ( age >= 120 || age < 18 )
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("VOTRE AGE DOIT ETRE MINIMUM 18ANS .\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else if ( doc.get_cin() == doc.get_passeport())
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("CIN ET PASSEPORT NE PEUT PAS ETRE LE MEME .\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else if ( res != 0 )
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("CIN NON UNIQUE .\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else
    {
        bool test = doc.ajouter_document();
        if ( test == true)
        {
            clear_ajouter();
            QMessageBox::information(nullptr, QObject::tr("DONE"),
                                     QObject::tr("AJOUT REUSSIT .\n"
                                                 "Click Cancel to try again."), QMessageBox::Cancel);
            ui->stackedWidget->setCurrentIndex(1);
        }
    }
     afficher_table_document();
     ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_chercher_doc_modifier_clicked()
{
    document d;
    QSqlQuery qry = d.chercher_cin_modifier(ui->cin_doc_modifier->text());
    if ( qry.value(0).toString() == "")
    {
        QMessageBox::information(nullptr, QObject::tr("DONE"),
                                 QObject::tr("CIN N'EXISTE PAS .\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
        clear_modifier();
    }
    else
    {
        ui->nom_doc_2->setText(qry.value(0).toString());
        ui->prenom_doc_2->setText(qry.value(1).toString());
        ui->age_doc_2->setText(qry.value(2).toString());
        ui->cin_doc_2->setText(qry.value(3).toString());
        ui->passeport_doc_2->setText(qry.value(4).toString());
    }
}

void MainWindow::on_modifier_doc_2_clicked()
{
    document doc(ui->nom_doc_2->text(),ui->prenom_doc_2->text(),ui->age_doc_2->text(),ui->cin_doc_2->text(),ui->passeport_doc_2->text());
    int verif_cin = check_string_without_number(doc.get_cin());
    int verif_passeport = check_string_without_number(doc.get_passeport());
    int age = doc.get_age().toInt();

    if ( doc.get_nom() == "" || doc.get_prenom() == "" || doc.get_age() == "" || doc.get_cin() == "" || doc.get_passeport() == "" )
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("tous les champs doit etre remplis .\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else if ( verif_cin != 8 || verif_passeport != 8 )
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("CIN ET PASSEPORT DOIT CONTENIR SEULEMENT DES NOMBRES.\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else if ( age >= 120 || age < 18 )
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("VOTRE AGE DOIT ETRE MINIMUM 18ANS .\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else if ( doc.get_cin() == doc.get_passeport())
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("CIN ET PASSEPORT NE PEUT PAS ETRE LE MEME .\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else
    {
        bool test = doc.modifier_document();
        if ( test == true)
        {
            clear_modifier();
            QMessageBox::information(nullptr, QObject::tr("DONE"),
                                     QObject::tr("MODIFICATION REUSSIT .\n"
                                                 "Click Cancel to try again."), QMessageBox::Cancel);
            ui->stackedWidget->setCurrentIndex(1);
        }
    }

     afficher_table_document();
     ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_chercher_doc_supp_clicked()
{
    document doc;
    int verif_cin = check_string_without_number(ui->cin_doc_modifier_2->text());
    if ( ui->cin_doc_modifier_2->text() == "")
    {
        QMessageBox::information(nullptr, QObject::tr("DONE"),
                                 QObject::tr("veuillez remplir la case CIN .\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else if ( verif_cin != 8 )
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("CIN DOIT CONTENIR SEULEMENT DES NOMBRES.\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else
    {
        int res = doc.chercher_cin_unique(ui->cin_doc_modifier_2->text());
        if ( res == 0 )
        {
            QMessageBox::information(nullptr, QObject::tr("DONE"),
                                     QObject::tr("CIN N'EXISTE PAS .\n"
                                                 "Click Cancel to try again."), QMessageBox::Cancel);
        }
        else
        {
            bool test = doc.supprimer_document(ui->cin_doc_modifier_2->text());
            if ( test == true )
            {
                QMessageBox::information(nullptr, QObject::tr("DONE"),
                                         QObject::tr("SUPPRESSION FINI.\n"
                                                     "Click Cancel to try again."), QMessageBox::Cancel);
                ui->cin_doc_modifier_2->clear();
            }
            ui->stackedWidget->setCurrentIndex(1);
        }
        afficher_table_document();
    }
}

void MainWindow::on_search_doc_textChanged(const QString &arg1)
{
    if ( ui->recherche_nom->isChecked())
    {
        document doc;
        QSqlQuery* qry = doc.recherche_par_nom(arg1);
        QSqlQueryModel* modal = new QSqlQueryModel();
        modal->setQuery(*qry);
        ui->table_document->setModel(modal);
    }
    else if ( ui->recherche_cin->isChecked())
    {
        document doc;
        QSqlQuery* qry = doc.recherche_par_cin(arg1);
        QSqlQueryModel* modal = new QSqlQueryModel();
        modal->setQuery(*qry);
        ui->table_document->setModel(modal);
    }
    else if ( ui->recherche_passeport->isChecked())
    {
        document doc;
        QSqlQuery* qry = doc.recherche_par_passeport(arg1);
        QSqlQueryModel* modal = new QSqlQueryModel();
        modal->setQuery(*qry);
        ui->table_document->setModel(modal);
    }
    else if ( arg1 == "")
    {
        afficher_table_document();
    }
    else
        afficher_table_document();
}
void MainWindow::afficher_table_reclamation()
{
    reclamation r;
    QSqlQuery* qry = r.afficher_reclamation();
    QSqlQueryModel* modal = new QSqlQueryModel();
    modal->setQuery(*qry);
    ui->table_reclamation->setModel(modal);
}
void MainWindow::on_reclamation_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    afficher_table_reclamation();
}

void MainWindow::on_back_rec_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_ajouter_rec_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_modifier_rec_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_supprimer_rec_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::on_annuler_rec_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_ajouter_rec_2_clicked()
{
    reclamation r(ui->cin_rec->text(),ui->etat_rec->currentText());
    int verif_cin = check_string_without_number(ui->cin_rec->text());
    if ( ui->cin_rec->text() == "")
    {
        QMessageBox::information(nullptr, QObject::tr("DONE"),
                                 QObject::tr("CIN CASE VIDE.\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else if ( verif_cin != 8 )
    {
        QMessageBox::information(nullptr, QObject::tr("DONE"),
                                 QObject::tr("CIN DOIT CONTENIR SEULEMENT 8 CHIFFRES.\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else
    {
        bool test = r.ajouter_reclamation();
        if ( test == true )
        {
             ui->cin_rec->clear();
             ui->stackedWidget->setCurrentIndex(5);
        }
    }
    afficher_table_reclamation();
}

void MainWindow::on_annuler_rec_modifier_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_modifier_rec_confirmation_clicked()
{
    reclamation r(ui->cin_rec_modifier->text(),ui->modifier_rec_nouv->currentText());
    int verif_cin = check_string_without_number(ui->cin_rec_modifier->text());

    if ( ui->cin_rec_modifier->text() == "")
    {
        QMessageBox::information(nullptr, QObject::tr("DONE"),
                                 QObject::tr("CIN CASE VIDE.\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else if ( verif_cin != 8 )
    {
        QMessageBox::information(nullptr, QObject::tr("DONE"),
                                 QObject::tr("CIN DOIT CONTENIR SEULEMENT 8 CHIFFRES.\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else
    {
        bool test = r.modifier_reclamation();
        if ( test == true )
        {
            QMessageBox::information(nullptr, QObject::tr("DONE"),
                                     QObject::tr("DONE.\n"
                                                 "Click Cancel to try again."), QMessageBox::Cancel);
            ui->stackedWidget->setCurrentIndex(5);
            ui->etat_rec_modifier->clear();
            ui->modifier_rec_nouv->clear();
        }
    }
    afficher_table_reclamation();
}

void MainWindow::on_annuler_rec_supp_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_supprimer_rec_confirmation_clicked()
{
    reclamation r(ui->cin_rec_supp->text(),"Agent");
    int verif_cin = check_string_without_number(ui->cin_rec_supp->text());

    if ( ui->cin_rec_supp->text() == "")
    {
        QMessageBox::information(nullptr, QObject::tr("DONE"),
                                 QObject::tr("CIN CASE VIDE.\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else if ( verif_cin != 8 )
    {
        QMessageBox::information(nullptr, QObject::tr("DONE"),
                                 QObject::tr("CIN DOIT CONTENIR SEULEMENT 8 CHIFFRES.\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else
    {
        bool test = r.supprimer_reclamation();
        if ( test == true )
        {
            QMessageBox::information(nullptr, QObject::tr("DONE"),
                                     QObject::tr("DONE.\n"
                                                 "Click Cancel to try again."), QMessageBox::Cancel);
            ui->stackedWidget->setCurrentIndex(5);
            ui->cin_rec_supp->clear();
        }
    }
    afficher_table_reclamation();
}

void MainWindow::on_search_cin_rec_modifier_clicked()
{
    reclamation rec(ui->cin_rec_modifier->text(),"Civil");
    QString etat = rec.get_etat_reclamation();
    ui->etat_rec_modifier->clear();
    ui->etat_rec_modifier->addItem(etat);
}

void MainWindow::on_search_rec_textChanged(const QString &arg1)
{
    if ( ui->recherche_nom_rec->isChecked())
    {
        document doc;
        QSqlQuery* qry = doc.recherche_par_nom(arg1);
        QSqlQueryModel* modal = new QSqlQueryModel();
        modal->setQuery(*qry);
        ui->table_reclamation->setModel(modal);
    }
    else if ( ui->recherche_cin_rec->isChecked())
    {
        document doc;
        QSqlQuery* qry = doc.recherche_par_cin(arg1);
        QSqlQueryModel* modal = new QSqlQueryModel();
        modal->setQuery(*qry);
        ui->table_reclamation->setModel(modal);
    }
    else if ( ui->recherche_etat_rec->isChecked())
    {
        document doc;
        QSqlQuery* qry = doc.recherche_par_passeport(arg1);
        QSqlQueryModel* modal = new QSqlQueryModel();
        modal->setQuery(*qry);
        ui->table_reclamation->setModel(modal);
    }
    else if ( arg1 == "")
    {
        afficher_table_reclamation();
    }
    else
        afficher_table_reclamation();
}

void MainWindow::on_print_document_clicked()
{
    QPrinter printer;
    document d;
    printer.setPrinterName("my_printer_machine");
    QPrintDialog dialog(&printer,this);
    if ( dialog.exec()== QDialog::Rejected) return ;

    QString nom,prenom,age,cin,passeport;

    QString CIN = ui->cin_doc_modifier->text();

    QSqlQuery qry = d.chercher_cin_modifier(CIN);

    nom = qry.value(0).toString() ;
    prenom = qry.value(1).toString();
    cin = qry.value(3).toString() ;
    passeport = qry.value(4).toString();
    age = qry.value(2).toString();


    QString text = "Le Nom est  : " + nom + "\n"
            + " le prenom est : " + prenom + "\n"
            + " age est : " + age + "\n"
            + " cin est : " + cin + "\n"
            + " passeport est : : " + passeport ;


    QTextEdit y;
    y.setPlainText(text);

    y.print(&printer);
}
