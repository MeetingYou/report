#ifndef MODULE_FOUR_DIALOG_H
#define MODULE_FOUR_DIALOG_H

#include "module_four.h"
#include <QDialog>

class ModuleFourDialog : public QDialog {
Q_OBJECT
private:
    Ui_ModuleFourDialog *ui;
public:
    ModuleFourDialog(QWidget *parent=NULL);
    ~ModuleFourDialog();
public slots:
    void deal();
    void clearText(QString);
};

#endif
