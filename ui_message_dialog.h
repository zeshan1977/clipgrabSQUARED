/********************************************************************************
** Form generated from reading UI file 'message_dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGE_DIALOG_H
#define UI_MESSAGE_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_messageDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *buttonClose;
    QSpacerItem *horizontalSpacer;
    QWebView *webView;

    void setupUi(QDialog *messageDialog)
    {
        if (messageDialog->objectName().isEmpty())
            messageDialog->setObjectName(QString::fromUtf8("messageDialog"));
        messageDialog->resize(600, 450);
        gridLayout = new QGridLayout(messageDialog);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(20, 20, 20, 20);
        buttonClose = new QPushButton(messageDialog);
        buttonClose->setObjectName(QString::fromUtf8("buttonClose"));
        buttonClose->setAutoDefault(false);

        gridLayout->addWidget(buttonClose, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        webView = new QWebView(messageDialog);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setContextMenuPolicy(Qt::NoContextMenu);
        webView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout->addWidget(webView, 0, 0, 1, 2);

        QWidget::setTabOrder(webView, buttonClose);

        retranslateUi(messageDialog);
        QObject::connect(buttonClose, SIGNAL(clicked()), messageDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(messageDialog);
    } // setupUi

    void retranslateUi(QDialog *messageDialog)
    {
        messageDialog->setWindowTitle(QApplication::translate("messageDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        buttonClose->setText(QApplication::translate("messageDialog", "Close this message", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class messageDialog: public Ui_messageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGE_DIALOG_H
