#include "citoyen.h"
#include <QVariant>
#include <QtDebug>

Citoyen::Citoyen()
{

}
Citoyen::Citoyen(QString cIN,QString nom, QString prenom,QString adresse, int telephone, QString email){
    this->cIN=cIN;
    this->nom=nom;
    this->prenom=prenom;
    this->adresse=adresse;
    this->telephone=telephone;
    this->email=email;
}
bool Citoyen::ajouter()
{
    QSqlQuery query;

    query.prepare("INSERT INTO Citoyen (cIN, nom, prenom, adresse, telephone, email) "
                                 "VALUES (:cin,:nom,:prenom,:adresse,:telephone,:email)");

    query.bindValue(":cin",cIN);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":adresse",adresse);
    query.bindValue(":telephone",telephone);
    query.bindValue(":email",email);

    if (!query.exec()){
        qDebug() << query.lastError();
       return false;
    }else{
        return true;

  }
}


bool Citoyen::supprimer(QString cIN)
{

    QSqlQuery query;
    query.prepare("Delete from Citoyen where cIN=:CIN ");
    query.bindValue(":CIN",cIN);
    if (!query.exec()){
            qDebug() << query.lastError();
            return false;
        }else{
            return true;
             }

}


QSqlQueryModel* Citoyen::afficher()
{
QSqlQueryModel* model=new QSqlQueryModel();

model->setQuery("SELECT cIN, nom, prenom, adresse, telephone, email FROM Citoyen");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("cIN"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("adresse"));
model->setHeaderData(4,Qt::Horizontal,QObject::tr("telephone"));
model->setHeaderData(5,Qt::Horizontal,QObject::tr("email"));


return model;
}





void Citoyen::setCIN(QString cIN){
    this->cIN = cIN;
}

QString Citoyen::getCIN(){
    return this->cIN;
}

void Citoyen::setNOM(QString nom){
    this->nom = nom;
}

QString Citoyen::getNOM(){
    return this->nom;
}
void Citoyen::setPRENOM(QString prenom){
    this->prenom = prenom;
}

QString Citoyen::getPRENOM(){
    return this->prenom;
}

void Citoyen::setADRESSE(QString adresse){
    this->adresse = adresse;
}

QString Citoyen::getADRESSE(){
    return this->adresse;
}


void Citoyen::setTELEPHONE(int telephone){
    this->telephone = telephone;
}

int Citoyen::getTELEPHONE(){
    return this->telephone;
}


void Citoyen::setEMAIL(QString email){
    this->email = email;
}

QString Citoyen::getEMAIL(){
    return this->email;
}


bool Citoyen::modifier(){

    QSqlQuery query;
    query.prepare("UPDATE Citoyen set NOM= :nom,PRENOM= :prenom,ADRESSE= :adresse,TELEPHONE= :telephone,EMAIL= :email,"
              "    WHERE CIN= :cIN" );
     query.bindValue(":CIN",cIN);
     query.bindValue(":nom",nom);
     query.bindValue(":prenom",prenom);
     query.bindValue(":adresse",adresse);
     query.bindValue(":telephone",telephone);
     query.bindValue(":email",email);
     return query.exec();

     if (!query.exec()){
         qDebug() << query.lastError();
        return false;
     }else{
         return true;
     }

 }


bool Citoyen::chercher(QString cIN){

    QSqlQuery query;
    query.prepare("SELECT  cIN,nom,prenom,adresse,telephone,email"
"    from Citoyen WHERE cIN=:cIN");
     query.bindValue(":cIN",cIN);
     if (query.exec()){
         query.next();
         this->nom = query.value(1).toString();
         this->prenom = query.value(2).toString();
         this->adresse = query.value(3).toString();
         this->telephone = query.value(4).toInt();
         this->email = query.value(5).toString();
         return true;
     }
     return false;





    }



QSqlQueryModel* Citoyen::rechercher(QString condition, QString tri){

    QSqlQueryModel* model=new QSqlQueryModel();

    // if CIN = 0, no criteria

    model->setQuery("SELECT cIN,nom,prenom,adresse,telephone,email FROM Citoyen "
                    "WHERE "+condition + tri);

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("cIN"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Adresse"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Telephone"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Email"));
    return model;


}




