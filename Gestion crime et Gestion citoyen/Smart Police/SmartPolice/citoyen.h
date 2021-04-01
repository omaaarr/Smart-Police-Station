#ifndef CITOYEN_H
#define CITOYEN_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include<QSqlQueryModel>

class Citoyen
{
public:
    Citoyen();   // constructeur par défaut
    Citoyen(QString cIN,QString nom, QString prenom,QString adresse, int telephone, QString email);
    bool ajouter();   // enregistrer dans la base de données
    bool modifier();      // modifier un citoyen dans la base de données
    bool supprimer(QString cIN);       // supprimer un citoyen de la base de donner
    bool chercher (QString cIN);       // chercher dans la base un citoyen avec le code CIN.
                                    // S'il existe, rempli les attributs et renvoie true
                                    // S'il n'existe pas, renvoie false
    QSqlQueryModel* afficher();
    QSqlQueryModel* rechercher(QString condition,QString tri);



    void setCIN(QString cIN);
    QString getCIN();

    void setNOM(QString nom);
    QString getNOM();

    void setPRENOM(QString prenom);
    QString getPRENOM();

    void setADRESSE(QString adresse);
    QString getADRESSE();

    void setTELEPHONE(int telephone);
    int getTELEPHONE();

    void setEMAIL(QString email);
    QString getEMAIL();


private:
    QString cIN;     // numéro carte identité - code
    QString nom;     // nom du citoyen
    QString prenom;  // prénom du citoyen
    QString adresse; // adresse d'habitation principale du citoyen
    int telephone;  // numéro du téléphone de contacte
    QString email;   // adresse email du citoyen
};









#endif // CITOYEN_H
