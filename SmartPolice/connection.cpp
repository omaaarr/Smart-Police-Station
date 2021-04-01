#include "connection.h"
//aa
Connection::Connection()
{

}
bool Connection::createConnection()
{
    db= QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("maDB");     // maDB est configurée dans l'administrateur ODBC
    db.setUserName("adam");
    db.setPassword("adam");
    return db.open();

}
void Connection::fermer()
{
    db.close();
}
QString Connection::getErreur(){
    return db.lastError().text();
}



