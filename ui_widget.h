/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *vlMain;
    QWidget *shadowWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *btnMin;
    QPushButton *btnMax;
    QPushButton *btnClose;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *btnFile;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listWidgetMd5;
    QListWidget *listWidgetDumplates;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(470, 374);
        vlMain = new QVBoxLayout(Widget);
        vlMain->setSpacing(6);
        vlMain->setContentsMargins(11, 11, 11, 11);
        vlMain->setObjectName(QStringLiteral("vlMain"));
        shadowWidget = new QWidget(Widget);
        shadowWidget->setObjectName(QStringLiteral("shadowWidget"));
        shadowWidget->setStyleSheet(QLatin1String("#shadowWidget{\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius:5px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(shadowWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(shadowWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        btnMin = new QPushButton(shadowWidget);
        btnMin->setObjectName(QStringLiteral("btnMin"));
        btnMin->setMinimumSize(QSize(42, 42));
        btnMin->setMaximumSize(QSize(42, 42));
        btnMin->setStyleSheet(QLatin1String("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(255, 144, 116);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 85, 0);\n"
"}\n"
"\n"
"QPushButton:Press{\n"
"	background-color: rgb(255, 0, 0);\n"
"}"));

        horizontalLayout->addWidget(btnMin);

        btnMax = new QPushButton(shadowWidget);
        btnMax->setObjectName(QStringLiteral("btnMax"));
        btnMax->setMinimumSize(QSize(0, 42));
        btnMax->setMaximumSize(QSize(42, 42));
        btnMax->setStyleSheet(QLatin1String("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(170, 255, 127);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(85, 255, 127);\n"
"}\n"
"\n"
"QPushButton:Press{\n"
"	background-color: rgb(0, 255, 0);\n"
"}"));

        horizontalLayout->addWidget(btnMax);

        btnClose = new QPushButton(shadowWidget);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setMinimumSize(QSize(42, 42));
        btnClose->setMaximumSize(QSize(42, 42));
        btnClose->setStyleSheet(QLatin1String("QPushButton{\n"
"	border:none;\n"
"	background-color: rgb(170, 255, 255);\n"
"	border-top-right-radius:5px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(135, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(85, 255, 255);\n"
"}"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout_2->addLayout(horizontalLayout);

        frame = new QFrame(shadowWidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        btnFile = new QPushButton(frame);
        btnFile->setObjectName(QStringLiteral("btnFile"));

        horizontalLayout_2->addWidget(btnFile);


        verticalLayout->addLayout(horizontalLayout_2);

        progressBar = new QProgressBar(frame);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        listWidgetMd5 = new QListWidget(frame);
        new QListWidgetItem(listWidgetMd5);
        listWidgetMd5->setObjectName(QStringLiteral("listWidgetMd5"));

        horizontalLayout_3->addWidget(listWidgetMd5);

        listWidgetDumplates = new QListWidget(frame);
        listWidgetDumplates->setObjectName(QStringLiteral("listWidgetDumplates"));

        horizontalLayout_3->addWidget(listWidgetDumplates);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(frame);


        vlMain->addWidget(shadowWidget);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "layout learnning", 0));
        btnMin->setText(QString());
        btnMax->setText(QString());
        btnClose->setText(QString());
        btnFile->setText(QApplication::translate("Widget", "getFiles", 0));
        label_2->setText(QApplication::translate("Widget", "Md5", 0));
        label_3->setText(QApplication::translate("Widget", "\347\233\270\345\220\214\346\226\207\344\273\266", 0));

        const bool __sortingEnabled = listWidgetMd5->isSortingEnabled();
        listWidgetMd5->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidgetMd5->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Widget", "\346\226\260\345\273\272\351\241\271\347\233\256", 0));
        listWidgetMd5->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
