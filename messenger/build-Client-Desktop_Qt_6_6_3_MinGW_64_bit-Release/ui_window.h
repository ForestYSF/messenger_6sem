/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowClass
{
public:
    QAction *actionLog_out;
    QAction *actionAbout;
    QAction *actionAdd_contact;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *main;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QFrame *top_frame;
    QFrame *image_frame;
    QLabel *username_label;
    QLabel *status_label;
    QLabel *status_text_label;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *add_button;
    QPushButton *contact_button;
    QStackedWidget *contact_widget;
    QWidget *view_page;
    QVBoxLayout *verticalLayout_12;
    QListWidget *contacts;
    QWidget *add_page;
    QVBoxLayout *verticalLayout_17;
    QLineEdit *add_line;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_19;
    QVBoxLayout *add_layout;
    QVBoxLayout *verticalLayout_10;
    QStackedWidget *chat_windows;
    QWidget *page;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QWidget *contact_frame;
    QVBoxLayout *verticalLayout_21;
    QVBoxLayout *verticalLayout_13;
    QLabel *contact_label;
    QLabel *contact_status;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *output;
    QWidget *page_1;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_20;
    QWidget *contact_frame_2;
    QVBoxLayout *verticalLayout_29;
    QVBoxLayout *verticalLayout_28;
    QLabel *contact_label_2;
    QLabel *contact_status_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_25;
    QVBoxLayout *output_2;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_22;
    QVBoxLayout *verticalLayout_23;
    QWidget *contact_frame_3;
    QVBoxLayout *verticalLayout_33;
    QVBoxLayout *verticalLayout_32;
    QLabel *contact_label_4;
    QLabel *contact_status_4;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_7;
    QVBoxLayout *verticalLayout_26;
    QVBoxLayout *output_3;
    QWidget *page_3;
    QWidget *blank;
    QVBoxLayout *verticalLayout_27;
    QWidget *input_frame;
    QHBoxLayout *horizontalLayout_4;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_12;
    QWidget *input_frame_box;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *input;
    QPushButton *send_button;
    QPushButton *smile_button;
    QVBoxLayout *smiles;
    QFrame *frame;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *smile_button_2;
    QPushButton *smile_button_3;
    QPushButton *smile_button_4;
    QPushButton *smile_button_5;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *smile_button_6;
    QPushButton *smile_button_7;
    QPushButton *smile_button_8;
    QPushButton *smile_button_9;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_10;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_13;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_14;
    QWidget *login;
    QVBoxLayout *verticalLayout_15;
    QWidget *widget_1;
    QVBoxLayout *verticalLayout_4;
    QFrame *top_frame_2;
    QLabel *login_status_label;
    QVBoxLayout *verticalLayout_14;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QLineEdit *login_username;
    QLabel *label_6;
    QLineEdit *login_password;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *login_button;
    QPushButton *login_signup;
    QLabel *login_error;
    QSpacerItem *verticalSpacer_3;
    QWidget *signup;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QFrame *top_frame_3;
    QLabel *signup_status_label;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_3;
    QLineEdit *signup_username;
    QLabel *label_4;
    QLineEdit *signup_password;
    QLabel *label_5;
    QLineEdit *signup_confirm;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *signup_button;
    QPushButton *signup_login;
    QLabel *signup_error;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuMessenger;

    void setupUi(QMainWindow *WindowClass)
    {
        if (WindowClass->objectName().isEmpty())
            WindowClass->setObjectName("WindowClass");
        WindowClass->setEnabled(true);
        WindowClass->resize(575, 544);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WindowClass->sizePolicy().hasHeightForWidth());
        WindowClass->setSizePolicy(sizePolicy);
        WindowClass->setMinimumSize(QSize(0, 409));
        WindowClass->setMaximumSize(QSize(16777215, 16777215));
        WindowClass->setStyleSheet(QString::fromUtf8("QPushButton#add_button\n"
"{\n"
"        border-image: url(:/Resources/search.png);\n"
"}\n"
"\n"
"QPushButton#contact_button\n"
"{\n"
"        border-image: url(:/Resources/chat.png);\n"
"}"));
        actionLog_out = new QAction(WindowClass);
        actionLog_out->setObjectName("actionLog_out");
        actionAbout = new QAction(WindowClass);
        actionAbout->setObjectName("actionAbout");
        actionAdd_contact = new QAction(WindowClass);
        actionAdd_contact->setObjectName("actionAdd_contact");
        centralWidget = new QWidget(WindowClass);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setEnabled(true);
        QFont font;
        font.setFamilies({QString::fromUtf8("Open Sans Light")});
        centralWidget->setFont(font);
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        main = new QWidget();
        main->setObjectName("main");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(main->sizePolicy().hasHeightForWidth());
        main->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Open Sans Light")});
        font1.setBold(false);
        main->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(main);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        top_frame = new QFrame(main);
        top_frame->setObjectName("top_frame");
        sizePolicy1.setHeightForWidth(top_frame->sizePolicy().hasHeightForWidth());
        top_frame->setSizePolicy(sizePolicy1);
        top_frame->setMinimumSize(QSize(0, 81));
        top_frame->setStyleSheet(QString::fromUtf8("background: rgb(68, 58, 56);"));
        image_frame = new QFrame(top_frame);
        image_frame->setObjectName("image_frame");
        image_frame->setGeometry(QRect(10, 10, 61, 61));
        image_frame->setStyleSheet(QString::fromUtf8("border-image: url(:/Resources/profile.png);"));
        image_frame->setFrameShape(QFrame::StyledPanel);
        image_frame->setFrameShadow(QFrame::Raised);
        username_label = new QLabel(top_frame);
        username_label->setObjectName("username_label");
        username_label->setGeometry(QRect(80, 20, 111, 41));
        username_label->setStyleSheet(QString::fromUtf8("font: 13pt \"Open Sans Light\";\n"
"color: white;"));
        status_label = new QLabel(top_frame);
        status_label->setObjectName("status_label");
        status_label->setGeometry(QRect(480, 0, 81, 81));
        status_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        status_text_label = new QLabel(top_frame);
        status_text_label->setObjectName("status_text_label");
        status_text_label->setGeometry(QRect(310, 0, 181, 81));
        status_text_label->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 10pt Open Sans Light;"));
        status_text_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        username_label->raise();
        image_frame->raise();
        status_label->raise();
        status_text_label->raise();

        verticalLayout_5->addWidget(top_frame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, -1);
        widget = new QWidget(main);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(150, 16777215));
        verticalLayout_9 = new QVBoxLayout(widget);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        add_button = new QPushButton(widget);
        add_button->setObjectName("add_button");
        add_button->setStyleSheet(QString::fromUtf8("QPushButton:enabled\n"
"{\n"
"                background: #1c1c37;\n"
"                min-width: 40px;\n"
"                min-height:40px;\n"
"                border-radius: 0px;\n"
"                padding: 5px;\n"
"                outline: 0px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"                background: #3D3D5A;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"           background: #585879;\n"
"}"));

        horizontalLayout_6->addWidget(add_button);

        contact_button = new QPushButton(widget);
        contact_button->setObjectName("contact_button");
        contact_button->setStyleSheet(QString::fromUtf8(" QPushButton:enabled\n"
"{\n"
"                background: #1c1c37;\n"
"                min-width: 40px;\n"
"                min-height:40px;\n"
"                border-radius: 0px;\n"
"                padding: 5px;\n"
"                outline: 0px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"                background: #3D3D5A;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"           background: #585879;\n"
"}"));

        horizontalLayout_6->addWidget(contact_button);


        verticalLayout_9->addLayout(horizontalLayout_6);

        contact_widget = new QStackedWidget(widget);
        contact_widget->setObjectName("contact_widget");
        contact_widget->setMinimumSize(QSize(150, 0));
        contact_widget->setMaximumSize(QSize(150, 16777215));
        contact_widget->setStyleSheet(QString::fromUtf8("background: rgb(192, 249, 255)"));
        view_page = new QWidget();
        view_page->setObjectName("view_page");
        verticalLayout_12 = new QVBoxLayout(view_page);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        contacts = new QListWidget(view_page);
        contacts->setObjectName("contacts");
        contacts->setFocusPolicy(Qt::NoFocus);
        contacts->setStyleSheet(QString::fromUtf8("font: 11pt \"Open Sans Light\";"));
        contacts->setFrameShape(QFrame::NoFrame);
        contacts->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        contacts->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_12->addWidget(contacts);

        contact_widget->addWidget(view_page);
        add_page = new QWidget();
        add_page->setObjectName("add_page");
        verticalLayout_17 = new QVBoxLayout(add_page);
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        add_line = new QLineEdit(add_page);
        add_line->setObjectName("add_line");
        add_line->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"        min-height: 20px;\n"
