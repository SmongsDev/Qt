/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbConnect;
    QPushButton *pbDisconnect;
    QPushButton *pbClear;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *leHost;
    QLineEdit *lePort;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *rbTCP;
    QRadioButton *rbSSL;
    QPlainTextEdit *pteMessage;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *pteSend;
    QPushButton *pbSend;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(801, 524);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pbConnect = new QPushButton(Widget);
        pbConnect->setObjectName("pbConnect");

        horizontalLayout->addWidget(pbConnect);

        pbDisconnect = new QPushButton(Widget);
        pbDisconnect->setObjectName("pbDisconnect");

        horizontalLayout->addWidget(pbDisconnect);

        pbClear = new QPushButton(Widget);
        pbClear->setObjectName("pbClear");

        horizontalLayout->addWidget(pbClear);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        leHost = new QLineEdit(Widget);
        leHost->setObjectName("leHost");

        horizontalLayout_2->addWidget(leHost);

        lePort = new QLineEdit(Widget);
        lePort->setObjectName("lePort");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lePort->sizePolicy().hasHeightForWidth());
        lePort->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lePort);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        rbTCP = new QRadioButton(Widget);
        rbTCP->setObjectName("rbTCP");

        horizontalLayout_4->addWidget(rbTCP);

        rbSSL = new QRadioButton(Widget);
        rbSSL->setObjectName("rbSSL");

        horizontalLayout_4->addWidget(rbSSL);


        verticalLayout->addLayout(horizontalLayout_4);

        pteMessage = new QPlainTextEdit(Widget);
        pteMessage->setObjectName("pteMessage");

        verticalLayout->addWidget(pteMessage);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pteSend = new QPlainTextEdit(Widget);
        pteSend->setObjectName("pteSend");

        horizontalLayout_3->addWidget(pteSend);

        pbSend = new QPushButton(Widget);
        pbSend->setObjectName("pbSend");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbSend->sizePolicy().hasHeightForWidth());
        pbSend->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(pbSend);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pbConnect->setText(QCoreApplication::translate("Widget", "Connect", nullptr));
        pbDisconnect->setText(QCoreApplication::translate("Widget", "Disconnect", nullptr));
        pbClear->setText(QCoreApplication::translate("Widget", "Clear", nullptr));
        leHost->setText(QCoreApplication::translate("Widget", "www.naver.com", nullptr));
        lePort->setText(QCoreApplication::translate("Widget", "80", nullptr));
        rbTCP->setText(QCoreApplication::translate("Widget", "TCP", nullptr));
        rbSSL->setText(QCoreApplication::translate("Widget", "SSL", nullptr));
        pteSend->setPlainText(QCoreApplication::translate("Widget", "GET / HTTP/1.1\n"
"Host: www.naver.com\n"
"\n"
"", nullptr));
        pbSend->setText(QCoreApplication::translate("Widget", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
