#ifndef DOCUMENT_H
#define DOCUMENT_H
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


class document
{
private:
    QString nom,prenom,age,cin,passeport;
public:
    document();
    document(QString,QString,QString,QString,QString);

    //les accesseurs

    QString get_nom () { return nom;}
    QString get_prenom () { return prenom;}
    QString get_age () { return age;}
    QString get_cin () { return cin;}
    QString get_passeport () { return passeport;}

    bool ajouter_document();
    int chercher_cin_unique(QString cinn);
    QSqlQuery chercher_cin_modifier(QString c);
    bool modifier_document();
    QSqlQuery *afficher_document();
    bool supprimer_document(QString c);
    QSqlQuery *recherche_par_nom(QString n);
    QSqlQuery *recherche_par_passeport(QString p);
    QSqlQuery *recherche_par_cin(QString c);
};

#endif // DOCUMENT_H
