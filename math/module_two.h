/********************************************************************************
** Form generated from reading UI file 'module_two.ui'
**
** Created: Wed Apr 22 23:12:32 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MODULE_TWO_H
#define MODULE_TWO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ModuleTwoDialog
{
public:
    QGroupBox *groupBox_2;
    QLineEdit *formularLineEdit;
    QLabel *label_5;
    QPushButton *okButton;
    QGroupBox *groupBox;

    void setupUi(QDialog *ModuleTwoDialog)
    {
        if (ModuleTwoDialog->objectName().isEmpty())
            ModuleTwoDialog->setObjectName(QString::fromUtf8("ModuleTwoDialog"));
        ModuleTwoDialog->resize(799, 575);
        ModuleTwoDialog->setMinimumSize(QSize(799, 575));
        ModuleTwoDialog->setMaximumSize(QSize(799, 575));
        groupBox_2 = new QGroupBox(ModuleTwoDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(21, 7, 748, 171));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
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
        okButton->setGeometry(QRect(140, 104, 81, 26));
        groupBox = new QGroupBox(ModuleTwoDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(21, 190, 751, 361));
        groupBox->setFont(font);

        retranslateUi(ModuleTwoDialog);

        QMetaObject::connectSlotsByName(ModuleTwoDialog);
    } // setupUi

    void retranslateUi(QDialog *ModuleTwoDialog)
    {
        ModuleTwoDialog->setWindowTitle(QApplication::translate("ModuleTwoDialog", "\346\261\202\344\273\273\346\204\217\345\205\254\345\274\217\347\232\204\347\234\237\345\200\274\350\241\250", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ModuleTwoDialog", "\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        formularLineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        formularLineEdit->setText(QString());
        label_5->setText(QApplication::translate("ModuleTwoDialog", "<html><head/><body><p><img src=\":/images/ps.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("ModuleTwoDialog", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ModuleTwoDialog", "\347\234\237\345\200\274\350\241\250", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ModuleTwoDialog: public Ui_ModuleTwoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MODULE_TWO_H
