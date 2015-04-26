#include <QApplication>
#include <QDirectPainter>
#include <QTextCodec>
#include "mainwindow.h"
#include "aboutdialog.h"
int main(int argc, char** argv)
{
	QApplication app(argc,argv);

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale( ));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale( ));

    app.setWindowIcon(QIcon(":/images/math.png"));
    MainWindow *pWin = new MainWindow;
    pWin->setVisible(true);

	return app.exec();
}

