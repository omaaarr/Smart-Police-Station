#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fournitures.h"
#include <QString>
#include <QMessageBox>
#include <QIntValidator>
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     ui->ref_fourniture->setValidator(new QIntValidator(0, 9999999, this));
     ui->stock_article->setValidator(new QIntValidator(0, 9999999, this));
     ui->Tab_articles->setModel(E.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Ajouter_clicked()
{
    int ref=ui->ref_fourniture->text().toInt();
    QString nom=ui->nom_fourniture->text();
    QString categorie=ui->categorie_article->text();
    int stock=ui->stock_article->text().toInt();
    //QComboBox categorie=ui->categorie_fourniture->();

    Fournitures E(ref,nom,categorie,stock);

    bool test=E.ajouter();
    QMessageBox msgBox ;
    if (test)
      {  msgBox.setText("Ajout avec succes");
      ui->Tab_articles->setModel(E.afficher());
    }
    else
        msgBox.setText("Echec veuillez ressayer") ;
    msgBox.exec();


}

void MainWindow::on_Supprimer_clicked()
{
    Fournitures E1; E1.setref(ui->ref_delete->text().toInt());
    bool test=E1.supprimer(E1.getref());
    QMessageBox msgBox ;

    if (test)
       msgBox.setText("Supression avec succes.");


    else
        msgBox.setText("Echec de supression.") ;
    msgBox.exec();

ui->Tab_articles->setModel(E.afficher());
}
