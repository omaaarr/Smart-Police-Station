#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int check_string_without_number(QString s);
    void clear_ajouter();
    void clear_modifier();
    void afficher_table_document();
    void afficher_table_reclamation();
private slots:
    void on_document_clicked();

    void on_back_doc_clicked();

    void on_ajouter_doc_clicked();

    void on_annuler_doc_clicked();

    void on_modifier_doc_clicked();

    void on_annuler_doc_2_clicked();

    void on_supprimer_doc_clicked();

    void on_annuler_doc_3_clicked();

    void on_ajouter_doc_2_clicked();

    void on_chercher_doc_modifier_clicked();

    void on_modifier_doc_2_clicked();

    void on_chercher_doc_supp_clicked();

    void on_search_doc_textChanged(const QString &arg1);

    void on_reclamation_clicked();

    void on_back_rec_clicked();

    void on_ajouter_rec_clicked();

    void on_modifier_rec_clicked();

    void on_supprimer_rec_clicked();

    void on_annuler_rec_clicked();

    void on_ajouter_rec_2_clicked();

    void on_annuler_rec_modifier_clicked();

    void on_modifier_rec_confirmation_clicked();

    void on_annuler_rec_supp_clicked();

    void on_supprimer_rec_confirmation_clicked();

    void on_search_cin_rec_modifier_clicked();

    void on_search_rec_textChanged(const QString &arg1);

    void on_print_document_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
