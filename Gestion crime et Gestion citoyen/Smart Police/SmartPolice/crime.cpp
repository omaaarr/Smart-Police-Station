#include "crime.h"
#include <QVariant>
#include <QtDebug>


Crime::Crime()
{

}

Crime::Crime(int id,QDate date, QString lieu,QString description, QString categorie)
{

    this->id=id;
    this->date=date;
    this->lieu=lieu;
    this->description=description;
    this->categorie=categorie;

}


void Crime::setID(int id){
this-> id=id ;
}
int Crime::getID(){
    return this->id;
}


void Crime::setDate(QDate date){
this->date = date;
}
QDate Crime::getDate(){
    return this->date;
}

void Crime::setLieu(QString lieu){
this->lieu=lieu;
}
QString Crime::getLieu(){
    return this->lieu;
}
void Crime::setDescription(QString description){
this->description=description;
}
QString Crime::getDescription(){
    return this->description;
}

void Crime::setCategorie(QString categorie){
this->categorie=categorie;
}

QString Crime::getCategorie(){
    return this->categorie;
}



bool Crime::ajouter(){

    QSqlQuery query;
    query.prepare("INSERT INTO Crime (id, datecrime, lieu, description, categorie) "
                      "VALUES (:ID,:DATE,:LIEU,:DESCRIPTION,:CATEGORIE)");
    query.bindValue(":ID",id);
    query.bindValue(":DATE",date);
    query.bindValue(":LIEU",lieu);
    query.bindValue(":DESCRIPTION",description);
    query.bindValue(":CATEGORIE",categorie);

    if (!query.exec()){
        qDebug() << query.lastError();
       return false;
    }else{
        return true;
    }

}

QSqlQueryModel* Crime::afficher(){

    QSqlQueryModel* model=new QSqlQueryModel();

    model->setQuery("SELECT ID,datecrime,lieu,description,categorie FROM Crime");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Date"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Lieu"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Description"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Categorie"));

    return model;
}
//
// Modifier un Crime
// Mettre à jour un crime existant
//
bool Crime::modifier(){
    QSqlQuery query;
    query.prepare("UPDATE Crime set DATE= :date,LIEU= :lieu,DESCRIPTION= :description,CATEGORIE= :categorie "
                  "    WHERE ID= :id" );
     query.bindValue(":ID",id);
     query.bindValue(":DATE",date);
     query.bindValue(":LIEU",lieu);
     query.bindValue(":DESCRIPTION",description);
     query.bindValue(":CATEGORIES",categorie);

     if (!query.exec()){
         qDebug() << query.lastError();
        return false;
     }else{
         return true;
     }
}


bool Crime::supprimer(int id){
       QString id_string=QString::number(id);
       QSqlQuery query;
        query.prepare("Delete from Crime where ID =:id ");
        query.bindValue(":id",id_string);

        if (!query.exec()){
            qDebug() << query.lastError();
           return false;
        }else{
            return true;
        }

}

bool Crime::chercher(int id){

    QSqlQuery query;
    query.prepare("SELECT  id,date,lieu,description,categorie"
                    "    from Crime WHERE id = :id" );
     query.bindValue(":id",id);
     //return query.exec();

     if (!query.exec()){
         qDebug() << query.lastError();
        return false;
     }else{
         return true;
     }

}
QSqlQueryModel* Crime::rechercher(QString condition, QString tri){

    QSqlQueryModel* model=new QSqlQueryModel();

    // if int = 0, no criteria

    model->setQuery("SELECT ID,datecrime,lieu,description,categorie FROM Crime "
                    "WHERE "+condition + tri);

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Date"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Lieu"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Description"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Categorie"));

    return model;


}
