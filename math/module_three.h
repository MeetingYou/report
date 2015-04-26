/********************************************************************************
** Form generated from reading UI file 'module_three.ui'
**
** Created: Thu Apr 16 00:13:51 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MODULE_THREE_H
#define MODULE_THREE_H

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

class Ui_ModuleThreeDialog
{
public:
    QGroupBox *groupBox_3;
    QFrame *frame;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QLabel *intersectLabel;
    QLabel *mergeLabel;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_7;
    QLabel *diffALabel;
    QLabel *diffBLabel;
    QPushButton *okButton;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QLineEdit *setALineEdit;
    QGroupBox *groupBox_4;
    QLineEdit *setBLineEdit;

    void setupUi(QDialog *ModuleThreeDialog)
    {
        if (ModuleThreeDialog->objectName().isEmpty())
            ModuleThreeDialog->setObjectName(QString::fromUtf8("ModuleThreeDialog"));
        ModuleThreeDialog->resize(900, 650);
        ModuleThreeDialog->setMinimumSize(QSize(900, 650));
        ModuleThreeDialog->setMaximumSize(QSize(900, 650));
        groupBox_3 = new QGroupBox(ModuleThreeDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 411, 881, 191));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        groupBox_3->setFont(font);
        frame = new QFrame(groupBox_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(35, 35, 821, 141));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 26, 46, 23));
        label_4->setFrameShape(QFrame::StyledPanel);
        label_4->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 74, 47, 23));
        label_5->setFrameShape(QFrame::StyledPanel);
        label_5->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(424, 32, 40, 23));
        label_6->setFrameShape(QFrame::StyledPanel);
        label_6->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(425, 76, 41, 23));
        label_7->setFrameShape(QFrame::StyledPanel);
        label_7->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 16, 281, 91));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        intersectLabel = new QLabel(widget);
        intersectLabel->setObjectName(QString::fromUtf8("intersectLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(13);
        intersectLabel->setFont(font1);
        intersectLabel->setCursor(QCursor(Qt::ArrowCursor));
        intersectLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(intersectLabel);

        mergeLabel = new QLabel(widget);
        mergeLabel->setObjectName(QString::fromUtf8("mergeLabel"));
        mergeLabel->setFont(font1);
        mergeLabel->setCursor(QCursor(Qt::ArrowCursor));
        mergeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(mergeLabel);

        widget1 = new QWidget(frame);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(487, 19, 281, 91));
        verticalLayout_7 = new QVBoxLayout(widget1);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        diffALabel = new QLabel(widget1);
        diffALabel->setObjectName(QString::fromUtf8("diffALabel"));
        diffALabel->setFont(font1);
        diffALabel->setCursor(QCursor(Qt::ArrowCursor));
        diffALabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_7->addWidget(diffALabel);

        diffBLabel = new QLabel(widget1);
        diffBLabel->setObjectName(QString::fromUtf8("diffBLabel"));
        diffBLabel->setFont(font1);
        diffBLabel->setCursor(QCursor(Qt::ArrowCursor));
        diffBLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_7->addWidget(diffBLabel);

        okButton = new QPushButton(ModuleThreeDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(400, 372, 80, 35));
        okButton->setMinimumSize(QSize(80, 35));
        okButton->setMaximumSize(QSize(16777215, 30));
        widget2 = new QWidget(ModuleThreeDialog);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(11, 6, 871, 361));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        groupBox->setCursor(QCursor(Qt::OpenHandCursor));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(15, 24, 1201, 121));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label->setFont(font2);
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setTextFormat(Qt::PlainText);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(label_3);


        verticalLayout_3->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(widget2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        setALineEdit = new QLineEdit(groupBox_2);
        setALineEdit->setObjectName(QString::fromUtf8("setALineEdit"));
        setALineEdit->setGeometry(QRect(142, 25, 631, 47));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        setALineEdit->setFont(font3);
        setALineEdit->setMaxLength(255);
        setALineEdit->setFrame(true);

        verticalLayout->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(widget2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFont(font);
        setBLineEdit = new QLineEdit(groupBox_4);
        setBLineEdit->setObjectName(QString::fromUtf8("setBLineEdit"));
        setBLineEdit->setGeometry(QRect(141, 23, 631, 47));
        setBLineEdit->setFont(font3);
        setBLineEdit->setMaxLength(255);
        setBLineEdit->setFrame(true);

        verticalLayout->addWidget(groupBox_4);


        verticalLayout_3->addLayout(verticalLayout);


        retranslateUi(ModuleThreeDialog);

        QMetaObject::connectSlotsByName(ModuleThreeDialog);
    } // setupUi

    void retranslateUi(QDialog *ModuleThreeDialog)
    {
        ModuleThreeDialog->setWindowTitle(QApplication::translate("ModuleThreeDialog", "\346\261\202\344\270\244\344\270\252\351\233\206\345\220\210\347\232\204\345\220\204\347\247\215\350\277\220\347\256\227", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("ModuleThreeDialog", "\347\273\223\346\236\234", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ModuleThreeDialog", "A\342\210\251B", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ModuleThreeDialog", "A\342\210\252B", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ModuleThreeDialog", "A-B", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ModuleThreeDialog", "B-A", 0, QApplication::UnicodeUTF8));
        intersectLabel->setText(QString());
        mergeLabel->setText(QString());
        diffALabel->setText(QString());
        diffBLabel->setText(QString());
        okButton->setText(QApplication::translate("ModuleThreeDialog", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ModuleThreeDialog", "\344\270\244\344\270\252\351\233\206\345\220\210\350\277\220\347\256\227\347\232\204\345\256\232\344\271\211", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ModuleThreeDialog", "\342\221\264 \344\272\244\351\233\206\342\210\251\357\274\232 \347\224\261\345\261\236\344\272\216A\344\270\224\345\261\236\344\272\216B\347\232\204\347\233\270\345\220\214\345\205\203\347\264\240\347\273\204\346\210\220\347\232\204\351\233\206\345\220\210\357\274\214\350\256\260\344\275\234A\342\210\251B\357\274\210\346\210\226B\342\210\251A\357\274\211\357\274\214\345\215\263A\342\210\251B={x|x\342\210\210A,\344\270\224x\342\210\210B}", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ModuleThreeDialog", "\342\221\265 \345\271\266\351\233\206\342\210\252\357\274\232\347\224\261\346\211\200\346\234\211\345\261\236\344\272\216\351\233\206\345\220\210A\346\210\226\345\261\236\344\272\216\351\233\206\345\220\210B\347\232\204\345\205\203\347\264\240\347\273\204\346\210\220\347\232\204\351\233\206\345\220\210\357\274\214\350\256\260\344\275\234A\342\210\252B\357\274\210\346\210\226B\342\210\252A\357\274\211\357\274\214\345\215\263A\342\210\252B={x|x\342\210\210A,\346\210\226x\342\210\210B}", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ModuleThreeDialog", "\342\221\266 \345\267\256\351\233\206 -\357\274\232 \347\224\261\345\261\236\344\272\216A\350\200\214\344\270\215\345\261\236\344\272\216B\347\232\204\345\205\203\347\264\240\347\273\204\346\210\220\347\232\204\351\233\206\345\220\210\357\274\214\347\247\260\344\270\272B\345\205\263\344\272\216A\347\232\204\345\267\256\351\233\206\357\274\214\350\256\260\344\275\234A-B\357\274\214\345\215\263A-B={x|x\342\210\210A\357\274\214\344\270\224x\342\210\211B}", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ModuleThreeDialog", "\351\233\206\345\220\210A\357\274\210\350\257\267\344\275\277\347\224\250\350\213\261\346\226\207\351\200\227\345\217\267\345\210\206\351\232\224\357\274\214\345\246\202 1,2,3\357\274\211", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        setALineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        setALineEdit->setText(QString());
        groupBox_4->setTitle(QApplication::translate("ModuleThreeDialog", "\351\233\206\345\220\210B", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        setBLineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        setBLineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ModuleThreeDialog: public Ui_ModuleThreeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MODULE_THREE_H
