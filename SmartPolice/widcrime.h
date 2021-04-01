#ifndef WIDCRIME_H
#define WIDCRIME_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QDate>
#include <QSqlQueryModel>

QT_BEGIN_NAMESPACE
namespace Ui { class widcrime; }
QT_END_NAMESPACE

class widcrime : public QWidget
{
    Q_OBJECT

public:
    widcrime();
    explicit widcrime(QWidget *parent = nullptr);
    ~widcrime();

public slots:
    void on_pb_Ajouter_clicked();
    void on_pb_supprimer_clicked();
private slots:
    void on_pb_recherche_clicked();

private:
    Ui::widcrime *ui;
};

#endif // WIDCRIME_H