"        background: white;\n"
"        font: 10pt \"Open Sans\";\n"
"        border: 0px;\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"        border:0px;\n"
"}\n"
""));
        add_line->setMaxLength(20);

        verticalLayout_17->addWidget(add_line);

        scrollArea_3 = new QScrollArea(add_page);
        scrollArea_3->setObjectName("scrollArea_3");
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 150, 333));
        verticalLayout_19 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_19->setSpacing(0);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName("verticalLayout_19");
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        add_layout = new QVBoxLayout();
        add_layout->setSpacing(6);
        add_layout->setObjectName("add_layout");
        add_layout->setContentsMargins(0, -1, 0, -1);

        verticalLayout_19->addLayout(add_layout);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_17->addWidget(scrollArea_3);

        contact_widget->addWidget(add_page);

        verticalLayout_9->addWidget(contact_widget);


        horizontalLayout->addWidget(widget);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, -1, 0, -1);
        chat_windows = new QStackedWidget(main);
        chat_windows->setObjectName("chat_windows");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_8 = new QVBoxLayout(page);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName("verticalLayout_7");
        contact_frame = new QWidget(page);
        contact_frame->setObjectName("contact_frame");
        contact_frame->setMinimumSize(QSize(0, 50));
        contact_frame->setMaximumSize(QSize(16777215, 50));
        contact_frame->setStyleSheet(QString::fromUtf8("background: rgb(68, 58, 56);"));
        verticalLayout_21 = new QVBoxLayout(contact_frame);
        verticalLayout_21->setSpacing(0);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName("verticalLayout_21");
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName("verticalLayout_13");
        contact_label = new QLabel(contact_frame);
        contact_label->setObjectName("contact_label");
        contact_label->setStyleSheet(QString::fromUtf8("font: 12pt; color: white;"));
        contact_label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_13->addWidget(contact_label);

        contact_status = new QLabel(contact_frame);
        contact_status->setObjectName("contact_status");
        contact_status->setStyleSheet(QString::fromUtf8("color: white; \n"
"font: 8pt;"));
        contact_status->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_13->addWidget(contact_status);


        verticalLayout_21->addLayout(verticalLayout_13);


        verticalLayout_7->addWidget(contact_frame);

        scrollArea = new QScrollArea(page);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8("background: #E1E1E8;"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 491, 351));
        scrollAreaWidgetContents_4->setMaximumSize(QSize(600, 16777215));
        verticalLayout_16 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_16->setSpacing(0);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        output = new QVBoxLayout();
        output->setSpacing(10);
        output->setObjectName("output");
        output->setContentsMargins(10, 20, 10, 20);

        verticalLayout_16->addLayout(output);

        scrollArea->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_7->addWidget(scrollArea);


        verticalLayout_8->addLayout(verticalLayout_7);

        chat_windows->addWidget(page);
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        verticalLayout_18 = new QVBoxLayout(page_1);
        verticalLayout_18->setSpacing(0);
        verticalLayout_18->setContentsMargins(11, 11, 11, 11);
        verticalLayout_18->setObjectName("verticalLayout_18");
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(0);
        verticalLayout_20->setObjectName("verticalLayout_20");
        contact_frame_2 = new QWidget(page_1);
        contact_frame_2->setObjectName("contact_frame_2");
        contact_frame_2->setMinimumSize(QSize(0, 50));
        contact_frame_2->setMaximumSize(QSize(16777215, 50));
        contact_frame_2->setStyleSheet(QString::fromUtf8("background: rgb(68, 58, 56);"));
        verticalLayout_29 = new QVBoxLayout(contact_frame_2);
        verticalLayout_29->setSpacing(0);
        verticalLayout_29->setContentsMargins(11, 11, 11, 11);
        verticalLayout_29->setObjectName("verticalLayout_29");
        verticalLayout_29->setContentsMargins(0, 0, 0, 0);
        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setSpacing(0);
        verticalLayout_28->setObjectName("verticalLayout_28");
        contact_label_2 = new QLabel(contact_frame_2);
        contact_label_2->setObjectName("contact_label_2");
        contact_label_2->setStyleSheet(QString::fromUtf8("font: 12pt;\n"
"color: white;"));
        contact_label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_28->addWidget(contact_label_2);

        contact_status_2 = new QLabel(contact_frame_2);
        contact_status_2->setObjectName("contact_status_2");
        contact_status_2->setStyleSheet(QString::fromUtf8("color: white; font: 8pt"));
        contact_status_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_28->addWidget(contact_status_2);


        verticalLayout_29->addLayout(verticalLayout_28);


        verticalLayout_20->addWidget(contact_frame_2);

        scrollArea_2 = new QScrollArea(page_1);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setStyleSheet(QString::fromUtf8("background: #E1E1E8;"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_2->setWidgetResizable(true);
        scrollArea_2->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName("scrollAreaWidgetContents_6");
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 491, 351));
        scrollAreaWidgetContents_6->setMaximumSize(QSize(600, 16777215));
        verticalLayout_25 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_25->setSpacing(0);
        verticalLayout_25->setContentsMargins(11, 11, 11, 11);
        verticalLayout_25->setObjectName("verticalLayout_25");
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        output_2 = new QVBoxLayout();
        output_2->setSpacing(10);
        output_2->setObjectName("output_2");
        output_2->setContentsMargins(10, 20, 10, 20);

        verticalLayout_25->addLayout(output_2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_20->addWidget(scrollArea_2);


        verticalLayout_18->addLayout(verticalLayout_20);

        chat_windows->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_22 = new QVBoxLayout(page_2);
        verticalLayout_22->setSpacing(0);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName("verticalLayout_22");
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(0);
        verticalLayout_23->setObjectName("verticalLayout_23");
        contact_frame_3 = new QWidget(page_2);
        contact_frame_3->setObjectName("contact_frame_3");
        contact_frame_3->setMinimumSize(QSize(0, 50));
        contact_frame_3->setMaximumSize(QSize(16777215, 50));
        contact_frame_3->setStyleSheet(QString::fromUtf8("background: rgb(68, 58, 56);"));
        verticalLayout_33 = new QVBoxLayout(contact_frame_3);
        verticalLayout_33->setSpacing(0);
        verticalLayout_33->setContentsMargins(11, 11, 11, 11);
        verticalLayout_33->setObjectName("verticalLayout_33");
        verticalLayout_33->setContentsMargins(0, 0, 0, 0);
        verticalLayout_32 = new QVBoxLayout();
        verticalLayout_32->setSpacing(0);
        verticalLayout_32->setObjectName("verticalLayout_32");
        contact_label_4 = new QLabel(contact_frame_3);
        contact_label_4->setObjectName("contact_label_4");
        contact_label_4->setStyleSheet(QString::fromUtf8("font: 12pt;\n"
"color: white;"));
        contact_label_4->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_32->addWidget(contact_label_4);

        contact_status_4 = new QLabel(contact_frame_3);
        contact_status_4->setObjectName("contact_status_4");
        contact_status_4->setStyleSheet(QString::fromUtf8("color: white; font: 8pt"));
        contact_status_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_32->addWidget(contact_status_4);


        verticalLayout_33->addLayout(verticalLayout_32);


        verticalLayout_23->addWidget(contact_frame_3);

        scrollArea_4 = new QScrollArea(page_2);
        scrollArea_4->setObjectName("scrollArea_4");
        scrollArea_4->setStyleSheet(QString::fromUtf8("background: #E1E1E8;"));
        scrollArea_4->setFrameShape(QFrame::NoFrame);
        scrollArea_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_4->setWidgetResizable(true);
        scrollArea_4->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName("scrollAreaWidgetContents_7");
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 491, 351));
        scrollAreaWidgetContents_7->setMaximumSize(QSize(600, 16777215));
        verticalLayout_26 = new QVBoxLayout(scrollAreaWidgetContents_7);
        verticalLayout_26->setSpacing(0);
        verticalLayout_26->setContentsMargins(11, 11, 11, 11);
        verticalLayout_26->setObjectName("verticalLayout_26");
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        output_3 = new QVBoxLayout();
        output_3->setSpacing(10);
        output_3->setObjectName("output_3");
        output_3->setContentsMargins(10, 20, 10, 20);

        verticalLayout_26->addLayout(output_3);

        scrollArea_4->setWidget(scrollAreaWidgetContents_7);

        verticalLayout_23->addWidget(scrollArea_4);


        verticalLayout_22->addLayout(verticalLayout_23);

        chat_windows->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        chat_windows->addWidget(page_3);
        blank = new QWidget();
        blank->setObjectName("blank");
        blank->setStyleSheet(QString::fromUtf8("background: rgb(34, 34, 34)"));
        verticalLayout_27 = new QVBoxLayout(blank);
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setContentsMargins(11, 11, 11, 11);
        verticalLayout_27->setObjectName("verticalLayout_27");
        chat_windows->addWidget(blank);

        verticalLayout_10->addWidget(chat_windows);

        input_frame = new QWidget(main);
        input_frame->setObjectName("input_frame");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(input_frame->sizePolicy().hasHeightForWidth());
        input_frame->setSizePolicy(sizePolicy2);
        input_frame->setMinimumSize(QSize(0, 75));
        input_frame->setMaximumSize(QSize(16777215, 75));
        input_frame->setStyleSheet(QString::fromUtf8("background: rgb(63, 63, 63)"));
        horizontalLayout_4 = new QHBoxLayout(input_frame);
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(20, 10, 20, 10);
        horizontalWidget = new QWidget(input_frame);
        horizontalWidget->setObjectName("horizontalWidget");
        horizontalWidget->setMaximumSize(QSize(700, 16777215));
        horizontalLayout_12 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_12->setSpacing(10);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        input_frame_box = new QWidget(horizontalWidget);
        input_frame_box->setObjectName("input_frame_box");
        input_frame_box->setMinimumSize(QSize(0, 48));
        input_frame_box->setMaximumSize(QSize(16777215, 48));
        input_frame_box->setStyleSheet(QString::fromUtf8("background: white;"));
        input_frame_box->setInputMethodHints(Qt::ImhMultiLine);
        horizontalLayout_3 = new QHBoxLayout(input_frame_box);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 11, 0, 0);
        input = new QPlainTextEdit(input_frame_box);
        input->setObjectName("input");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(input->sizePolicy().hasHeightForWidth());
        input->setSizePolicy(sizePolicy3);
        input->setMinimumSize(QSize(0, 48));
        input->setMaximumSize(QSize(16777215, 48));
        input->setStyleSheet(QString::fromUtf8("font: 10pt \"Open Sans\";"));
        input->setFrameShape(QFrame::NoFrame);
        input->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        input->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_3->addWidget(input);


        horizontalLayout_12->addWidget(input_frame_box);

        send_button = new QPushButton(horizontalWidget);
        send_button->setObjectName("send_button");
        send_button->setEnabled(true);
        send_button->setMaximumSize(QSize(50, 35));
        send_button->setStyleSheet(QString::fromUtf8(" QPushButton:enabled\n"
"{\n"
"                border-image: url(:/Resources/send.png);\n"
"                background:  #73739b;\n"
"                border-radius: 3px;\n"
"                min-width: 40px;\n"
"                min-height:25px;\n"
"                padding: 5px;\n"
"                outline: 0px;\n"
"}\n"
"\n"
" QPushButton:disabled\n"
"{\n"
"                border-image: url(:/Resources/send_disabled.png);\n"
"                background:  #73739b;\n"
"                border-radius: 3px;\n"
"                min-width: 40px;\n"
"                min-height:25px;\n"
"                padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"                background: #7a7aa1;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" {\n"
"        background: #8f8fb3;\n"
"}"));

        horizontalLayout_12->addWidget(send_button);

        smile_button = new QPushButton(horizontalWidget);
        smile_button->setObjectName("smile_button");
        smile_button->setMinimumSize(QSize(50, 35));
        smile_button->setMaximumSize(QSize(50, 35));
        smile_button->setStyleSheet(QString::fromUtf8(" QPushButton:enabled\n"
"{\n"
"                border-image: url(:/Resources/smile.png);\n"
"                background:  #73739b;\n"
"                border-radius: 3px;\n"
"                min-height:25px;\n"
"                padding: 5px;\n"
"                outline: 0px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"                background: #7a7aa1;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" {\n"
"        background: #8f8fb3;\n"
"}"));

        horizontalLayout_12->addWidget(smile_button);


        horizontalLayout_4->addWidget(horizontalWidget);


        verticalLayout_10->addWidget(input_frame);


        horizontalLayout->addLayout(verticalLayout_10);

        smiles = new QVBoxLayout();
        smiles->setSpacing(0);
        smiles->setObjectName("smiles");
        smiles->setContentsMargins(-1, -1, 0, -1);
        frame = new QFrame(main);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 0));
        frame->setStyleSheet(QString::fromUtf8("background: #1c1c37;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget_3 = new QWidget(frame);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(0, 0, 181, 52));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(5, 0, 5, 0);
        smile_button_2 = new QPushButton(horizontalLayoutWidget_3);
        smile_button_2->setObjectName("smile_button_2");
        smile_button_2->setMinimumSize(QSize(0, 0));
        smile_button_2->setMaximumSize(QSize(40, 40));
        smile_button_2->setStyleSheet(QString::fromUtf8(" QPushButton:enabled\n"
"{\n"
"                background: #1c1c37;\n"
"                border-image: url(:/big_emoticons/Resources/big_emoticons/smile.png);\n"
"                outline: 0 px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"                background: #3D3D5A;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" {\n"
"        background: #585879;\n"
"}"));

        horizontalLayout_8->addWidget(smile_button_2);

        smile_button_3 = new QPushButton(horizontalLayoutWidget_3);
        smile_button_3->setObjectName("smile_button_3");
        smile_button_3->setMinimumSize(QSize(0, 0));
        smile_button_3->setMaximumSize(QSize(40, 40));
        smile_button_3->setStyleSheet(QString::fromUtf8(" QPushButton:enabled\n"
"{\n"
"                background: #1c1c37;\n"
"                border-image: url(:/big_emoticons/Resources/big_emoticons/wink.png);\n"
"                outline: 0 px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"                background: #3D3D5A;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" {\n"
"        background: #585879;\n"
"}"));

        horizontalLayout_8->addWidget(smile_button_3);

        smile_button_4 = new QPushButton(horizontalLayoutWidget_3);
        smile_button_4->setObjectName("smile_button_4");
        smile_button_4->setMinimumSize(QSize(0, 0));
        smile_button_4->setMaximumSize(QSize(40, 40));
        smile_button_4->setStyleSheet(QString::fromUtf8(" QPushButton:enabled\n"
"{\n"
"                background: #1c1c37;\n"
"                border-image: url(:/big_emoticons/Resources/big_emoticons/laugh.png);\n"
"                outline: 0 px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"                background: #3D3D5A;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" {\n"
"        background: #585879;\n"
"}"));

        horizontalLayout_8->addWidget(smile_button_4);

        smile_button_5 = new QPushButton(horizontalLayoutWidget_3);
        smile_button_5->setObjectName("smile_button_5");
        smile_button_5->setMinimumSize(QSize(0, 0));
        smile_button_5->setMaximumSize(QSize(40, 40));
        smile_button_5->setStyleSheet(QString::fromUtf8(" QPushButton:enabled\n"
"{\n"
"                background: #1c1c37;\n"
"                border-image: url(:/big_emoticons/Resources/big_emoticons/happy.png);\n"
"                outline: 0 px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"                background: #3D3D5A;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" {\n"
"        background: #585879;\n"
"}"));

        horizontalLayout_8->addWidget(smile_button_5);

        horizontalLayoutWidget_4 = new QWidget(frame);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(0, 50, 181, 52));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(5, 0, 5, 0);
        smile_button_6 = new QPushButton(horizontalLayoutWidget_4);
        smile_button_6->setObjectName("smile_button_6");
        smile_button_6->setMinimumSize(QSize(0, 0));
        smile_button_6->setMaximumSize(QSize(40, 40));
        smile_button_6->setStyleSheet(QString::fromUtf8(" QPushButton:enabled\n"
"{\n"
"                background: #1c1c37;\n"
"                border-image: url(:/big_emoticons/Resources/big_emoticons/shy.png);\n"
"                outline: 0 px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"                background: #3D3D5A;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" {\n"
"        background: #585879;\n"
"}"));

        horizontalLayout_9->addWidget(smile_button_6);

        smile_button_7 = new QPushButton(horizontalLayoutWidget_4);
        smile_button_7->setObjectName("smile_button_7");
        smile_button_7->setMinimumSize(QSize(0, 0));
        smile_button_7->setMaximumSize(QSize(40, 40));
        smile_button_7->setStyleSheet(QString::fromUtf8(" QPushButton:enabled\n"
"{\n"
"                background: #1c1c37;\n"
"                border-image: url(:/big_emoticons/Resources/big_emoticons/angry.png);\n"
"                outline: 0 px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"                background: #3D3D5A;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" {\n"
"        background: #585879;\n"
"}"));

        horizontalLayout_9->addWidget(smile_button_7);

        smile_button_8 = new QPushButton(horizontalLayoutWidget_4);
        smile_button_8->setObjectName("smile_button_8");
        smile_button_8->setMinimumSize(QSize(0, 0));
        smile_button_8->setMaximumSize(QSize(40, 40));
        smile_button_8->setStyleSheet(QString::fromUtf8("QPushButton:enabled\n"
"{\n"
"                background: #1c1c37;\n"
"                outline: 0 px;\n"
"				border-radius: 0px;\n"
"}\n"
""));

        horizontalLayout_9->addWidget(smile_button_8);

        smile_button_9 = new QPushButton(horizontalLayoutWidget_4);
        smile_button_9->setObjectName("smile_button_9");
        smile_button_9->setEnabled(true);
        smile_button_9->setMinimumSize(QSize(0, 0));
        smile_button_9->setMaximumSize(QSize(40, 40));
        smile_button_9->setStyleSheet(QString::fromUtf8("QPushButton:enabled\n"
"{\n"
"                background: #1c1c37;\n"
"                outline: 0 px;\n"
"				border-radius: 0px;\n"
"}\n"
""));

        horizontalLayout_9->addWidget(smile_button_9);

        horizontalLayoutWidget_5 = new QWidget(frame);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(0, 100, 181, 52));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(5, 0, 5, 0);
        horizontalLayoutWidget_6 = new QWidget(frame);
        horizontalLayoutWidget_6->setObjectName("horizontalLayoutWidget_6");
        horizontalLayoutWidget_6->setGeometry(QRect(0, 150, 181, 52));
        horizontalLayout_13 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_13->setSpacing(0);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(5, 0, 5, 0);
        horizontalLayoutWidget_7 = new QWidget(frame);
        horizontalLayoutWidget_7->setObjectName("horizontalLayoutWidget_7");
        horizontalLayoutWidget_7->setGeometry(QRect(0, 200, 181, 52));
        horizontalLayout_14 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(5, 0, 5, 0);

        smiles->addWidget(frame);


        horizontalLayout->addLayout(smiles);


        verticalLayout_5->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout_5);

        stackedWidget->addWidget(main);
        login = new QWidget();
        login->setObjectName("login");
        login->setMinimumSize(QSize(450, 350));
        login->setLayoutDirection(Qt::LeftToRight);
        login->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_15 = new QVBoxLayout(login);
        verticalLayout_15->setSpacing(0);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        widget_1 = new QWidget(login);
        widget_1->setObjectName("widget_1");
        widget_1->setStyleSheet(QString::fromUtf8("background: #E1E1E8;"));
        verticalLayout_4 = new QVBoxLayout(widget_1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        top_frame_2 = new QFrame(widget_1);
        top_frame_2->setObjectName("top_frame_2");
        sizePolicy1.setHeightForWidth(top_frame_2->sizePolicy().hasHeightForWidth());
        top_frame_2->setSizePolicy(sizePolicy1);
        top_frame_2->setMinimumSize(QSize(0, 81));
        top_frame_2->setMaximumSize(QSize(16777215, 81));
        top_frame_2->setStyleSheet(QString::fromUtf8("background: rgb(79, 79, 79);"));
        login_status_label = new QLabel(top_frame_2);
        login_status_label->setObjectName("login_status_label");
        login_status_label->setGeometry(QRect(0, 0, 450, 81));
        login_status_label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(top_frame_2);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(130, 10, 130, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_14->addItem(verticalSpacer);

        label_2 = new QLabel(widget_1);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"        font: 13pt \"Open Sans Light\"\n"
"}"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2->setMargin(0);
        label_2->setIndent(0);

        verticalLayout_14->addWidget(label_2);

        login_username = new QLineEdit(widget_1);
        login_username->setObjectName("login_username");
        login_username->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"        font: 11pt \"Open Sans\";\n"
"        border:1px solid  grey ;\n"
"        min-height: 33px;\n"
"        background: white;\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"        border:1px solid  #161626 ;\n"
"} "));
        login_username->setMaxLength(20);

        verticalLayout_14->addWidget(login_username);

        label_6 = new QLabel(widget_1);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"        font: 13pt \"Open Sans Light\"\n"
