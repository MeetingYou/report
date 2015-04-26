/********************************************************************************
** Form generated from reading UI file 'module_four.ui'
**
** Created: Wed Apr 22 21:55:43 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MODULE_FOUR_H
#define MODULE_FOUR_H

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

class Ui_ModuleFourDialog
{
public:
    QGroupBox *groupBox_3;
    QFrame *frame;
    QLabel *resultLabel;
    QPushButton *okButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QLineEdit *setLineEdit;
    QGroupBox *groupBox_4;
    QLineEdit *RLineEdit;

    void setupUi(QDialog *ModuleFourDialog)
    {
        if (ModuleFourDialog->objectName().isEmpty())
            ModuleFourDialog->setObjectName(QString::fromUtf8("ModuleFourDialog"));
        ModuleFourDialog->resize(833, 578);
        ModuleFourDialog->setMinimumSize(QSize(833, 578));
        ModuleFourDialog->setMaximumSize(QSize(833, 578));
        groupBox_3 = new QGroupBox(ModuleFourDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(19, 349, 781, 191));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        groupBox_3->setFont(font);
        frame = new QFrame(groupBox_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(35, 35, 711, 141));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        resultLabel = new QLabel(frame);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(40, 40, 631, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(17);
        resultLabel->setFont(font1);
        resultLabel->setFrameShape(QFrame::StyledPanel);
        resultLabel->setFrameShadow(QFrame::Sunken);
        resultLabel->setAlignment(Qt::AlignCenter);
        okButton = new QPushButton(ModuleFourDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(380, 290, 80, 35));
        okButton->setMinimumSize(QSize(80, 35));
        okButton->setMaximumSize(QSize(16777215, 30));
        layoutWidget = new QWidget(ModuleFourDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(17, 21, 781, 251));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        setLineEdit = new QLineEdit(groupBox_2);
        setLineEdit->setObjectName(QString::fromUtf8("setLineEdit"));
        setLineEdit->setGeometry(QRect(70, 47, 631, 47));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        setLineEdit->setFont(font2);
        setLineEdit->setMaxLength(255);
        setLineEdit->setFrame(true);

        verticalLayout->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFont(font);
        RLineEdit = new QLineEdit(groupBox_4);
        RLineEdit->setObjectName(QString::fromUtf8("RLineEdit"));
        RLineEdit->setGeometry(QRect(70, 40, 631, 47));
        RLineEdit->setFont(font2);
        RLineEdit->setMaxLength(255);
        RLineEdit->setFrame(true);

        verticalLayout->addWidget(groupBox_4);


        verticalLayout_3->addLayout(verticalLayout);


        retranslateUi(ModuleFourDialog);

        QMetaObject::connectSlotsByName(ModuleFourDialog);
    } // setupUi

    void retranslateUi(QDialog *ModuleFourDialog)
    {
        ModuleFourDialog->setWindowTitle(QApplication::translate("ModuleFourDialog", "\345\210\244\346\226\255\345\205\263\347\263\273\347\232\204\346\200\247\350\264\250", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("ModuleFourDialog", "\347\273\223\346\236\234", 0, QApplication::UnicodeUTF8));
        resultLabel->setText(QString());
        okButton->setText(QApplication::translate("ModuleFourDialog", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ModuleFourDialog", "\351\233\206\345\220\210\357\274\210\350\257\267\344\275\277\347\224\250\350\213\261\346\226\207\351\200\227\345\217\267\345\210\206\351\232\224\357\274\214\345\246\202 1,2,3  \357\274\211", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        setLineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        setLineEdit->setText(QString());
        groupBox_4->setTitle(QApplication::translate("ModuleFourDialog", "\345\205\263\347\263\273 (\350\257\267\346\214\211\347\205\247\344\273\245\344\270\213\346\240\274\345\274\217\350\276\223\345\205\245\357\274\232 <1,2>,<2,3>,<1,3>  )", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        RLineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RLineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ModuleFourDialog: public Ui_ModuleFourDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MODULE_FOUR_H
