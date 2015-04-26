#include "aboutdialog.h"

AboutDialog::AboutDialog(QWidget *parent):QDialog(parent)
{
    ui=new Ui_Dialog;
    ui->setupUi(this);
    QObject::connect(ui->closeButton, SIGNAL(clicked()), this, SLOT(close()));
}

AboutDialog::~AboutDialog()
{
    delete ui;
}
