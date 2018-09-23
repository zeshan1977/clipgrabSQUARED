/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_9;
    QTabWidget *mainTab;
    QWidget *tab_3;
    QGridLayout *gridLayout_3;
    QLineEdit *searchLineEdit;
    QLabel *searchInfoBox;
    QWebView *searchWebView;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QPushButton *downloadStart;
    QComboBox *downloadComboQuality;
    QLabel *label_3;
    QLineEdit *downloadLineEdit;
    QLabel *downloadInfoBox;
    QComboBox *downloadComboFormat;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QPushButton *downloadCancel;
    QPushButton *downloadOpen;
    QTreeWidget *downloadTree;
    QPushButton *downloadPause;
    QWidget *tab_4;
    QGridLayout *gridLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab_6;
    QGridLayout *gridLayout_7;
    QLabel *settingsGeneralInfoBox;
    QTabWidget *generalSettingsTabWidget;
    QWidget *tabWidgetPage1;
    QGridLayout *gridLayout_11;
    QCheckBox *settingsSaveLastPath;
    QLineEdit *settingsSavedPath;
    QLabel *label_7;
    QPushButton *settingsBrowseTargetPath;
    QCheckBox *settingsNeverAskForPath;
    QSpacerItem *verticalSpacer_5;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLabel *label_25;
    QCheckBox *settingsUseMetadata;
    QSpacerItem *verticalSpacer_11;
    QWidget *tabWidgetPage2;
    QGridLayout *gridLayout_12;
    QLabel *label_15;
    QRadioButton *settingsRadioClipboardAlways;
    QRadioButton *settingsRadioClipboardNever;
    QRadioButton *settingsRadioClipboardAsk;
    QSpacerItem *verticalSpacer_6;
    QWidget *tabWidgetPage3;
    QGridLayout *gridLayout_13;
    QRadioButton *settingsRadioNotificationsAlways;
    QRadioButton *settingsRadioNotificationsFinish;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_16;
    QRadioButton *settingsRadioNotificationsNever;
    QWidget *widget;
    QGridLayout *gridLayout_15;
    QCheckBox *settingsUseProxy;
    QGroupBox *settingsProxyGroup;
    QGridLayout *gridLayout_16;
    QLineEdit *settingsProxyHost;
    QLabel *label_17;
    QLabel *label_18;
    QSpinBox *settingsProxyPort;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_21;
    QComboBox *settingsProxyType;
    QSpacerItem *verticalSpacer_8;
    QGroupBox *settingsProxyAuthenticationGroup;
    QFormLayout *formLayout;
    QLabel *label_19;
    QLineEdit *settingsProxyUsername;
    QLineEdit *settingsProxyPassword;
    QLabel *label_20;
    QCheckBox *settingsProxyAuthenticationRequired;
    QWidget *tabWidgetPage4;
    QGridLayout *gridLayout_14;
    QCheckBox *settingsMinimizeToTray;
    QCheckBox *settingsUseWebM;
    QCheckBox *settingsIgnoreSSLErrors;
    QCheckBox *settingsRemoveFinishedDownloads;
    QSpacerItem *verticalSpacer;
    QCheckBox *settingsRememberLogins;
    QCheckBox *settingsRememberVideoQuality;
    QWidget *tab_8;
    QGridLayout *gridLayout_18;
    QLabel *settingsLanguageInfoBox;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_10;
    QComboBox *settingsLanguage;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_5;
    QGridLayout *gridLayout_8;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_9;
    QLabel *label_10;
    QComboBox *comboBox_2;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_11;
    QCheckBox *checkBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_10;
    QComboBox *comboBox_3;
    QLabel *label_12;
    QLabel *label_14;
    QSpinBox *spinBox_3;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_13;
    QSpinBox *spinBox_2;
    QCheckBox *checkBox_2;
    QWidget *tab_7;
    QGridLayout *gridLayout_17;
    QLabel *labelSupport;
    QPushButton *buttonDonate;
    QLabel *labelTranslation;
    QLabel *labelThanks;
    QSpacerItem *verticalSpacer_13;
    QLabel *label;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(860, 520);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowClass->setWindowIcon(icon);
        MainWindowClass->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"font-family: \"Segoe UI\"\n"
