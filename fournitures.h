#ifndef FOURNITURES_H
#define FOURNITURES_H
#include <QString>
#include <QSqlQueryModel>

class Fournitures
{
public:
    Fournitures();
    Fournitures(int,QString,QString,int);
    int getref();
    QString getnom();
    QString getcategorie();
    int getstock();
    void setref(int);
    void setnom(QString);
    void setcategorie(QString);
    void setstock(int);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);

private:
    int ref,stock;
    QString nom, categorie;

};

#endif // FOURNITURES_H
