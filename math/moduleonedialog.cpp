#include "moduleonedialog.h"
#include "module/moduleonefunction.h"
#include <QString>

ModuleOneDialog::ModuleOneDialog(QWidget *parent) : QDialog(parent)
{
    ui = new Ui_ModuleOneDialog;
    ui->setupUi(this);
    connect(ui->okButton, SIGNAL(clicked()), this, SLOT(deal()));
    connect(ui->formularLineEdit, SIGNAL(returnPressed()), this, SLOT(deal()));
    connect(ui->formularLineEdit, SIGNAL(textEdited(QString)), this, SLOT(clearText(QString)));
}

ModuleOneDialog::~ModuleOneDialog()
{
    delete ui;
}

void ModuleOneDialog::deal()
{
    QString formular = ui->formularLineEdit->text();
    if (formular.size() == 0) {
        ui->resultLabel->setText(tr("请输入表达式"));
        return;
    }

    ModuleOneFunction mod(formular);
    if (mod.isFormular())
        ui->resultLabel->setText(tr("是命题公式"));
    else
        ui->resultLabel->setText(tr("不是命题公式"));
}

void ModuleOneDialog::clearText(QString s)
{
    ui->resultLabel->setText(tr("请输入表达式"));
}
