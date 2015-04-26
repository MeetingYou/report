#include "helpbrowser.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QUrl>
#include <QKeySequence>
#include <QTextCodec>
#include <QDebug>
HelpBrowser::HelpBrowser(const QString &path, const QString &page, QWidget *parent) : QWidget(parent)
{
    setAttribute(Qt::WA_DeleteOnClose);
    setAttribute(Qt::WA_GroupLeader);

    textBrowser = new QTextBrowser;

    homeButton = new QPushButton(tr("主页"));
    backButton = new QPushButton(tr("返回"));
    closeButton = new QPushButton(tr("关闭"));
    closeButton->setShortcut(QKeySequence("Esc"));

    QHBoxLayout *buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(homeButton);
    buttonLayout->addWidget(backButton);
    buttonLayout->addStretch();
    buttonLayout->addWidget(closeButton);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(buttonLayout);
    mainLayout->addWidget(textBrowser);
    setLayout(mainLayout);

    connect(homeButton, SIGNAL(clicked()), textBrowser, SLOT(home()));
    connect(backButton, SIGNAL(clicked()), textBrowser, SLOT(backward()));
    connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

    connect(textBrowser, SIGNAL(sourceChanged(const QUrl&)), this, SLOT(updateWindowTitle()));

    textBrowser->setSearchPaths(QStringList() << path);
    textBrowser->setSource(page);
}

void HelpBrowser::updateWindowTitle()
{


    setWindowTitle(QString(tr("帮助: %1")).arg(textBrowser->documentTitle()));
}

void HelpBrowser::showPage(const QString &page)
{
   // QString path = directoryOf("doc").absolutePath();
    QString path = ":/doc/index.html";
    HelpBrowser *browser  = new HelpBrowser(path, page);
    browser->resize(480, 360);
    browser->setMaximumSize(480,360);
    browser->setWindowIcon(QIcon(":/images/question.png"));
    browser->show();
}
