#include "widcitoyen.h"
#include "ui_widcitoyen.h"
#include "citoyen.h"
#include <QVariant>
#include <QtDebug>
#include <QMessageBox>
#include "smtp.h"

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




void widCitoyen::on_pb_recherche_clicked()
{
    Citoyen C;
    QString tri = "";
    QString cond = " 1=1 " ;

    if (ui->le_CIN_recherche->text() != "")
        cond = cond + " AND CIN = " + ui->le_CIN_recherche->text();

    if (ui->Le_Nom_recherche->text() != "")
        cond = cond + " AND nom = '" + ui->Le_Nom_recherche->text() + "'";
           //"AND CIN = 23 AND nom = '  Anas '
    if (ui->Le_Prenom_recherche->text() != "")
        cond = cond + " AND prenom = '" + ui->Le_Prenom_recherche->text() + "'";
               // AND prenom ='Karray'
    // J'ai construit la partie WHERE de la requete SQL

    if ( (ui->cb_tri_nom->isChecked()) && (! ui->cb_tri_cIN->isChecked()) )
        tri =  " Order By nom ASC ";
    if ( (! ui->cb_tri_nom->isChecked()) && (ui->cb_tri_cIN->isChecked()) )
        tri =  " Order By cIN ASC ";
    if ( (ui->cb_tri_nom->isChecked()) && (ui->cb_tri_cIN->isChecked()) )
        tri =  " Order By nom ASC, cIN ASC ";





    ui->tab_recherche->setModel(C.rechercher(cond, tri));


}

void widCitoyen::on_pb_envoyer_email_clicked()
{

   //Smtp * mysmtp = new Smtp("Adouma.khaldi@gmail.com", "", "smtp.gmail.com",25);
   //connect(mysmtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

   //mysmtp->sendMail("Adouma.khaldi@gmail.com", ui->le_email_email->text() ,
   //                 ui->le_sujet_email->text(),
   //                 ui->te_message_email->toPlainText());
   Smtp * newMail = new Smtp("Adouma.khaldi@gmail.com",ui->le_email_email->text(),
                             ui->le_sujet_email->text(),
                             ui->te_message_email->toPlainText());
   delete newMail;

}
