/********************************************************************************
** Form generated from reading UI file 'module_one.ui'
**
** Created: Tue Apr 14 21:09:10 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MODULE_ONE_H
#define MODULE_ONE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModuleOneDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_main;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QLineEdit *formularLineEdit;
    QLabel *label_5;
    QPushButton *okButton;
    QGroupBox *groupBox_3;
    QFrame *frame;
    QLabel *resultLabel;

    void setupUi(QDialog *ModuleOneDialog)
    {
        if (ModuleOneDialog->objectName().isEmpty())
            ModuleOneDialog->setObjectName(QString::fromUtf8("ModuleOneDialog"));
        ModuleOneDialog->resize(799, 575);
        ModuleOneDialog->setMinimumSize(QSize(799, 575));
        ModuleOneDialog->setMaximumSize(QSize(799, 575));
        layoutWidget = new QWidget(ModuleOneDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 750, 491));
        verticalLayout_main = new QVBoxLayout(layoutWidget);
        verticalLayout_main->setSpacing(24);
        verticalLayout_main->setObjectName(QString::fromUtf8("verticalLayout_main"));
        verticalLayout_main->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        groupBox->setFont(font);
        groupBox->setCursor(QCursor(Qt::OpenHandCursor));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 24, 721, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label->setFont(font1);
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);


        verticalLayout_main->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        formularLineEdit = new QLineEdit(groupBox_2);
        formularLineEdit->setObjectName(QString::fromUtf8("formularLineEdit"));
        formularLineEdit->setGeometry(QRect(20, 40, 331, 41));
        formularLineEdit->setMaxLength(255);
        formularLineEdit->setFrame(true);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(370, 27, 371, 111));
        label_5->setTextFormat(Qt::RichText);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5->setWordWrap(true);
        okButton = new QPushButton(groupBox_2);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(140, 100, 81, 26));

        verticalLayout_main->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        frame = new QFrame(groupBox_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(230, 30, 270, 91));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        resultLabel = new QLabel(frame);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(0, 20, 261, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(17);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        resultLabel->setFont(font2);
        resultLabel->setFrameShape(QFrame::NoFrame);
        resultLabel->setTextFormat(Qt::PlainText);
        resultLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_main->addWidget(groupBox_3);


        retranslateUi(ModuleOneDialog);

        QMetaObject::connectSlotsByName(ModuleOneDialog);
    } // setupUi

    void retranslateUi(QDialog *ModuleOneDialog)
    {
        ModuleOneDialog->setWindowTitle(QApplication::translate("ModuleOneDialog", "\351\252\214\350\257\201\350\241\250\350\276\276\345\274\217\346\230\257\345\220\246\344\270\272\345\221\275\351\242\230\345\205\254\345\274\217", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ModuleOneDialog", "\345\221\275\351\242\230\345\205\254\345\274\217\347\232\204\345\256\232\344\271\211", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ModuleOneDialog", "\342\221\264 \345\215\225\344\270\252\345\221\275\351\242\230\345\217\230\345\205\203\346\230\257\344\270\252\345\221\275\351\242\230\345\205\254\345\274\217\343\200\202", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ModuleOneDialog", "<html><head/><body><p>\342\221\265 \350\213\245A\346\230\257\345\221\275\351\242\230\345\205\254\345\274\217\357\274\214\345\210\231\302\254A\346\230\257\345\221\275\351\242\230\345\205\254\345\274\217\343\200\202</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ModuleOneDialog", "\342\221\266 \350\213\245A\345\222\214B\346\230\257\345\221\275\351\242\230\345\205\254\345\274\217\357\274\214\345\210\231(A\342\210\247B)\357\274\214(A\342\210\250B)\357\274\214(A&rarr;B)\345\222\214(A&harr;B)\351\203\275\346\230\257\345\221\275\351\242\230\345\205\254\345\274\217\343\200\202", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ModuleOneDialog", "\342\221\267 \345\275\223\344\270\224\344\273\205\345\275\223\346\234\211\351\231\220\346\254\241\345\234\260\345\272\224\347\224\250\342\221\264\357\274\214\342\221\265\357\274\214\342\221\266\346\211\200\345\276\227\345\210\260\347\232\204\345\220\253\346\234\211\345\221\275\351\242\230\345\217\230\345\205\203\343\200\201\350\201\224\347\273\223\350\257\215\345\222\214\345\234\206\346\213\254\345\217\267\347\232\204\347\254\246\345\217\267\344\270\262\346\230\257\345\221\275\351\242\230\345\205\254\345\274\217\343\200\202", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ModuleOneDialog", "\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        formularLineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        formularLineEdit->setText(QString());
        label_5->setText(QApplication::translate("ModuleOneDialog", "<html><head/><body><p><img src=\":/images/ps.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("ModuleOneDialog", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("ModuleOneDialog", "\347\273\223\346\236\234", 0, QApplication::UnicodeUTF8));
        resultLabel->setText(QApplication::translate("ModuleOneDialog", "\350\257\267\350\276\223\345\205\245\350\241\250\350\276\276\345\274\217", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ModuleOneDialog: public Ui_ModuleOneDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MODULE_ONE_H
