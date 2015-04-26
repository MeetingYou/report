
#ifndef MODULE_THREE_DIALOG_H
#define MODULE_THREE_DIALOG_H

#include "module_three.h"
#include <QDialog>

class ModuleThreeDialog : public QDialog {
Q_OBJECT
private:
    Ui_ModuleThreeDialog *ui;
public:
    ModuleThreeDialog(QWidget *parent=NULL);
    ~ModuleThreeDialog();
public slots:
    void deal();
    void clearText(QString);
};

#endif
