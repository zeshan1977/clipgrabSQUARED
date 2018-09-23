/********************************************************************************
** Form generated from reading UI file 'login_dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_DIALOG_H
#define UI_LOGIN_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QWebView *loginDialogWebView;
    QSpacerItem *verticalSpacer;
    QCheckBox *rememberLogin;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(606, 600);
        LoginDialog->setMinimumSize(QSize(0, 600));
        LoginDialog->setModal(true);
        formLayout = new QFormLayout(LoginDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(10);
        formLayout->setContentsMargins(20, 20, 20, 20);
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color:#00b2de;\n"
"font-size: 18px;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label = new QLabel(LoginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        formLayout->setWidget(1, QFormLayout::SpanningRole, label);

        buttonBox = new QDialogButtonBox(LoginDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        formLayout->setWidget(8, QFormLayout::LabelRole, buttonBox);

        loginDialogWebView = new QWebView(LoginDialog);
        loginDialogWebView->setObjectName(QString::fromUtf8("loginDialogWebView"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(loginDialogWebView->sizePolicy().hasHeightForWidth());
        loginDialogWebView->setSizePolicy(sizePolicy2);
        loginDialogWebView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        formLayout->setWidget(3, QFormLayout::SpanningRole, loginDialogWebView);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(2, QFormLayout::LabelRole, verticalSpacer);

        rememberLogin = new QCheckBox(LoginDialog);
        rememberLogin->setObjectName(QString::fromUtf8("rememberLogin"));

        formLayout->setWidget(4, QFormLayout::SpanningRole, rememberLogin);


        retranslateUi(LoginDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LoginDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LoginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Confirmation or Login Required", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LoginDialog", "Confirmation or login required", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LoginDialog", "This video requires you to sign in or confirm your access before downloading it.", 0, QApplication::UnicodeUTF8));
        rememberLogin->setText(QApplication::translate("LoginDialog", "Remember login", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_DIALOG_H
