#include "modulefourdialog.h"
#include "module/modulefourfunction.h"
#include <QString>

ModuleFourDialog::ModuleFourDialog(QWidget *parent) : QDialog(parent)
{
    ui = new Ui_ModuleFourDialog;
    ui->setupUi(this);
    connect(ui->okButton, SIGNAL(clicked()), this, SLOT(deal()));
    connect(ui->setLineEdit, SIGNAL(textEdited(QString)), this, SLOT(clearText(QString)));
    connect(ui->RLineEdit, SIGNAL(textEdited(QString)), this, SLOT(clearText(QString)));
}

ModuleFourDialog::~ModuleFourDialog()
{
    delete ui;
}

void ModuleFourDialog::deal()
{
    QString set = ui->setLineEdit->text();
    QString R = ui->RLineEdit->text();


    if (set.isEmpty()||R.isEmpty()) {
        ui->resultLabel->setText("请不要输入空集或者空关系");
        return;
    }

    ModuleFourFunction m(set, R);

    QString str;
    QString s = m.relations();
    if (s.isEmpty()) {
        str = QString("该关系不具有五种性质的任何一种");
    } else {
        str = QString("该关系具有： ") + s;
    }

    ui->resultLabel->setText(str);
}

void ModuleFourDialog::clearText(QString s)
{
    ui->resultLabel->setText("");
}
