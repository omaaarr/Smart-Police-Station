#include "form_crime.h"
#include "ui_form_crime.h"

Form_crime::Form_crime(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_crime)
{
    ui->setupUi(this);
}

Form_crime::~Form_crime()
{
    delete ui;
}
