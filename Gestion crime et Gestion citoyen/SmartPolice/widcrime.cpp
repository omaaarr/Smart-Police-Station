#include "widcrime.h"
#include "ui_widcrime.h"
#include "crime.h"
#include <QVariant>
#include <QtDebug>
#include <QMessageBox>


widcrime::widcrime(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widcrime)
{
    ui->setupUi(this);
}

widcrime::~widcrime()
{
    delete ui;
}


void widcrime::on_pb_Ajouter_clicked()
{
    int id = ui->le_id->text().toInt();

    QDate date=ui->de_date->date();
    QString lieu=ui->Le_lieu->text();
    QString description=ui->te_description->toPlainText();
    QString categorie;
    if (ui->rb_Vol->isChecked()) categorie="Vol";
    if (ui->rb_meurtre->isChecked()) categorie="Meurtre";
    if (ui->rb_braquage->isChecked()) categorie="Braquage";
    if (ui->rb_enlevement->isChecked()) categorie="Enlevement";

    Crime C(id,date,lieu,description,categorie);
    if (C.ajouter()){
         QMessageBox::information(this, QObject::tr("OK"),"Crime ajouté");
    }else{
        QMessageBox::critical(this, QObject::tr("Erreur"),"Ne peut pas ajouter Crime");
    }

}


void widcrime::on_pb_supprimer_clicked()
{
  Crime C;
  C.setID(ui->le_id_supp->text().toInt());
  bool test=C.supprimer(C.getID());
  QMessageBox msgBox;
  if(test)
   {   msgBox.setText("Supression avec succes.");
       ui->Tab_crime->setModel(C.afficher());
   }
   else
      msgBox.setText("Echec de suppression");
    msgBox.exec();

}

