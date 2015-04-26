#ifndef MODULE_TWO_DIALOG_H
#define MODULE_TWO_DIALOG_H

#include "module_two.h"
#include <QDialog>
#include <QTableWidget>

class ModuleTwoDialog : public QDialog {
Q_OBJECT
private:
    Ui_ModuleTwoDialog *ui;
    QTableWidget *tableWidget;
public:
    ModuleTwoDialog(QWidget *parent=NULL);
    ~ModuleTwoDialog();
public slots:
    void deal();
    void clearText(QString);
};

#endif
