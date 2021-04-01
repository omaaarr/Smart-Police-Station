#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QString>
#include "widcrime.h"
#include "widcitoyen.h"
#include <QMessageBox>
#include <QIntValidator>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Ajout de labels dans la barre status
    // 1 pour des messages temporaire
    // 1 pour la date
     QLabel *lblStatusDate = new QLabel();

     ui->statusbar->addPermanentWidget(lblStatusDate,1);
     lblStatusDate->setText(QDate::currentDate().toString());
}
// Afficher un message dans la barre des status
void MainWindow::afficherStatus(QString msg){
   QStatusBar *sBar = this->statusBar();
   sBar->showMessage(msg,0);

}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionCrime_triggered()
{
    widcrime * wCrime = new widcrime(this);
    //wCrime->show();
    setCentralWidget(wCrime);
}

void MainWindow::on_actionCitoyen_triggered()
{
    widCitoyen * wCitoyen = new widCitoyen(this);
    //wCitoyen->show();
    setCentralWidget(wCitoyen);
}
