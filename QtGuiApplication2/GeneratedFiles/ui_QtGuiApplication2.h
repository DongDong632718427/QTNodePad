/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication2.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION2_H
#define UI_QTGUIAPPLICATION2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplication2Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxUnderLine;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxBold;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButtonBlack;
    QRadioButton *radioButtonRed;
    QRadioButton *radioButtonBlue;
    QTextEdit *editText;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonSure;
    QPushButton *buttonCancel;
    QPushButton *buttonClose;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApplication2Class)
    {
        if (QtGuiApplication2Class->objectName().isEmpty())
            QtGuiApplication2Class->setObjectName(QStringLiteral("QtGuiApplication2Class"));
        QtGuiApplication2Class->resize(600, 400);
        centralWidget = new QWidget(QtGuiApplication2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBoxUnderLine = new QCheckBox(centralWidget);
        checkBoxUnderLine->setObjectName(QStringLiteral("checkBoxUnderLine"));

        horizontalLayout_2->addWidget(checkBoxUnderLine);

        checkBoxItalic = new QCheckBox(centralWidget);
        checkBoxItalic->setObjectName(QStringLiteral("checkBoxItalic"));

        horizontalLayout_2->addWidget(checkBoxItalic);

        checkBoxBold = new QCheckBox(centralWidget);
        checkBoxBold->setObjectName(QStringLiteral("checkBoxBold"));

        horizontalLayout_2->addWidget(checkBoxBold);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radioButtonBlack = new QRadioButton(centralWidget);
        radioButtonBlack->setObjectName(QStringLiteral("radioButtonBlack"));

        horizontalLayout_3->addWidget(radioButtonBlack);

        radioButtonRed = new QRadioButton(centralWidget);
        radioButtonRed->setObjectName(QStringLiteral("radioButtonRed"));

        horizontalLayout_3->addWidget(radioButtonRed);

        radioButtonBlue = new QRadioButton(centralWidget);
        radioButtonBlue->setObjectName(QStringLiteral("radioButtonBlue"));

        horizontalLayout_3->addWidget(radioButtonBlue);


        verticalLayout->addLayout(horizontalLayout_3);

        editText = new QTextEdit(centralWidget);
        editText->setObjectName(QStringLiteral("editText"));

        verticalLayout->addWidget(editText);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonSure = new QPushButton(centralWidget);
        buttonSure->setObjectName(QStringLiteral("buttonSure"));

        horizontalLayout->addWidget(buttonSure);

        buttonCancel = new QPushButton(centralWidget);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));

        horizontalLayout->addWidget(buttonCancel);

        buttonClose = new QPushButton(centralWidget);
        buttonClose->setObjectName(QStringLiteral("buttonClose"));

        horizontalLayout->addWidget(buttonClose);


        verticalLayout->addLayout(horizontalLayout);

        QtGuiApplication2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtGuiApplication2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 18));
        QtGuiApplication2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiApplication2Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiApplication2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGuiApplication2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiApplication2Class->setStatusBar(statusBar);

        retranslateUi(QtGuiApplication2Class);

        QMetaObject::connectSlotsByName(QtGuiApplication2Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication2Class)
    {
        QtGuiApplication2Class->setWindowTitle(QApplication::translate("QtGuiApplication2Class", "QtGuiApplication2", nullptr));
        checkBoxUnderLine->setText(QApplication::translate("QtGuiApplication2Class", "UnderLine", nullptr));
        checkBoxItalic->setText(QApplication::translate("QtGuiApplication2Class", "Italic", nullptr));
        checkBoxBold->setText(QApplication::translate("QtGuiApplication2Class", "Bold", nullptr));
        radioButtonBlack->setText(QApplication::translate("QtGuiApplication2Class", "Black", nullptr));
        radioButtonRed->setText(QApplication::translate("QtGuiApplication2Class", "Red", nullptr));
        radioButtonBlue->setText(QApplication::translate("QtGuiApplication2Class", "Blue", nullptr));
        buttonSure->setText(QApplication::translate("QtGuiApplication2Class", "Sure", nullptr));
        buttonCancel->setText(QApplication::translate("QtGuiApplication2Class", "Cancel", nullptr));
        buttonClose->setText(QApplication::translate("QtGuiApplication2Class", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication2Class: public Ui_QtGuiApplication2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION2_H
