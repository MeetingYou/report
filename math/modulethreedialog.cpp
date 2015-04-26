#include "modulethreedialog.h"
#include "module/modulethreefunction.h"
#include <QString>

ModuleThreeDialog::ModuleThreeDialog(QWidget *parent) : QDialog(parent)
{
    ui = new Ui_ModuleThreeDialog;
    ui->setupUi(this);
    connect(ui->okButton, SIGNAL(clicked()), this, SLOT(deal()));
    connect(ui->setALineEdit, SIGNAL(textEdited(QString)), this, SLOT(clearText(QString)));
    connect(ui->setBLineEdit, SIGNAL(textEdited(QString)), this, SLOT(clearText(QString)));
}

ModuleThreeDialog::~ModuleThreeDialog()
{
    delete ui;
}

void ModuleThreeDialog::deal()
{
    QString strA = ui->setALineEdit->text();
    QString strB = ui->setBLineEdit->text();
    ModuleThreeFunction m;
    QString tmp = m.mergeSet(strA, strB);
    if (tmp.size()==0)
        ui->mergeLabel->setText("空集");
    else
        ui->mergeLabel->setText(tmp);

    tmp = m.intersectSet(strA, strB);
    if (tmp.size()==0)
        ui->intersectLabel->setText("空集");
    else
        ui->intersectLabel->setText(tmp);

    tmp = m.diffSet(strA, strB);
    if(tmp.size()==0)
        ui->diffALabel->setText("空集");
    else
        ui->diffALabel->setText(tmp);

    tmp = m.diffSet(strB, strA);
    if(tmp.size()==0)
        ui->diffBLabel->setText("空集");
    else
        ui->diffBLabel->setText(tmp);
}

void ModuleThreeDialog::clearText(QString s)
{
    ui->mergeLabel->setText("");
    ui->intersectLabel->setText("");
    ui->diffALabel->setText("");
    ui->diffBLabel->setText("");
}
