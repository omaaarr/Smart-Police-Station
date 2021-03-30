#ifndef FORM_CRIME_H
#define FORM_CRIME_H

#include <QWidget>

namespace Ui {
class Form_crime;
}

class Form_crime : public QWidget
{
    Q_OBJECT

public:
    explicit Form_crime(QWidget *parent = nullptr);
    ~Form_crime();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Form_crime *ui;
};

#endif // FORM_CRIME_H
