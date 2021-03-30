#include "widcitoyen.h"
#include "ui_widcitoyen.h"
#include "citoyen.h"
#include <QVariant>
#include <QtDebug>
#include <QMessageBox>


widCitoyen::widCitoyen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widCitoyen)
{
    ui->setupUi(this);
}

widCitoyen::~widCitoyen()
{
    delete ui;
}

void widCitoyen::on_pb_Ajouter_clicked()
{
    QString cIN = ui->le_CIN->text();
    QString nom=ui->Le_Nom->text();
    QString prenom=ui->Le_Prenom->text();
    QString adresse=ui->Le_Adresse->text();
    int telephone=ui->Le_Telephone->text().toInt();
    QString email=ui->Le_Email->text();

    Citoyen C(cIN,nom,prenom,adresse,telephone,email);
    if (C.ajouter()){
         QMessageBox::information(this, QObject::tr("OK"),"Citoyen ajouté");
    }else{
        QMessageBox::critical(this, QObject::tr("Erreur"),"Ne peut pas ajouter Citoyen");
    }

}

void widCitoyen::on_pb_supprimer_clicked()
{
  Citoyen C;
  C.setCIN(ui->le_cIN_supp->text());
  bool test=C.supprimer(C.getCIN());
  QMessageBox msgBox;
  if(test)
   {   msgBox.setText("Supression avec succes.");
      ui->Tab_citoyen->setModel(C.afficher());
  }

  else
      msgBox.setText("Echec de suppression");
  msgBox.exec();

}










