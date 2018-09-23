/********************************************************************************
** Form generated from reading UI file 'update_message.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_MESSAGE_H
#define UI_UPDATE_MESSAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_UpdateMessage
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *labelInfoText;
    QLabel *label;
    QWidget *widget_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QPushButton *buttonSkip;
    QPushButton *buttonConfirm;
    QWebView *webView;
    QPushButton *buttonLater;
    QProgressBar *progressBar;
    QLabel *labelDownloadProgress;

    void setupUi(QDialog *UpdateMessage)
    {
        if (UpdateMessage->objectName().isEmpty())
            UpdateMessage->setObjectName(QString::fromUtf8("UpdateMessage"));
        UpdateMessage->resize(600, 450);
        UpdateMessage->setModal(true);
        gridLayout = new QGridLayout(UpdateMessage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(20, 20, 20, 20);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 7, 2, 1, 1);

        widget = new QWidget(UpdateMessage);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        labelInfoText = new QLabel(widget);
        labelInfoText->setObjectName(QString::fromUtf8("labelInfoText"));
        labelInfoText->setWordWrap(true);

        gridLayout_2->addWidget(labelInfoText, 1, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color:#00b2de;\n"
"font-size: 18px;"));

        gridLayout_2->addWidget(label, 0, 2, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(64, 64));
        formLayout = new QFormLayout(widget_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(0);
        formLayout->setVerticalSpacing(0);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(64, 64));
        label_2->setMaximumSize(QSize(32, 32));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/icon.png")));
        label_2->setScaledContents(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);


        gridLayout_2->addWidget(widget_2, 0, 0, 2, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 2, 5);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 2, 2, 1, 1);

        buttonSkip = new QPushButton(UpdateMessage);
        buttonSkip->setObjectName(QString::fromUtf8("buttonSkip"));
        buttonSkip->setAutoDefault(false);

        gridLayout->addWidget(buttonSkip, 7, 0, 1, 1);

        buttonConfirm = new QPushButton(UpdateMessage);
        buttonConfirm->setObjectName(QString::fromUtf8("buttonConfirm"));
        buttonConfirm->setDefault(true);

        gridLayout->addWidget(buttonConfirm, 7, 4, 1, 1);

        webView = new QWebView(UpdateMessage);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout->addWidget(webView, 4, 0, 1, 5);

        buttonLater = new QPushButton(UpdateMessage);
        buttonLater->setObjectName(QString::fromUtf8("buttonLater"));
        buttonLater->setAutoDefault(false);

        gridLayout->addWidget(buttonLater, 7, 3, 1, 1);

        progressBar = new QProgressBar(UpdateMessage);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 6, 0, 1, 5);

        labelDownloadProgress = new QLabel(UpdateMessage);
        labelDownloadProgress->setObjectName(QString::fromUtf8("labelDownloadProgress"));

        gridLayout->addWidget(labelDownloadProgress, 5, 0, 1, 5);

        QWidget::setTabOrder(buttonConfirm, buttonLater);
        QWidget::setTabOrder(buttonLater, buttonSkip);
        QWidget::setTabOrder(buttonSkip, webView);

        retranslateUi(UpdateMessage);
        QObject::connect(buttonLater, SIGNAL(clicked()), UpdateMessage, SLOT(accept()));
        QObject::connect(buttonSkip, SIGNAL(clicked()), UpdateMessage, SLOT(reject()));

        QMetaObject::connectSlotsByName(UpdateMessage);
    } // setupUi

    void retranslateUi(QDialog *UpdateMessage)
    {
        UpdateMessage->setWindowTitle(QApplication::translate("UpdateMessage", "Update for ClipGrab", 0, QApplication::UnicodeUTF8));
        labelInfoText->setText(QApplication::translate("UpdateMessage", "ClipGrab %1 is now available (you are using %2). Would you like to install the update?", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UpdateMessage", "There is an update for your version of ClipGrab!", 0, QApplication::UnicodeUTF8));
        buttonSkip->setText(QApplication::translate("UpdateMessage", "Skip this update", 0, QApplication::UnicodeUTF8));
        buttonConfirm->setText(QApplication::translate("UpdateMessage", "Download update", 0, QApplication::UnicodeUTF8));
        buttonLater->setText(QApplication::translate("UpdateMessage", "Remind me later", 0, QApplication::UnicodeUTF8));
        labelDownloadProgress->setText(QApplication::translate("UpdateMessage", "The update will begin in just a moment \342\200\246", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UpdateMessage: public Ui_UpdateMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_MESSAGE_H
