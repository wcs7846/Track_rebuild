/********************************************************************************
** Form generated from reading UI file 'preview.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREVIEW_H
#define UI_PREVIEW_H

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

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_address;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QListView *listView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Button_ok;
    QPushButton *Button_no;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(504, 381);
        verticalLayout = new QVBoxLayout(Form);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_address = new QLabel(groupBox);
        label_address->setObjectName(QStringLiteral("label_address"));

        horizontalLayout->addWidget(label_address);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Form);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listView = new QListView(groupBox_2);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout->addWidget(listView, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Button_ok = new QPushButton(Form);
        Button_ok->setObjectName(QStringLiteral("Button_ok"));

        horizontalLayout_2->addWidget(Button_ok);

        Button_no = new QPushButton(Form);
        Button_no->setObjectName(QStringLiteral("Button_no"));

        horizontalLayout_2->addWidget(Button_no);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("Form", "The Absolute address", nullptr));
        label->setText(QApplication::translate("Form", "Address:", nullptr));
        label_address->setText(QApplication::translate("Form", "TextLabel", nullptr));
        groupBox_2->setTitle(QApplication::translate("Form", "The list of files", nullptr));
        Button_ok->setText(QApplication::translate("Form", "OK", nullptr));
        Button_no->setText(QApplication::translate("Form", "NO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREVIEW_H