"}\n"
"\n"
"#label a\n"
"{\n"
"	color: #555;\n"
"	text-decoration: none;\n"
"}\n"
"\n"
"#label_4\n"
"{\n"
"padding-top:25px;\n"
"}\n"
"\n"
"#downloadInfoBox, #settingsGeneralInfoBox, #settingsLanguageInfoBox, #aboutInfoBox, #searchInfoBox{\n"
"\n"
"padding: 8px;\n"
"color: #000;\n"
"margin-bottom: 4px;\n"
"background: #00B4DE;\n"
"}\n"
"\n"
"#aboutLabel\n"
"{\n"
"background-color: #fff;\n"
"color:#025b71;\n"
"padding: 4px;\n"
"}\n"
"\n"
" QToolBox::tab {\n"
"     background: #fbfbfc;\n"
"     border-radius: 1px;\n"
"     color: #1a1a1a;\n"
" }\n"
"\n"
" QToolBox::tab:selected {\n"
"     font-weight: bold;\n"
" }\n"
"\n"
"QToolBox::tab:hover\n"
"{\n"
"	background: #e8e8e8;\n"
"}\n"
"\n"
"#scrollAreaWidgetContents\n"
"{\n"
"background:#ffffff\n"
"}\n"
"\n"
"QToolTip\n"
"{\n"
"  font-size: 14px;\n"
"  border-color:#00b2de;\n"
"  border-width: 3px;\n"
"  border-style: solid;\n"
"  border-radius: 4px;\n"
"  background: #ffffff;\n"
"  padding: 8px;\n"
"  min-width: 160px;\n"
""
                        "  min-height: 50px;\n"
