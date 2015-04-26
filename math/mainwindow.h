//定义了主窗口


#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include "window.h"
#include "aboutdialog.h"
#include "helpbrowser.h"
#include "moduleonedialog.h"
#include "modulethreedialog.h"
#include "modulefourdialog.h"
#include "moduletwodialog.h"

class MainWindow : public QMainWindow {
Q_OBJECT
private:
    Ui_MainWindow *ui;
    AboutDialog *aboutDialog;
    ModuleOneDialog *moduleOneDialog;
    ModuleThreeDialog *moduleThreeDialog;
    ModuleFourDialog *moduleFourDialog;
    ModuleTwoDialog *moduleTwoDialog;
public:
    MainWindow(QWidget *parent=NULL);
    ~MainWindow();
public slots:
    void showAbout();
    void showHelp();
    void showModuleOne();
    void showModuleThree();
    void showModuleFour();
    void showModuleTwo();
};

#endif

