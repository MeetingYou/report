#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    ui = new Ui_MainWindow;
    ui->setupUi(this);

    //绑定菜单栏退出按钮事件
    connect(ui->exitAction, SIGNAL(triggered()), this, SLOT(close()));

    //绑定菜单栏关于按钮事件
    connect(ui->aboutAction, SIGNAL(triggered()), this, SLOT(showAbout()));

    //绑定菜单栏查看帮助按钮事件
    connect(ui->helpAction, SIGNAL(triggered()), this, SLOT(showHelp()));

    //绑定主窗口模块一按钮事件
    connect(ui->oneButton, SIGNAL(clicked()), this, SLOT(showModuleOne()));

    //绑定主窗口模块三按钮事件
    connect(ui->threeButton, SIGNAL(clicked()), this, SLOT(showModuleThree()));

    //绑定主窗口模块四按钮事件
    connect(ui->fourButton, SIGNAL(clicked()), this, SLOT(showModuleFour()));

    //绑定主窗口模块二按钮事件
    connect(ui->twoButton, SIGNAL(clicked()), this, SLOT(showModuleTwo()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete aboutDialog;
    delete moduleOneDialog;
    delete moduleThreeDialog;
    delete moduleFourDialog;
    delete moduleTwoDialog;
}

//关于 槽函数
void MainWindow::showAbout()
{
    aboutDialog = new AboutDialog(this);
    aboutDialog->setVisible(true);
}

//查看帮助 槽函数
void MainWindow::showHelp()
{
    HelpBrowser::showPage("index.html");
}

//模块一 槽函数
void MainWindow::showModuleOne()
{
    moduleOneDialog = new ModuleOneDialog(this);
    moduleOneDialog->setVisible(true);
}

void MainWindow::showModuleThree()
{
    moduleThreeDialog = new ModuleThreeDialog(this);
    moduleThreeDialog->setVisible(true);
}

void MainWindow::showModuleFour()
{
    moduleFourDialog = new ModuleFourDialog(this);
    moduleFourDialog->setVisible(true);
}

void MainWindow::showModuleTwo()
{
    moduleTwoDialog = new ModuleTwoDialog(this);
    moduleTwoDialog->setVisible(true);
}