"}"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_6->setIndent(0);

        verticalLayout_14->addWidget(label_6);

        login_password = new QLineEdit(widget_1);
        login_password->setObjectName("login_password");
        login_password->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"        font: 11pt \"Open Sans\";\n"
"        border:1px solid  grey ;\n"
"        min-height: 33px;\n"
"        background: white;\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"        border:1px solid  #161626 ;\n"
"} "));
        login_password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        login_password->setMaxLength(30);
        login_password->setEchoMode(QLineEdit::Password);

        verticalLayout_14->addWidget(login_password);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 5);
        login_button = new QPushButton(widget_1);
        login_button->setObjectName("login_button");
        login_button->setStyleSheet(QString::fromUtf8("QPushButton:enabled\n"
"{\n"
"                font: 13pt \"Open Sans Semibold\";\n"
"                background:  #73739b;\n"
"                border-radius: 3px;\n"
"                min-height:25px;\n"
"                padding: 5px;\n"
"                outline: 0;\n"
"            color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"                background: #7a7aa1;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" {\n"
"        background: #8f8fb3;\n"
"}"));

        horizontalLayout_5->addWidget(login_button);

        login_signup = new QPushButton(widget_1);
        login_signup->setObjectName("login_signup");
        login_signup->setStyleSheet(QString::fromUtf8("QPushButton:enabled\n"
"{\n"
"                font: 13pt \"Open Sans Semibold\";\n"
"                background:  #73739b;\n"
"                border-radius: 3px;\n"
"                min-height:25px;\n"
"                padding: 5px;\n"
"                outline: 0;\n"
"                color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"                background: #7a7aa1;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" {\n"
"        background: #8f8fb3;\n"
"}"));

        horizontalLayout_5->addWidget(login_signup);


        verticalLayout_14->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_14);

        login_error = new QLabel(widget_1);
        login_error->setObjectName("login_error");
        sizePolicy2.setHeightForWidth(login_error->sizePolicy().hasHeightForWidth());
        login_error->setSizePolicy(sizePolicy2);
        login_error->setStyleSheet(QString::fromUtf8("font: 10pt \"Open Sans Light\";"));
        login_error->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(login_error);

        verticalSpacer_3 = new QSpacerItem(20, 45, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        verticalLayout_4->setStretch(0, 10);

        verticalLayout_15->addWidget(widget_1);

        stackedWidget->addWidget(login);
        signup = new QWidget();
        signup->setObjectName("signup");
        verticalLayout_6 = new QVBoxLayout(signup);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(signup);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8("background: #E1E1E8;"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 6);
        top_frame_3 = new QFrame(widget_2);
        top_frame_3->setObjectName("top_frame_3");
        top_frame_3->setMinimumSize(QSize(0, 81));
        top_frame_3->setMaximumSize(QSize(16777215, 81));
        top_frame_3->setStyleSheet(QString::fromUtf8("background: rgb(79, 79, 79);"));
        top_frame_3->setFrameShape(QFrame::StyledPanel);
        top_frame_3->setFrameShadow(QFrame::Raised);
        signup_status_label = new QLabel(top_frame_3);
        signup_status_label->setObjectName("signup_status_label");
        signup_status_label->setGeometry(QRect(0, 0, 450, 81));
        signup_status_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(top_frame_3);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(130, 34, 130, -1);
        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"        font: 13pt \"Open Sans Light\"\n"
"}"));

        verticalLayout_11->addWidget(label_3);

        signup_username = new QLineEdit(widget_2);
        signup_username->setObjectName("signup_username");
        signup_username->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"        font: 11pt \"Open Sans\";\n"
