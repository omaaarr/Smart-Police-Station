#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"agents.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator( new QIntValidator(100, 99999999, this));
    ui->tab_agents->setModel(A.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
  int id=ui->lineEdit->text().toInt();
  QString nom=ui->lineEdit_2->text();
   QString prenom=ui->lineEdit_3->text();

Agents A(id,nom,prenom);
bool test=A.ajouter();
QMessageBox msgBox ;
if (test)
  {  msgBox.setText("Ajout avec succes .");
  ui->tab_agents->setModel(A.afficher());
}
else
    msgBox.setText("echec d'ajout :( ") ;
msgBox.exec();


}

void MainWindow::on_supp_clicked()
{
     Agents A1; A1.setid(ui->le_id_supp->text().toInt());
     bool test=A1.supprimer(A1.getid());
     QMessageBox msgBox ;

     if (test)
        msgBox.setText("Supression avec succes .");


     else
         msgBox.setText("echec de supression  :( ") ;
     msgBox.exec();

 ui->tab_agents->setModel(A.afficher());
}



