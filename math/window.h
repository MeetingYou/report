/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created: Tue Apr 14 21:19:13 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef WINDOW_H
#define WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *helpAction;
    QAction *aboutAction;
    QAction *exitAction;
    QWidget *centralwidget;
    QPushButton *oneButton;
    QPushButton *twoButton;
    QPushButton *threeButton;
    QPushButton *fourButton;
    QMenuBar *menubar;
    QMenu *menu_file;
    QMenu *menu_help;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(480, 350);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(480, 350));
        MainWindow->setMaximumSize(QSize(480, 350));
        MainWindow->setBaseSize(QSize(0, 0));
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/math.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        helpAction = new QAction(MainWindow);
        helpAction->setObjectName(QString::fromUtf8("helpAction"));
        helpAction->setSoftKeyRole(QAction::NoSoftKey);
        aboutAction = new QAction(MainWindow);
        aboutAction->setObjectName(QString::fromUtf8("aboutAction"));
        exitAction = new QAction(MainWindow);
        exitAction->setObjectName(QString::fromUtf8("exitAction"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        oneButton = new QPushButton(centralwidget);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));
        oneButton->setGeometry(QRect(50, 25, 391, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(14);
        oneButton->setFont(font1);
        oneButton->setCursor(QCursor(Qt::PointingHandCursor));
        oneButton->setLayoutDirection(Qt::LeftToRight);
        twoButton = new QPushButton(centralwidget);
        twoButton->setObjectName(QString::fromUtf8("twoButton"));
        twoButton->setGeometry(QRect(50, 95, 391, 50));
        twoButton->setFont(font1);
        twoButton->setCursor(QCursor(Qt::PointingHandCursor));
        twoButton->setAutoDefault(false);
        threeButton = new QPushButton(centralwidget);
        threeButton->setObjectName(QString::fromUtf8("threeButton"));
        threeButton->setGeometry(QRect(50, 165, 391, 50));
        threeButton->setFont(font1);
        threeButton->setCursor(QCursor(Qt::PointingHandCursor));
        fourButton = new QPushButton(centralwidget);
        fourButton->setObjectName(QString::fromUtf8("fourButton"));
        fourButton->setGeometry(QRect(50, 235, 391, 50));
        fourButton->setFont(font1);
        fourButton->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 480, 23));
        menubar->setDefaultUp(false);
        menubar->setNativeMenuBar(true);
        menu_file = new QMenu(menubar);
        menu_file->setObjectName(QString::fromUtf8("menu_file"));
        menu_help = new QMenu(menubar);
        menu_help->setObjectName(QString::fromUtf8("menu_help"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_file->menuAction());
        menubar->addAction(menu_help->menuAction());
        menu_file->addAction(exitAction);
        menu_help->addAction(helpAction);
        menu_help->addSeparator();
        menu_help->addAction(aboutAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\347\246\273\346\225\243\346\225\260\345\255\246\345\212\250\346\200\201\346\274\224\347\244\272\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        helpAction->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
        aboutAction->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
        exitAction->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        exitAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        oneButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        oneButton->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        oneButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        oneButton->setText(QApplication::translate("MainWindow", "1. \351\252\214\350\257\201\344\270\200\344\270\252\350\241\250\350\276\276\345\274\217\346\230\257\345\220\246\344\270\272\345\221\275\351\242\230\345\205\254\345\274\217", 0, QApplication::UnicodeUTF8));
        twoButton->setText(QApplication::translate("MainWindow", "2. \346\261\202\344\273\273\346\204\217\345\205\254\345\274\217\347\232\204\347\234\237\345\200\274\350\241\250          ", 0, QApplication::UnicodeUTF8));
        threeButton->setText(QApplication::translate("MainWindow", "3. \346\261\202\344\273\273\346\204\217\344\270\244\344\270\252\351\233\206\345\220\210\347\232\204\350\277\220\347\256\227        ", 0, QApplication::UnicodeUTF8));
        fourButton->setText(QApplication::translate("MainWindow", "4. \345\210\244\346\226\255\345\205\263\347\263\273\347\232\204\346\200\247\350\264\250              ", 0, QApplication::UnicodeUTF8));
        menu_file->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        menu_help->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WINDOW_H