"        border:1px solid  grey ;\n"
"        min-height: 33px;\n"
"        background: white;\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"        border:1px solid  #161626 ;\n"
"} "));
        signup_username->setMaxLength(20);

        verticalLayout_11->addWidget(signup_username);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"        font: 13pt \"Open Sans Light\"\n"
"}"));

        verticalLayout_11->addWidget(label_4);

        signup_password = new QLineEdit(widget_2);
        signup_password->setObjectName("signup_password");
        signup_password->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"        font: 11pt \"Open Sans\";\n"
"        border:1px solid  grey ;\n"
"        min-height: 33px;\n"
"        background: white;\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"        border:1px solid  #161626 ;\n"
"} "));
        signup_password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        signup_password->setMaxLength(30);
        signup_password->setEchoMode(QLineEdit::Password);

        verticalLayout_11->addWidget(signup_password);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"        font: 13pt \"Open Sans Light\"\n"
"}"));

        verticalLayout_11->addWidget(label_5);

        signup_confirm = new QLineEdit(widget_2);
        signup_confirm->setObjectName("signup_confirm");
        signup_confirm->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"        font: 11pt \"Open Sans\";\n"
"        border:1px solid  grey ;\n"
"        min-height: 33px;\n"
"        background: white;\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"        border:1px solid  #161626 ;\n"
"} "));
        signup_confirm->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        signup_confirm->setMaxLength(30);
        signup_confirm->setEchoMode(QLineEdit::Password);

        verticalLayout_11->addWidget(signup_confirm);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        signup_button = new QPushButton(widget_2);
        signup_button->setObjectName("signup_button");
        signup_button->setStyleSheet(QString::fromUtf8("QPushButton:enabled\n"
"{\n"
"                font: 13pt \"Open Sans Semibold\";\n"
"                background:  #73739b;\n"
"                border-radius: 3px;\n"
"                min-height:25px;\n"
"                padding: 5px;\n"
"            outline: 0;\n"
"                color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"                background: #7a7aa1;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" {\n"
"        background: #8f8fb3;\n"
"}"));

        horizontalLayout_2->addWidget(signup_button);

        signup_login = new QPushButton(widget_2);
        signup_login->setObjectName("signup_login");
        signup_login->setStyleSheet(QString::fromUtf8("QPushButton:enabled\n"
"{\n"
"                font: 13pt \"Open Sans Semibold\";\n"
"                background:  #73739b;\n"
"                border-radius: 3px;\n"
"                min-height:25px;\n"
"                padding: 5px;\n"
"                outline: 0;\n"
"                color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"                background: #7a7aa1;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
" {\n"
"        background: #8f8fb3;\n"
"}"));

        horizontalLayout_2->addWidget(signup_login);


        verticalLayout_11->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_11);

        signup_error = new QLabel(widget_2);
        signup_error->setObjectName("signup_error");
        signup_error->setStyleSheet(QString::fromUtf8("font: 10pt \"Open Sans Light\";"));
        signup_error->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(signup_error);


        verticalLayout_6->addWidget(widget_2);

        stackedWidget->addWidget(signup);

        verticalLayout_3->addWidget(stackedWidget);

        WindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(WindowClass);
        statusBar->setObjectName("statusBar");
        WindowClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(WindowClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 575, 26));
        menuMessenger = new QMenu(menuBar);
        menuMessenger->setObjectName("menuMessenger");
        WindowClass->setMenuBar(menuBar);

        menuBar->addAction(menuMessenger->menuAction());
        menuMessenger->addAction(actionLog_out);

        retranslateUi(WindowClass);

        stackedWidget->setCurrentIndex(0);
        contact_widget->setCurrentIndex(1);
        chat_windows->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(WindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *WindowClass)
    {
        WindowClass->setWindowTitle(QCoreApplication::translate("WindowClass", "Messenger", nullptr));
        actionLog_out->setText(QCoreApplication::translate("WindowClass", "Log out", nullptr));
        actionAbout->setText(QCoreApplication::translate("WindowClass", "About", nullptr));
        actionAdd_contact->setText(QCoreApplication::translate("WindowClass", "Add contact", nullptr));
        username_label->setText(QString());
        status_label->setText(QString());
        status_text_label->setText(QCoreApplication::translate("WindowClass", "\320\241\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265 \321\200\320\260\320\267\320\276\321\200\320\262\320\260\320\275\320\276", nullptr));
        add_button->setText(QString());
        contact_button->setText(QString());
        add_line->setPlaceholderText(QCoreApplication::translate("WindowClass", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        contact_label->setText(QString());
        contact_status->setText(QString());
        contact_label_2->setText(QString());
        contact_status_2->setText(QString());
        contact_label_4->setText(QString());
        contact_status_4->setText(QString());
        input->setPlaceholderText(QCoreApplication::translate("WindowClass", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265...", nullptr));
        smile_button->setText(QString());
        smile_button_2->setText(QString());
        smile_button_3->setText(QString());
        smile_button_4->setText(QString());
        smile_button_5->setText(QString());
        smile_button_6->setText(QString());
        smile_button_7->setText(QString());
        smile_button_8->setText(QString());
        smile_button_9->setText(QString());
#if QT_CONFIG(accessibility)
        top_frame_2->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        login_status_label->setText(QString());
        label_2->setText(QCoreApplication::translate("WindowClass", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label_6->setText(QCoreApplication::translate("WindowClass", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        login_button->setText(QCoreApplication::translate("WindowClass", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        login_signup->setText(QCoreApplication::translate("WindowClass", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        login_error->setText(QString());
        signup_status_label->setText(QString());
        label_3->setText(QCoreApplication::translate("WindowClass", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label_4->setText(QCoreApplication::translate("WindowClass", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        label_5->setText(QCoreApplication::translate("WindowClass", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        signup_button->setText(QCoreApplication::translate("WindowClass", "\320\236\320\272", nullptr));
        signup_login->setText(QCoreApplication::translate("WindowClass", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        signup_error->setText(QString());
        menuMessenger->setTitle(QCoreApplication::translate("WindowClass", "Messenger", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowClass: public Ui_WindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
