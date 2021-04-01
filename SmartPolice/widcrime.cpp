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


void widcrime::on_pb_recherche_clicked()
{
    Crime C;
    QString tri = "";
    QString cond = " 1=1 " ;
    // construire la condition de recherche
    if (ui->le_id_recherche->text() != "")
        cond = cond + " AND ID = " + ui->le_id_recherche->text();  // "AND ID = 23
               //"AND ID = 23"
    if (ui->le_lieu_recherche->text() != "")
        cond = cond + " AND lieu = '" + ui->le_lieu_recherche->text() + "'";
           //"AND ID = 23 AND lieu = '  Ariana '
    if (ui->le_date_recherche->text() != "")
        cond = cond + " AND dateCrime = to_date('" + ui->le_date_recherche->text() + "','DD/MM/YYYY')";
               // AND dateCrime = to_date('23/02/2021','DD/MM/YYYY')
    // J'ai construit la partie WHERE de la requete SQL
    // condtruire le tri avec Order By
    if ( (ui->cb_tri_Date->isChecked()) && (! ui->cb_tri_Lieu->isChecked()) )
        tri =  " Order By dateCrime ASC ";
    if ( (! ui->cb_tri_Date->isChecked()) && (ui->cb_tri_Lieu->isChecked()) )
        tri =  " Order By lieu ASC ";
    if ( (ui->cb_tri_Date->isChecked()) && (ui->cb_tri_Lieu->isChecked()) )
        tri =  " Order By dateCrime ASC, lieu ASC ";


    ui->tab_recherche->setModel(C.rechercher(cond, tri));


}
