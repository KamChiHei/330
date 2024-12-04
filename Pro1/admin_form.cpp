#include "admin_form.h"
#include "ui_admin_form.h"

admin_Form::admin_Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admin_Form)
{
    ui->setupUi(this);
}

admin_Form::~admin_Form()
{
    delete ui;
}
