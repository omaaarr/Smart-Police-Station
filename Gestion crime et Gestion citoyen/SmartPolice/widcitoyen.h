#ifndef WIDCITOYEN_H
#define WIDCITOYEN_H
#include <QWidget>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QDate>
#include <QSqlQueryModel>

namespace Ui {
class widCitoyen;
}

class widCitoyen : public QWidget
{
    Q_OBJECT

public:
   widCitoyen();
   widCitoyen(QWidget *parent = nullptr);
   ~widCitoyen();
public slots:
    void on_pb_Ajouter_clicked();
    void on_pb_supprimer_clicked();
private:
    Ui::widCitoyen *ui;
};

#endif // WIDCITOYEN_H
