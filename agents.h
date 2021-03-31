#ifndef AGENTS_H
#define AGENTS_H
#include <QString>
#include <QSqlQueryModel>


class Agents
{
public:
    Agents();
    Agents(int,QString,QString);
    int getid();
    QString getnom();
    QString getprenom();
void setid(int);
void setnom(QString);
void setprenom(QString);
bool ajouter ();
QSqlQueryModel* afficher();


bool supprimer(int);







private:
    int id ;
    QString nom,prenom;
};

#endif // AGENTS_H
