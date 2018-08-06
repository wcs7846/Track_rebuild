/********************************************************************************
** Form generated from reading UI file 'module_TaskInformation.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULE_TASKINFORMATION_H
#define UI_MODULE_TASKINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_module_TaskInformation
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QListView *listView;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button_NO;
    QPushButton *Button_OK;

    void setupUi(QWidget *module_TaskInformation)
    {
        if (module_TaskInformation->objectName().isEmpty())
            module_TaskInformation->setObjectName(QStringLiteral("module_TaskInformation"));
        module_TaskInformation->resize(433, 378);
        verticalLayout = new QVBoxLayout(module_TaskInformation);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(module_TaskInformation);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(module_TaskInformation);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        listView = new QListView(groupBox_2);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout_2->addWidget(listView, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Button_NO = new QPushButton(module_TaskInformation);
        Button_NO->setObjectName(QStringLiteral("Button_NO"));

        horizontalLayout->addWidget(Button_NO);

        Button_OK = new QPushButton(module_TaskInformation);
        Button_OK->setObjectName(QStringLiteral("Button_OK"));

        horizontalLayout->addWidget(Button_OK);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(module_TaskInformation);

        QMetaObject::connectSlotsByName(module_TaskInformation);
    } // setupUi

    void retranslateUi(QWidget *module_TaskInformation)
    {
        module_TaskInformation->setWindowTitle(QApplication::translate("module_TaskInformation", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("module_TaskInformation", "The Absolute address", nullptr));
        label->setText(QApplication::translate("module_TaskInformation", "Address:", nullptr));
        label_2->setText(QApplication::translate("module_TaskInformation", "TextLabel", nullptr));
        groupBox_2->setTitle(QApplication::translate("module_TaskInformation", "The list of files", nullptr));
        Button_NO->setText(QApplication::translate("module_TaskInformation", "PushButton", nullptr));
        Button_OK->setText(QApplication::translate("module_TaskInformation", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class module_TaskInformation: public Ui_module_TaskInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULE_TASKINFORMATION_H