"  color:#444444;\n"
"}\n"
"\n"
"#labelTranslation, #labelThanks\n"
"{\n"
"	color: #555;\n"
"}\n"
"\n"
"#buttonDonate\n"
"{\n"
"padding: 10px;\n"
"}"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(0, 100));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/logo.png")));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        verticalSpacer_9 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_9);

        mainTab = new QTabWidget(centralWidget);
        mainTab->setObjectName(QString::fromUtf8("mainTab"));
        mainTab->setFocusPolicy(Qt::TabFocus);
        mainTab->setLocale(QLocale(QLocale::German, QLocale::Germany));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_3 = new QGridLayout(tab_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        searchLineEdit = new QLineEdit(tab_3);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));

        gridLayout_3->addWidget(searchLineEdit, 1, 0, 1, 1);

        searchInfoBox = new QLabel(tab_3);
        searchInfoBox->setObjectName(QString::fromUtf8("searchInfoBox"));
        searchInfoBox->setMinimumSize(QSize(0, 48));

        gridLayout_3->addWidget(searchInfoBox, 0, 0, 1, 1);

        searchWebView = new QWebView(tab_3);
        searchWebView->setObjectName(QString::fromUtf8("searchWebView"));
        searchWebView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout_3->addWidget(searchWebView, 2, 0, 1, 1);

        mainTab->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        downloadStart = new QPushButton(tab_2);
        downloadStart->setObjectName(QString::fromUtf8("downloadStart"));
        downloadStart->setEnabled(false);

        gridLayout_4->addWidget(downloadStart, 4, 4, 1, 1);

        downloadComboQuality = new QComboBox(tab_2);
        downloadComboQuality->setObjectName(QString::fromUtf8("downloadComboQuality"));
        downloadComboQuality->setEnabled(false);
        downloadComboQuality->setMaximumSize(QSize(130, 16777215));

        gridLayout_4->addWidget(downloadComboQuality, 4, 3, 1, 1);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_3, 4, 2, 1, 1);

        downloadLineEdit = new QLineEdit(tab_2);
        downloadLineEdit->setObjectName(QString::fromUtf8("downloadLineEdit"));

        gridLayout_4->addWidget(downloadLineEdit, 2, 0, 1, 5);

        downloadInfoBox = new QLabel(tab_2);
        downloadInfoBox->setObjectName(QString::fromUtf8("downloadInfoBox"));
        downloadInfoBox->setMinimumSize(QSize(0, 48));
        downloadInfoBox->setTextFormat(Qt::RichText);
        downloadInfoBox->setWordWrap(true);

        gridLayout_4->addWidget(downloadInfoBox, 0, 0, 1, 5);

        downloadComboFormat = new QComboBox(tab_2);
        downloadComboFormat->setObjectName(QString::fromUtf8("downloadComboFormat"));
        downloadComboFormat->setEnabled(false);
        downloadComboFormat->setMaximumSize(QSize(180, 16777215));

        gridLayout_4->addWidget(downloadComboFormat, 4, 1, 1, 1);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(false);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_2, 4, 0, 1, 1);

        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setFrameShadow(QFrame::Sunken);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 816, 152));
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        label_5->setFont(font);

        gridLayout_5->addWidget(label_5, 1, 0, 1, 3);

        downloadCancel = new QPushButton(scrollAreaWidgetContents);
        downloadCancel->setObjectName(QString::fromUtf8("downloadCancel"));
        downloadCancel->setEnabled(false);

        gridLayout_5->addWidget(downloadCancel, 3, 1, 1, 1);

        downloadOpen = new QPushButton(scrollAreaWidgetContents);
        downloadOpen->setObjectName(QString::fromUtf8("downloadOpen"));
        downloadOpen->setEnabled(false);

        gridLayout_5->addWidget(downloadOpen, 3, 2, 1, 1);

        downloadTree = new QTreeWidget(scrollAreaWidgetContents);
        downloadTree->setObjectName(QString::fromUtf8("downloadTree"));
        downloadTree->setContextMenuPolicy(Qt::CustomContextMenu);
        downloadTree->setAlternatingRowColors(true);
        downloadTree->setRootIsDecorated(false);
        downloadTree->setColumnCount(4);

        gridLayout_5->addWidget(downloadTree, 2, 0, 1, 3);

        downloadPause = new QPushButton(scrollAreaWidgetContents);
        downloadPause->setObjectName(QString::fromUtf8("downloadPause"));
        downloadPause->setEnabled(false);

        gridLayout_5->addWidget(downloadPause, 3, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 5, 0, 1, 5);

        mainTab->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_6 = new QGridLayout(tab_4);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        tabWidget = new QTabWidget(tab_4);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::West);
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayout_7 = new QGridLayout(tab_6);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        settingsGeneralInfoBox = new QLabel(tab_6);
        settingsGeneralInfoBox->setObjectName(QString::fromUtf8("settingsGeneralInfoBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(48);
        sizePolicy3.setHeightForWidth(settingsGeneralInfoBox->sizePolicy().hasHeightForWidth());
        settingsGeneralInfoBox->setSizePolicy(sizePolicy3);
        settingsGeneralInfoBox->setMinimumSize(QSize(0, 48));
        settingsGeneralInfoBox->setMaximumSize(QSize(16777215, 48));

        gridLayout_7->addWidget(settingsGeneralInfoBox, 0, 0, 1, 2);

        generalSettingsTabWidget = new QTabWidget(tab_6);
        generalSettingsTabWidget->setObjectName(QString::fromUtf8("generalSettingsTabWidget"));
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QString::fromUtf8("tabWidgetPage1"));
        gridLayout_11 = new QGridLayout(tabWidgetPage1);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        settingsSaveLastPath = new QCheckBox(tabWidgetPage1);
        settingsSaveLastPath->setObjectName(QString::fromUtf8("settingsSaveLastPath"));

        gridLayout_11->addWidget(settingsSaveLastPath, 5, 0, 1, 1);

        settingsSavedPath = new QLineEdit(tabWidgetPage1);
        settingsSavedPath->setObjectName(QString::fromUtf8("settingsSavedPath"));

        gridLayout_11->addWidget(settingsSavedPath, 4, 0, 1, 1);

        label_7 = new QLabel(tabWidgetPage1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_11->addWidget(label_7, 3, 0, 1, 1);

        settingsBrowseTargetPath = new QPushButton(tabWidgetPage1);
        settingsBrowseTargetPath->setObjectName(QString::fromUtf8("settingsBrowseTargetPath"));

        gridLayout_11->addWidget(settingsBrowseTargetPath, 4, 1, 1, 1);

        settingsNeverAskForPath = new QCheckBox(tabWidgetPage1);
        settingsNeverAskForPath->setObjectName(QString::fromUtf8("settingsNeverAskForPath"));

        gridLayout_11->addWidget(settingsNeverAskForPath, 6, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_5, 7, 0, 1, 1);

        generalSettingsTabWidget->addTab(tabWidgetPage1, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_25 = new QLabel(tab);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_2->addWidget(label_25, 0, 0, 1, 1);

        settingsUseMetadata = new QCheckBox(tab);
        settingsUseMetadata->setObjectName(QString::fromUtf8("settingsUseMetadata"));

        gridLayout_2->addWidget(settingsUseMetadata, 1, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_11, 2, 0, 1, 1);

        generalSettingsTabWidget->addTab(tab, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName(QString::fromUtf8("tabWidgetPage2"));
        gridLayout_12 = new QGridLayout(tabWidgetPage2);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_15 = new QLabel(tabWidgetPage2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_12->addWidget(label_15, 0, 0, 1, 3);

        settingsRadioClipboardAlways = new QRadioButton(tabWidgetPage2);
        settingsRadioClipboardAlways->setObjectName(QString::fromUtf8("settingsRadioClipboardAlways"));

        gridLayout_12->addWidget(settingsRadioClipboardAlways, 1, 0, 1, 1);

        settingsRadioClipboardNever = new QRadioButton(tabWidgetPage2);
        settingsRadioClipboardNever->setObjectName(QString::fromUtf8("settingsRadioClipboardNever"));

        gridLayout_12->addWidget(settingsRadioClipboardNever, 1, 1, 1, 1);

        settingsRadioClipboardAsk = new QRadioButton(tabWidgetPage2);
        settingsRadioClipboardAsk->setObjectName(QString::fromUtf8("settingsRadioClipboardAsk"));

        gridLayout_12->addWidget(settingsRadioClipboardAsk, 1, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_6, 2, 0, 1, 1);

        generalSettingsTabWidget->addTab(tabWidgetPage2, QString());
        tabWidgetPage3 = new QWidget();
        tabWidgetPage3->setObjectName(QString::fromUtf8("tabWidgetPage3"));
        gridLayout_13 = new QGridLayout(tabWidgetPage3);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        settingsRadioNotificationsAlways = new QRadioButton(tabWidgetPage3);
        settingsRadioNotificationsAlways->setObjectName(QString::fromUtf8("settingsRadioNotificationsAlways"));

        gridLayout_13->addWidget(settingsRadioNotificationsAlways, 1, 0, 2, 1);

        settingsRadioNotificationsFinish = new QRadioButton(tabWidgetPage3);
        settingsRadioNotificationsFinish->setObjectName(QString::fromUtf8("settingsRadioNotificationsFinish"));

        gridLayout_13->addWidget(settingsRadioNotificationsFinish, 2, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_7, 3, 0, 1, 1);

        label_16 = new QLabel(tabWidgetPage3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_13->addWidget(label_16, 0, 0, 1, 2);

        settingsRadioNotificationsNever = new QRadioButton(tabWidgetPage3);
        settingsRadioNotificationsNever->setObjectName(QString::fromUtf8("settingsRadioNotificationsNever"));

        gridLayout_13->addWidget(settingsRadioNotificationsNever, 2, 2, 1, 1);

        generalSettingsTabWidget->addTab(tabWidgetPage3, QString());
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_15 = new QGridLayout(widget);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        settingsUseProxy = new QCheckBox(widget);
        settingsUseProxy->setObjectName(QString::fromUtf8("settingsUseProxy"));

        gridLayout_15->addWidget(settingsUseProxy, 0, 0, 1, 1);

        settingsProxyGroup = new QGroupBox(widget);
        settingsProxyGroup->setObjectName(QString::fromUtf8("settingsProxyGroup"));
        settingsProxyGroup->setEnabled(false);
        gridLayout_16 = new QGridLayout(settingsProxyGroup);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        settingsProxyHost = new QLineEdit(settingsProxyGroup);
        settingsProxyHost->setObjectName(QString::fromUtf8("settingsProxyHost"));

        gridLayout_16->addWidget(settingsProxyHost, 0, 1, 1, 2);

        label_17 = new QLabel(settingsProxyGroup);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_16->addWidget(label_17, 0, 0, 1, 1);

        label_18 = new QLabel(settingsProxyGroup);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_16->addWidget(label_18, 1, 0, 1, 1);

        settingsProxyPort = new QSpinBox(settingsProxyGroup);
        settingsProxyPort->setObjectName(QString::fromUtf8("settingsProxyPort"));
        settingsProxyPort->setMaximum(99999);

        gridLayout_16->addWidget(settingsProxyPort, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        label_21 = new QLabel(settingsProxyGroup);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_16->addWidget(label_21, 2, 0, 1, 1);

        settingsProxyType = new QComboBox(settingsProxyGroup);
        settingsProxyType->setObjectName(QString::fromUtf8("settingsProxyType"));

        gridLayout_16->addWidget(settingsProxyType, 2, 1, 1, 2);


        gridLayout_15->addWidget(settingsProxyGroup, 1, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_15->addItem(verticalSpacer_8, 3, 0, 1, 1);

        settingsProxyAuthenticationGroup = new QGroupBox(widget);
        settingsProxyAuthenticationGroup->setObjectName(QString::fromUtf8("settingsProxyAuthenticationGroup"));
        settingsProxyAuthenticationGroup->setEnabled(false);
        formLayout = new QFormLayout(settingsProxyAuthenticationGroup);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_19 = new QLabel(settingsProxyAuthenticationGroup);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_19);

        settingsProxyUsername = new QLineEdit(settingsProxyAuthenticationGroup);
        settingsProxyUsername->setObjectName(QString::fromUtf8("settingsProxyUsername"));

        formLayout->setWidget(0, QFormLayout::FieldRole, settingsProxyUsername);

        settingsProxyPassword = new QLineEdit(settingsProxyAuthenticationGroup);
        settingsProxyPassword->setObjectName(QString::fromUtf8("settingsProxyPassword"));
        settingsProxyPassword->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout->setWidget(1, QFormLayout::FieldRole, settingsProxyPassword);

        label_20 = new QLabel(settingsProxyAuthenticationGroup);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_20);


        gridLayout_15->addWidget(settingsProxyAuthenticationGroup, 1, 1, 1, 1);

        settingsProxyAuthenticationRequired = new QCheckBox(widget);
        settingsProxyAuthenticationRequired->setObjectName(QString::fromUtf8("settingsProxyAuthenticationRequired"));
        settingsProxyAuthenticationRequired->setEnabled(false);

        gridLayout_15->addWidget(settingsProxyAuthenticationRequired, 0, 1, 1, 1);

        generalSettingsTabWidget->addTab(widget, QString());
        tabWidgetPage4 = new QWidget();
        tabWidgetPage4->setObjectName(QString::fromUtf8("tabWidgetPage4"));
        gridLayout_14 = new QGridLayout(tabWidgetPage4);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        settingsMinimizeToTray = new QCheckBox(tabWidgetPage4);
        settingsMinimizeToTray->setObjectName(QString::fromUtf8("settingsMinimizeToTray"));

        gridLayout_14->addWidget(settingsMinimizeToTray, 6, 0, 1, 1);

        settingsUseWebM = new QCheckBox(tabWidgetPage4);
        settingsUseWebM->setObjectName(QString::fromUtf8("settingsUseWebM"));

        gridLayout_14->addWidget(settingsUseWebM, 7, 0, 1, 1);

        settingsIgnoreSSLErrors = new QCheckBox(tabWidgetPage4);
        settingsIgnoreSSLErrors->setObjectName(QString::fromUtf8("settingsIgnoreSSLErrors"));

        gridLayout_14->addWidget(settingsIgnoreSSLErrors, 8, 0, 1, 1);

        settingsRemoveFinishedDownloads = new QCheckBox(tabWidgetPage4);
        settingsRemoveFinishedDownloads->setObjectName(QString::fromUtf8("settingsRemoveFinishedDownloads"));

        gridLayout_14->addWidget(settingsRemoveFinishedDownloads, 5, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_14->addItem(verticalSpacer, 9, 1, 1, 1);

        settingsRememberLogins = new QCheckBox(tabWidgetPage4);
        settingsRememberLogins->setObjectName(QString::fromUtf8("settingsRememberLogins"));

        gridLayout_14->addWidget(settingsRememberLogins, 3, 0, 1, 1);

        settingsRememberVideoQuality = new QCheckBox(tabWidgetPage4);
        settingsRememberVideoQuality->setObjectName(QString::fromUtf8("settingsRememberVideoQuality"));

        gridLayout_14->addWidget(settingsRememberVideoQuality, 4, 0, 1, 1);

        generalSettingsTabWidget->addTab(tabWidgetPage4, QString());

        gridLayout_7->addWidget(generalSettingsTabWidget, 3, 0, 1, 2);

        tabWidget->addTab(tab_6, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        gridLayout_18 = new QGridLayout(tab_8);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        settingsLanguageInfoBox = new QLabel(tab_8);
        settingsLanguageInfoBox->setObjectName(QString::fromUtf8("settingsLanguageInfoBox"));
        sizePolicy3.setHeightForWidth(settingsLanguageInfoBox->sizePolicy().hasHeightForWidth());
        settingsLanguageInfoBox->setSizePolicy(sizePolicy3);
        settingsLanguageInfoBox->setMinimumSize(QSize(0, 48));
        settingsLanguageInfoBox->setMaximumSize(QSize(16777215, 48));

        gridLayout_18->addWidget(settingsLanguageInfoBox, 0, 0, 1, 2);

        label_6 = new QLabel(tab_8);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_18->addWidget(label_6, 1, 0, 1, 2);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_18->addItem(verticalSpacer_10, 4, 0, 1, 1);

        settingsLanguage = new QComboBox(tab_8);
        settingsLanguage->setObjectName(QString::fromUtf8("settingsLanguage"));

        gridLayout_18->addWidget(settingsLanguage, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_18->addItem(horizontalSpacer, 2, 1, 1, 1);

        tabWidget->addTab(tab_8, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_8 = new QGridLayout(tab_5);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_8 = new QLabel(tab_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 48));
        label_8->setMaximumSize(QSize(16777215, 48));
        label_8->setStyleSheet(QString::fromUtf8("background-color:#00b2de;\n"
"color:#ffffff;\n"
"padding:4px;"));

        gridLayout_8->addWidget(label_8, 0, 0, 1, 5);

        label_9 = new QLabel(tab_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_8->addWidget(label_9, 1, 0, 1, 2);

        comboBox = new QComboBox(tab_5);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_8->addWidget(comboBox, 1, 2, 1, 1);

        pushButton = new QPushButton(tab_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_8->addWidget(pushButton, 1, 3, 1, 1);

        pushButton_2 = new QPushButton(tab_5);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_8->addWidget(pushButton_2, 1, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_2, 4, 1, 1, 1);

        groupBox = new QGroupBox(tab_5);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_9 = new QGridLayout(groupBox);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy4);

        gridLayout_9->addWidget(label_10, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_9->addWidget(comboBox_2, 0, 1, 1, 1);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout_9->addWidget(spinBox, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_3, 3, 0, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_9->addWidget(label_11, 1, 0, 1, 1);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_9->addWidget(checkBox, 2, 0, 1, 1);


        gridLayout_8->addWidget(groupBox, 2, 4, 1, 1);

        groupBox_2 = new QGroupBox(tab_5);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_10 = new QGridLayout(groupBox_2);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        comboBox_3 = new QComboBox(groupBox_2);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout_10->addWidget(comboBox_3, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_10->addWidget(label_12, 0, 0, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy5);

        gridLayout_10->addWidget(label_14, 3, 0, 1, 1);

        spinBox_3 = new QSpinBox(groupBox_2);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));

        gridLayout_10->addWidget(spinBox_3, 3, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_4, 3, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_4, 6, 0, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_10->addWidget(label_13, 0, 3, 1, 1);

        spinBox_2 = new QSpinBox(groupBox_2);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        gridLayout_10->addWidget(spinBox_2, 0, 4, 1, 1);

        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout_10->addWidget(checkBox_2, 3, 3, 1, 1);


        gridLayout_8->addWidget(groupBox_2, 2, 0, 1, 4);

        tabWidget->addTab(tab_5, QString());

        gridLayout_6->addWidget(tabWidget, 0, 0, 1, 1);

        mainTab->addTab(tab_4, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        gridLayout_17 = new QGridLayout(tab_7);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        labelSupport = new QLabel(tab_7);
        labelSupport->setObjectName(QString::fromUtf8("labelSupport"));
        labelSupport->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelSupport->setWordWrap(true);

        gridLayout_17->addWidget(labelSupport, 0, 0, 1, 1);

        buttonDonate = new QPushButton(tab_7);
        buttonDonate->setObjectName(QString::fromUtf8("buttonDonate"));
        sizePolicy5.setHeightForWidth(buttonDonate->sizePolicy().hasHeightForWidth());
        buttonDonate->setSizePolicy(sizePolicy5);
        buttonDonate->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/paypal-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonDonate->setIcon(icon1);
        buttonDonate->setIconSize(QSize(122, 47));

        gridLayout_17->addWidget(buttonDonate, 0, 1, 1, 1);

        labelTranslation = new QLabel(tab_7);
        labelTranslation->setObjectName(QString::fromUtf8("labelTranslation"));
        sizePolicy4.setHeightForWidth(labelTranslation->sizePolicy().hasHeightForWidth());
        labelTranslation->setSizePolicy(sizePolicy4);
        labelTranslation->setTextFormat(Qt::RichText);
        labelTranslation->setWordWrap(true);
        labelTranslation->setOpenExternalLinks(true);

        gridLayout_17->addWidget(labelTranslation, 1, 0, 1, 2);

        labelThanks = new QLabel(tab_7);
        labelThanks->setObjectName(QString::fromUtf8("labelThanks"));
        labelThanks->setTextFormat(Qt::RichText);
        labelThanks->setWordWrap(true);
        labelThanks->setOpenExternalLinks(true);

        gridLayout_17->addWidget(labelThanks, 2, 0, 1, 2);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_17->addItem(verticalSpacer_13, 3, 0, 1, 2);

        mainTab->addTab(tab_7, QString());

        verticalLayout->addWidget(mainTab);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setText(QString::fromUtf8("<style>a{color:#444;text-decoration:none}a:hover{color:#222;text-decoration:underline}</style>\n"
"<a href=\"https://clipgrab.org\">%version</a> | <a href=\"https://clipgrab.org\">www.clipgrab.org</a>"));
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(4);

        verticalLayout->addWidget(label);

        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 860, 21));
        MainWindowClass->setMenuBar(menuBar);
        QWidget::setTabOrder(downloadLineEdit, downloadComboFormat);
        QWidget::setTabOrder(downloadComboFormat, downloadComboQuality);
        QWidget::setTabOrder(downloadComboQuality, downloadStart);
        QWidget::setTabOrder(downloadStart, downloadTree);
        QWidget::setTabOrder(downloadTree, downloadCancel);
        QWidget::setTabOrder(downloadCancel, downloadOpen);
        QWidget::setTabOrder(downloadOpen, searchLineEdit);
        QWidget::setTabOrder(searchLineEdit, scrollArea);
        QWidget::setTabOrder(scrollArea, comboBox);
        QWidget::setTabOrder(comboBox, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, comboBox_2);
        QWidget::setTabOrder(comboBox_2, spinBox);
        QWidget::setTabOrder(spinBox, checkBox);
        QWidget::setTabOrder(checkBox, comboBox_3);
        QWidget::setTabOrder(comboBox_3, spinBox_3);
        QWidget::setTabOrder(spinBox_3, spinBox_2);
        QWidget::setTabOrder(spinBox_2, checkBox_2);

        retranslateUi(MainWindowClass);

        mainTab->setCurrentIndex(3);
        tabWidget->setCurrentIndex(0);
        generalSettingsTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "ClipGrab - Download and Convert Online Videos", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        searchLineEdit->setText(QString());
        searchInfoBox->setText(QApplication::translate("MainWindowClass", "Enter keywords in the box below in order to search videos on YouTube", 0, QApplication::UnicodeUTF8));
        mainTab->setTabText(mainTab->indexOf(tab_3), QApplication::translate("MainWindowClass", "Search", 0, QApplication::UnicodeUTF8));
        downloadStart->setText(QApplication::translate("MainWindowClass", "Grab this clip!", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindowClass", "Quality:", 0, QApplication::UnicodeUTF8));
        downloadInfoBox->setText(QApplication::translate("MainWindowClass", "Please enter the link to the video you want to download in the field below.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindowClass", "Format:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindowClass", "Current Downloads:", 0, QApplication::UnicodeUTF8));
        downloadCancel->setText(QApplication::translate("MainWindowClass", "Cancel selected download", 0, QApplication::UnicodeUTF8));
        downloadOpen->setText(QApplication::translate("MainWindowClass", "Open the target folder of the selected download", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = downloadTree->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("MainWindowClass", "Progress", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindowClass", "Format", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindowClass", "Title", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindowClass", "Portal", 0, QApplication::UnicodeUTF8));
        downloadPause->setText(QApplication::translate("MainWindowClass", "Pause selected download", 0, QApplication::UnicodeUTF8));
        mainTab->setTabText(mainTab->indexOf(tab_2), QApplication::translate("MainWindowClass", "Downloads", 0, QApplication::UnicodeUTF8));
        settingsGeneralInfoBox->setText(QApplication::translate("MainWindowClass", "Here you can adjust some general settings concerning the behaviour of ClipGrab.", 0, QApplication::UnicodeUTF8));
        settingsSaveLastPath->setText(QApplication::translate("MainWindowClass", "Always save at the last used path.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        settingsSavedPath->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("MainWindowClass", "Here you can configure where the downloaded videos are to be saved.", 0, QApplication::UnicodeUTF8));
        settingsBrowseTargetPath->setText(QApplication::translate("MainWindowClass", "Browse ...", 0, QApplication::UnicodeUTF8));
        settingsNeverAskForPath->setText(QApplication::translate("MainWindowClass", "Never ask for file name", 0, QApplication::UnicodeUTF8));
        generalSettingsTabWidget->setTabText(generalSettingsTabWidget->indexOf(tabWidgetPage1), QApplication::translate("MainWindowClass", "Target Path", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindowClass", "Here you can configure if ClipGrab is supposed to add metadata (ID3 tags) to your mp3 files.", 0, QApplication::UnicodeUTF8));
        settingsUseMetadata->setText(QApplication::translate("MainWindowClass", "Use metadata", 0, QApplication::UnicodeUTF8));
        generalSettingsTabWidget->setTabText(generalSettingsTabWidget->indexOf(tab), QApplication::translate("MainWindowClass", "Metadata", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindowClass", "Here you can configure how ClipGrab behaves when a downloadable video is discovered in your clipboard.", 0, QApplication::UnicodeUTF8));
        settingsRadioClipboardAlways->setText(QApplication::translate("MainWindowClass", "Always download", 0, QApplication::UnicodeUTF8));
        settingsRadioClipboardNever->setText(QApplication::translate("MainWindowClass", "Never download", 0, QApplication::UnicodeUTF8));
        settingsRadioClipboardAsk->setText(QApplication::translate("MainWindowClass", "Always ask", 0, QApplication::UnicodeUTF8));
        generalSettingsTabWidget->setTabText(generalSettingsTabWidget->indexOf(tabWidgetPage2), QApplication::translate("MainWindowClass", "Clipboard", 0, QApplication::UnicodeUTF8));
        settingsRadioNotificationsAlways->setText(QApplication::translate("MainWindowClass", "After each download", 0, QApplication::UnicodeUTF8));
        settingsRadioNotificationsFinish->setText(QApplication::translate("MainWindowClass", "After all downloads have been completed", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindowClass", "Here you can configure when ClipGrab is supposed to display notifications.", 0, QApplication::UnicodeUTF8));
        settingsRadioNotificationsNever->setText(QApplication::translate("MainWindowClass", "Never", 0, QApplication::UnicodeUTF8));
        generalSettingsTabWidget->setTabText(generalSettingsTabWidget->indexOf(tabWidgetPage3), QApplication::translate("MainWindowClass", "Notifications", 0, QApplication::UnicodeUTF8));
        settingsUseProxy->setText(QApplication::translate("MainWindowClass", "Use a proxy server", 0, QApplication::UnicodeUTF8));
        settingsProxyGroup->setTitle(QApplication::translate("MainWindowClass", "Proxy settings", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindowClass", "Hostname/IP:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindowClass", "Port:", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindowClass", "Proxy type:", 0, QApplication::UnicodeUTF8));
        settingsProxyType->clear();
        settingsProxyType->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "HTTP Proxy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Socks5 Proxy", 0, QApplication::UnicodeUTF8)
        );
        settingsProxyAuthenticationGroup->setTitle(QApplication::translate("MainWindowClass", "Proxy authentication", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindowClass", "Username:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindowClass", "Password:", 0, QApplication::UnicodeUTF8));
        settingsProxyAuthenticationRequired->setText(QApplication::translate("MainWindowClass", "Proxy requires authentication", 0, QApplication::UnicodeUTF8));
        generalSettingsTabWidget->setTabText(generalSettingsTabWidget->indexOf(widget), QApplication::translate("MainWindowClass", "Proxy", 0, QApplication::UnicodeUTF8));
        settingsMinimizeToTray->setText(QApplication::translate("MainWindowClass", "Minimize ClipGrab to the system tray", 0, QApplication::UnicodeUTF8));
        settingsUseWebM->setText(QApplication::translate("MainWindowClass", "Use WebM if possible", 0, QApplication::UnicodeUTF8));
        settingsIgnoreSSLErrors->setText(QApplication::translate("MainWindowClass", "Ignore SSL errors", 0, QApplication::UnicodeUTF8));
        settingsRemoveFinishedDownloads->setText(QApplication::translate("MainWindowClass", "Remove finished downloads from list", 0, QApplication::UnicodeUTF8));
        settingsRememberLogins->setText(QApplication::translate("MainWindowClass", "Remember logins", 0, QApplication::UnicodeUTF8));
        settingsRememberVideoQuality->setText(QApplication::translate("MainWindowClass", "Remember video quality", 0, QApplication::UnicodeUTF8));
        generalSettingsTabWidget->setTabText(generalSettingsTabWidget->indexOf(tabWidgetPage4), QApplication::translate("MainWindowClass", "Other", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindowClass", "General", 0, QApplication::UnicodeUTF8));
        settingsLanguageInfoBox->setText(QApplication::translate("MainWindowClass", "Here you can change the language of ClipGrab.", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindowClass", "Please select a language from the list below. You have to restart ClipGrab in order to apply you selection.", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindowClass", "Language", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindowClass", "Experts can create custom presets for the video conversion here.", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindowClass", "Format preset", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindowClass", "Add new preset", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindowClass", "Remove selected preset", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindowClass", "Audio", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindowClass", "Codec", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindowClass", "Bitrate (kb/s)", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindowClass", "Disable Audio", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindowClass", "Video", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindowClass", "Codec", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindowClass", "Frames/second", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindowClass", "Bitrate (kb/s)", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("MainWindowClass", "Disable video", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindowClass", "Conversion", 0, QApplication::UnicodeUTF8));
        mainTab->setTabText(mainTab->indexOf(tab_4), QApplication::translate("MainWindowClass", "Settings", 0, QApplication::UnicodeUTF8));
        labelSupport->setText(QApplication::translate("MainWindowClass", "<h2>Support ClipGrab!</h2>\n"
"<p>Only with your support, ClipGrab can remain free software!<br>So if you like ClipGrab and also want to help ensuring its further development, please consider making a donation.</p>", 0, QApplication::UnicodeUTF8));
        labelTranslation->setText(QApplication::translate("MainWindowClass", "<h2>Translation</h2>\n"
"ClipGrab is already available in many languages. If ClipGrab has not been translated into your language yet and if you want to contribute a translation, please check <a href=\"http://clipgrab.de/translate\">http://clipgrab.de/translate</a> for further information.", 0, QApplication::UnicodeUTF8));
        labelThanks->setText(QApplication::translate("MainWindowClass", "<h2>Thanks</h2>\n"
"ClipGrab relies on the work of the Qt project and the ffmpeg team.<br>\n"
"Visit <a href=\"https://www.qt.io\">qt.io</a> and <a href=\"https://ffmpeg.org\">ffmpeg.org</a> for further information.", 0, QApplication::UnicodeUTF8));
        mainTab->setTabText(mainTab->indexOf(tab_7), QApplication::translate("MainWindowClass", "About", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
