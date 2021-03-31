#include "agents.h"
#include  <QSqlQuery>
#include <QtDebug>
#include <QObject>
Agents::Agents()
{
id=0;
nom=" " ;
prenom=" ";
}



Agents::Agents(int id ,QString nom ,QString prenom)
{this->id=id; this->nom=nom; this->prenom=prenom; }
int Agents::getid(){return id ;}
QString Agents::getnom(){return nom;}
QString Agents::getprenom() {return prenom ;}
void Agents::setid(int id ){this->id=id;}
void Agents::setnom(QString nom ){this->nom=nom;}
void Agents::setprenom(QString prenom){this->prenom=prenom;}
bool Agents::ajouter()

{

QString id_string=QString::number(id);
 QSqlQuery query;
 query.prepare("INSERT INTO agents (id, nom, prenom ) "
               "VALUES (:id, :forename, :surname)");
 query.bindValue(0, id_string);
 query.bindValue(1, nom);
 query.bindValue(2, prenom  );
  return query.exec();
}





bool Agents::supprimer(int id )
{
    QSqlQuery query;
     query.prepare("Delete from agents where id:=id");

     query.bindValue(0, id);

      return query.exec();

}






QSqlQueryModel* Agents::afficher()
{
 QSqlQueryModel* model=new QSqlQueryModel  ();


       model->setQuery("SELECT * FROM agents");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
 return model;
}










