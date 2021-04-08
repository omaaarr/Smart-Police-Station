#include "document.h"

document::document()
{
    nom = "";
    prenom = "";
    age = "";
    cin = "";
    passeport = "";
}

document::document(QString n ,QString p,QString a,QString c,QString pas)
{
    nom = n;
    prenom = p;
    age = a;
    cin = c;
    passeport = pas;
}

bool document::ajouter_document()
{
    QSqlQuery qry;
    qry.prepare("INSERT INTO DOCUMENT (NOM,PRENOM,AGE,CIN,PASSEPORT) "
                "values ( :n, :p, :a, :c, :pas)");

    qry.bindValue(":n",nom);
    qry.bindValue(":p",prenom);
    qry.bindValue(":a",age);
    qry.bindValue(":c",cin);
    qry.bindValue(":pas",passeport);
    return qry.exec();
}

int document::chercher_cin_unique(QString cinn)
{
    QSqlQuery qry;
    qry.prepare("SELECT * FROM DOCUMENT WHERE CIN =:cin");
    qry.bindValue(":cin",cinn);
    int count(0);
    if (qry.exec())
    {

        while(qry.next())
        {
            count++;
        }
    }
    return count;
}

QSqlQuery document::chercher_cin_modifier(QString c)
{
    QSqlQuery qry;
    qry.prepare("SELECT * FROM DOCUMENT WHERE CIN =:cin ");
    qry.bindValue(":cin",c);
    if (qry.exec())
    {
        while(qry.next())
        {
            return qry;
        }
    }
}

bool document::modifier_document()
{
    QSqlQuery qry;
    qry.prepare("UPDATE DOCUMENT SET NOM=:n, PRENOM=:p, AGE=:a ,CIN=:c ,PASSEPORT=:pass WHERE CIN =:ci");
    qry.bindValue(":n",nom);
    qry.bindValue(":p",prenom);
    qry.bindValue(":a",age);
    qry.bindValue(":c",cin);
    qry.bindValue(":pass",passeport);
    qry.bindValue(":ci",cin);
    return qry.exec();
}

QSqlQuery* document::afficher_document()
{
    QSqlQuery* qry = new QSqlQuery;
    qry->prepare("SELECT NOM,PRENOM,AGE,CIN,PASSEPORT FROM DOCUMENT");
    qry->exec();
    return qry;
}

bool document::supprimer_document(QString c)
{
    QSqlQuery qry;
    qry.prepare("Delete from DOCUMENT WHERE CIN =:cin ");
    qry.bindValue(":cin",c);
    return qry.exec();
}

QSqlQuery* document::recherche_par_nom(QString n)
{
    QSqlQuery* qry = new QSqlQuery;
    qry->prepare("SELECT NOM,PRENOM,AGE,CIN,PASSEPORT FROM DOCUMENT WHERE NOM LIKE :nom ");
    qry->bindValue(":nom","%"+n+"%");
    qry->exec();
    return qry;
}

QSqlQuery* document::recherche_par_cin(QString c)
{
    QSqlQuery* qry = new QSqlQuery;
    qry->prepare("SELECT NOM,PRENOM,AGE,CIN,PASSEPORT FROM DOCUMENT WHERE CIN LIKE :cin");
    qry->bindValue(":cin","%"+c+"%");
    qry->exec();
    return qry;
}

QSqlQuery* document::recherche_par_passeport(QString p)
{
    QSqlQuery* qry = new QSqlQuery;
    qry->prepare("SELECT NOM,PRENOM,AGE,CIN,PASSEPORT FROM DOCUMENT WHERE PASSEPORT LIKE :p");
    qry->bindValue(":p","%"+p+"%");
    qry->exec();
    return qry;
}
