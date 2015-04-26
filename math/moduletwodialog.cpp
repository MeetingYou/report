#include "moduletwodialog.h"
#include "module/moduleonefunction.h"
#include "module/moduletwofunction.h"
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QStringList>

ModuleTwoDialog::ModuleTwoDialog(QWidget *parent):QDialog(parent)
{
    ui = new Ui_ModuleTwoDialog;
    ui->setupUi(this);
    connect(ui->okButton, SIGNAL(clicked()), this, SLOT(deal()));
    connect(ui->formularLineEdit, SIGNAL(textEdited(QString)), this, SLOT(clearText(QString)));
}

ModuleTwoDialog::~ModuleTwoDialog()
{
    delete ui;
}

void ModuleTwoDialog::clearText(QString s)
{

}

void ModuleTwoDialog::deal()
{
    QString formular = ui->formularLineEdit->text();
    if (formular.size() == 0) {
        QMessageBox msgBox;
        msgBox.setText(tr("请输入表达式!           "));
        msgBox.setWindowTitle(tr("警告"));
        msgBox.exec();
        return;
    }

    ModuleOneFunction moduleOne(formular);
    if (!moduleOne.isFormular()) {
        QMessageBox msgBox;
        msgBox.setText(tr("表达式非法，请重新输入!           "));
        msgBox.setWindowTitle(tr("警告"));
        msgBox.exec();
        return;
    }

    ModuleTwoFunction moduleTwo(formular);
    vector<Line> result =  moduleTwo.generate();

    int rows = result.size();
    int cols = moduleTwo.getVarNames().size()+1;

    tableWidget = new QTableWidget(ui->groupBox);
    tableWidget->setRowCount(rows);
    tableWidget->setColumnCount(cols);

    for (unsigned i=0; i<result.size(); i++) {
        for (unsigned j=0; j<result[i].size(); j++) {
            QTableWidgetItem *newItem = new QTableWidgetItem(tr("%1").arg(result[i][j]));
            newItem->setTextAlignment(Qt::AlignCenter);
            tableWidget->setItem(i, j, newItem);
        }
    }

    //设置表头
    QStringList header;
    vector<char> varNames = moduleTwo.getVarNames();
    for (unsigned i=0; i<varNames.size(); i++)
        header << QString(varNames[i]);
    header << formular;
    tableWidget->setHorizontalHeaderLabels(header);
    //tableWidget->verticalHeader()->setResizeMode(QHeaderView::Stretch);
    //tableWidget->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
    //tableWidget->verticalHeader()->setVisible(false);
    tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableWidget->move(15, 30);
    tableWidget->resize(720,320);
    tableWidget->setVisible(true);

}
