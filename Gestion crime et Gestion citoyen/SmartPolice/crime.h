#ifndef CRIME_H
#define CRIME_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QDate>
#include <QSqlQueryModel>
class Crime
{
public:
    Crime();
    Crime(int id,QDate date, QString lieu,QString description, QString categorie);
    bool ajouter();   // enregistrer dans la base de données
    bool modifier();      // modifier un crime commis dans la base de données
    QSqlQueryModel* afficher();
    bool supprimer(int id);       // supprimer un crime commis de la base de donner
    bool chercher (int id);       // chercher dans la base un crime commis avec id.
                                    // S'il existe, rempli les attributs et renvoie true
                                    // S'il n'existe pas, renvoie false





    void setID(int id);
    int getID();

    void setDate(QDate date);
    QDate getDate();

    void setLieu(QString lieu);
    QString getLieu();

    void setDescription(QString description);
    QString getDescription();

    void setCategorie(QString categorie);
    QString getCategorie();

    private:
    int id;     // id du crime
    QDate date;     // date du crime commis
    QString lieu;  // lieu du crime commis
    QString description; // description du deroulement d'un crime commis
    QString categorie;  // les categories existants comme vol,meurtre,braquage,enlevement,agression


};

#endif // CRIME_H





