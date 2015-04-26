//模块一 定义了验证是否为命题公式的窗口

#ifndef MODULE_ONE_DIALOG_H
#define MODULE_ONE_DIALOG_H

#include "module_one.h"
#include <QDialog>

class ModuleOneDialog : public QDialog {
Q_OBJECT
private:
    Ui_ModuleOneDialog *ui;
public:
    ModuleOneDialog(QWidget *parent=NULL);
    ~ModuleOneDialog();
public slots:
    void deal();
    void clearText(QString);
};

#endif
