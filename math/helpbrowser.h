//定义了单击菜单栏查看帮助选项 弹出的窗口


#ifndef HELP_BROWSER_H
#define HELP_BROWSER_H

#include <QString>
#include <QTextBrowser>
#include <QPushButton>

class HelpBrowser : public QWidget {
Q_OBJECT
public:
    HelpBrowser(const QString &path, const QString &page, QWidget *parent=NULL);
    static void showPage(const QString &page);
public slots:
    void updateWindowTitle();
private:
    QTextBrowser *textBrowser;
    QPushButton *homeButton;
    QPushButton *backButton;
    QPushButton *closeButton;
};

#endif
