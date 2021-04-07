#ifndef RECLAMATION_H
#define RECLAMATION_H
#include <QString>
#include <iostream>
#include <sstream>
#include <QDebug>
#include <QtDebug>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class reclamation
{
private:
    QString cin,etat;
public:
    reclamation();
    reclamation(QString c , QString e);
    bool ajouter_reclamation();
    QSqlQuery *afficher_reclamation();
    bool modifier_reclamation();
    QString get_etat_reclamation();
    bool supprimer_reclamation();
    QSqlQuery *recherche_par_nom(QString n);
    QSqlQuery *recherche_par_cin(QString c);
    QSqlQuery *recherche_par_etat(QString p);
};

#endif // RECLAMATION_H
