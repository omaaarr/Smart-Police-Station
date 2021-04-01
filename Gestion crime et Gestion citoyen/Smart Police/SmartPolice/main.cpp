#include "mainwindow.h"

#include <QApplication>
#include <QMessageBox>
#include "connection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    Connection myDbconnection;
    bool testConn = myDbconnection.createConnection();

    if (testConn){      // Connection réussie. Afficher le MainWindow et message de connection
        w.show();
        QMessageBox::information(nullptr, QObject::tr("Base de données"),
                                 QObject::tr("Connection réussie à la base de données"));

    }else{              // Probleme de connection à la base de données
        QMessageBox::critical(nullptr, QObject::tr("Base de données"),
                                 QObject::tr("Impossible de se connecter à la base de données"));

    }
    return a.exec();
}
