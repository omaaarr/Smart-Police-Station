#include "fournitures.h"
#include <QSqlQuery>
#include <QObject>
#include <QtDebug>

Fournitures::Fournitures()
{
ref=0;
nom="";
categorie="";
stock=0;

}

Fournitures::Fournitures(int ref,QString nom,QString categorie,int stock)
{this->ref=ref; this->nom=nom; this->categorie=categorie; this->stock=stock;}
int Fournitures::getref(){return ref;}
QString Fournitures::getnom(){return nom;}
QString Fournitures::getcategorie(){return categorie;}
int Fournitures::getstock(){return stock;}
void Fournitures::setref(int ref){this->ref=ref;}
void Fournitures::setnom(QString nom){this->nom=nom;}
void Fournitures::setcategorie(QString categorie){this->categorie=categorie;}
void Fournitures::setstock(int stock){this->stock=stock;}

bool Fournitures::ajouter()
{bool test=false;

    QSqlQuery query;
    QString ref_string= QString::number(ref);
    query.prepare("INSERT INTO FOURNITURES (code, nom, categorie,stock) "
                  "VALUES (:code, :nom, :categorie, :stock)");
    query.bindValue(":Reference ", ref);
    query.bindValue(":Nom", nom);
    query.bindValue(":Categorie", categorie);
    query.bindValue(":Stock", stock);
    query.exec();
return test;
}

QSqlQueryModel* Fournitures::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();

    model->setQuery("SELECT* FROM FOURNITURES");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Ref"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Categorie"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Stock"));

            return model;
}

bool Fournitures::supprimer(int ref )
{
    QSqlQuery query;
     query.prepare("Delete from FOURNITURES where ref:=ref");

     query.bindValue(0, ref);

      return query.exec();

}



