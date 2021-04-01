#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "widcrime.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void afficherStatus(QString msg); // afficher un text dans la barre de status
private slots:

    void on_actionCrime_triggered();

    void on_actionCitoyen_triggered();

private:
    Ui::MainWindow *ui;
    widcrime * myWidCrime;
};
#endif // MAINWINDOW_H











