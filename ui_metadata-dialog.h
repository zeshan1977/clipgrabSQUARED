/********************************************************************************
** Form generated from reading UI file 'metadata-dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METADATA_2D_DIALOG_H
#define UI_METADATA_2D_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_MetadataDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *title;
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *artist;

    void setupUi(QDialog *MetadataDialog)
    {
        if (MetadataDialog->objectName().isEmpty())
            MetadataDialog->setObjectName(QString::fromUtf8("MetadataDialog"));
        MetadataDialog->resize(400, 149);
        gridLayout = new QGridLayout(MetadataDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(MetadataDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color:#00b2de;\n"
"color:#ffffff;\n"
"padding:4px;"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        title = new QLineEdit(MetadataDialog);
        title->setObjectName(QString::fromUtf8("title"));

        gridLayout->addWidget(title, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(MetadataDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 1, 1, 1);

        label_2 = new QLabel(MetadataDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(MetadataDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        artist = new QLineEdit(MetadataDialog);
        artist->setObjectName(QString::fromUtf8("artist"));

        gridLayout->addWidget(artist, 3, 1, 1, 1);

        QWidget::setTabOrder(title, artist);
        QWidget::setTabOrder(artist, buttonBox);

        retranslateUi(MetadataDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MetadataDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MetadataDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MetadataDialog);
    } // setupUi

    void retranslateUi(QDialog *MetadataDialog)
    {
        MetadataDialog->setWindowTitle(QApplication::translate("MetadataDialog", "ClipGrab - enter metadata", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MetadataDialog", "Please enter the metadata for your download. If you don't want to add metadata, just leave the fields empty.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MetadataDialog", "Title:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MetadataDialog", "Artist:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MetadataDialog: public Ui_MetadataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METADATA_2D_DIALOG_H
