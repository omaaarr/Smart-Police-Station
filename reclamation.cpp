#include "reclamation.h"

reclamation::reclamation()
{
    cin = "";
    etat = "";
}

reclamation::reclamation(QString c, QString e)
{
    cin = c;
    etat = e;
}

bool reclamation::ajouter_reclamation()
{
    QSqlQuery qry,qry1,qry2;
    qry.prepare("SELECT * FROM DOCUMENT WHERE CIN =:cin");
    qry.bindValue(":cin",cin);
    int count(0);
    if (qry.exec())
    {
        while(qry.next())
        {
            count++;
        }
    }
    if ( count == 0 )
    {
        QMessageBox::information(nullptr, QObject::tr("DONE"),
                                 QObject::tr("CIN N'EXISTE PAS .\n"
                                             "Click Cancel to try again."), QMessageBox::Cancel);
        return false;
    }
    else
    {
        qry2.prepare("SELECT * FROM RECLAMATION WHERE CIN =:cin");
        qry2.bindValue(":cin",cin);
        int count2(0);
        if ( qry2.exec() )
        {
            while ( qry2.next() )
            {
                count2++;
            }
        }
        if ( count2 == 0 )
        {
            qry.prepare("SELECT * FROM DOCUMENT WHERE CIN =:cin");
            qry.bindValue(":cin",cin);
            if (qry.exec())
            {
                while(qry.next())
                {
                    qry1.prepare("INSERT INTO RECLAMATION (NOM,PRENOM,AGE,CIN,PASSEPORT,ETAT) values ( :n, :p, :a, :c, :pas, :e)");
                    qDebug() << qry.value(0).toString() << endl;
                    qDebug() << qry.value(1).toString() << endl;
                    qDebug() << qry.value(2).toString() << endl;
                    qDebug() << qry.value(4).toString() << endl;
                    qDebug() << cin << endl;
                    qDebug() << etat << endl;

                    qry1.bindValue(":n",qry.value(0).toString());
                    qry1.bindValue(":p",qry.value(1).toString());
                    qry1.bindValue(":a",qry.value(2).toString());
                    qry1.bindValue(":c",cin);
                    qry1.bindValue(":pas",qry.value(4).toString());
                    qry1.bindValue(":e",etat);
                    return qry1.exec();
                }
            }
        }
        else
        {
            QMessageBox::information(nullptr, QObject::tr("DONE"),
                                     QObject::tr("RECLAMATION EXISTE AVEC CE CIN .\n"
                                                 "Click Cancel to try again."), QMessageBox::Cancel);
        }


    }

}


QSqlQuery* reclamation::afficher_reclamation()
{
    QSqlQuery* qry = new QSqlQuery;
    qry->prepare("SELECT NOM,PRENOM,AGE,CIN,PASSEPORT,ETAT FROM RECLAMATION");
    qry->exec();
    return qry;
}

QString reclamation::get_etat_reclamation()
{
    QSqlQuery qry;
    qDebug() << cin << endl;
    qry.prepare("SELECT ETAT FROM RECLAMATION WHERE CIN =:cin");
    qry.bindValue(":cin",cin);
    int count(0);
    if ( qry.exec() )
    {
        while ( qry.next() )
        {
            count++;
        }
    }
    qDebug() << count << endl;
    if ( count == 0 )
    {
         QMessageBox::information(nullptr, QObject::tr("DONE"),
                                  QObject::tr("CIN N'EXISTE PAS .\n"
                                              "Click Cancel to try again."), QMessageBox::Cancel);
         return "0";
    }
    else
    {
        qry.prepare("SELECT ETAT FROM RECLAMATION WHERE CIN =:cin");
        qry.bindValue(":cin",cin);
        if ( qry.exec() )
        {
            while ( qry.next() )
            {
                return qry.value(0).toString();

            }
        }
    }
}
bool reclamation::modifier_reclamation()
{
    QSqlQuery qry;
    qry.prepare("UPDATE RECLAMATION SET ETAT=:etat WHERE CIN =:c");
    qry.bindValue(":etat",etat);
    qry.bindValue(":c",cin);
    return qry.exec();
}

bool reclamation::supprimer_reclamation()
{
    QSqlQuery qry;

    qry.prepare("SELECT * FROM RECLAMATION WHERE CIN =:cin");
    qry.bindValue(":cin",cin);
    int count(0);
    if ( qry.exec() )
    {
        while ( qry.next() )
        {
            count++;
        }
    }
    if ( count == 0 )
    {
         QMessageBox::information(nullptr, QObject::tr("DONE"),
                                  QObject::tr("CIN N'EXISTE PAS .\n"
                                              "Click Cancel to try again."), QMessageBox::Cancel);
         return false;
    }
    else
    {
        qry.prepare("Delete from RECLAMATION WHERE CIN =:cin ");
        qry.bindValue(":cin",cin);
        return qry.exec();
    }
}

QSqlQuery* reclamation::recherche_par_nom(QString n)
{
    QSqlQuery* qry = new QSqlQuery;
    qry->prepare("SELECT NOM,PRENOM,AGE,CIN,PASSEPORT,ETAT FROM RECLAMATION WHERE NOM LIKE :nom ");
    qry->bindValue(":nom","%"+n+"%");
    qry->exec();
    return qry;
}

QSqlQuery* reclamation::recherche_par_cin(QString c)
{
    QSqlQuery* qry = new QSqlQuery;
    qry->prepare("SELECT NOM,PRENOM,AGE,CIN,PASSEPOR,ETATT FROM RECLAMATION WHERE CIN LIKE :cin");
    qry->bindValue(":cin","%"+c+"%");
    qry->exec();
    return qry;
}

QSqlQuery* reclamation::recherche_par_etat(QString p)
{
    QSqlQuery* qry = new QSqlQuery;
    qry->prepare("SELECT NOM,PRENOM,AGE,CIN,PASSEPORT,ETAT FROM RECLAMATION WHERE ETAT LIKE :p");
    qry->bindValue(":p","%"+p+"%");
    qry->exec();
    return qry;
}
