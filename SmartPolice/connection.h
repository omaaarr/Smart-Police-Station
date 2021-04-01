#ifndef CONNECTION_H
#define CONNECTION_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <exception>
#include <QDebug>


class Connection
{
private:
    QSqlDatabase db;

public:
    Connection();
    bool createConnection();
    QString getErreur();
    void fermer();
};

#endif // CONNECTION_H




