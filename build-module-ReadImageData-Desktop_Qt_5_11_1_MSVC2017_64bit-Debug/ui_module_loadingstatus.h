/********************************************************************************
** Form generated from reading UI file 'module_loadingstatus.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULE_LOADINGSTATUS_H
#define UI_MODULE_LOADINGSTATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_module_loadingStatus
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QProgressBar *progressBar;
    QToolButton *toolButton;

    void setupUi(QWidget *module_loadingStatus)
    {
        if (module_loadingStatus->objectName().isEmpty())
            module_loadingStatus->setObjectName(QStringLiteral("module_loadingStatus"));
        module_loadingStatus->resize(400, 300);
        verticalLayout = new QVBoxLayout(module_loadingStatus);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(module_loadingStatus);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout->addWidget(progressBar);

        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout->addWidget(toolButton);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);


        retranslateUi(module_loadingStatus);

        QMetaObject::connectSlotsByName(module_loadingStatus);
    } // setupUi

    void retranslateUi(QWidget *module_loadingStatus)
    {
        module_loadingStatus->setWindowTitle(QApplication::translate("module_loadingStatus", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("module_loadingStatus", "The Status of loading", nullptr));
        label->setText(QApplication::translate("module_loadingStatus", "TextLabel", nullptr));
        toolButton->setText(QApplication::translate("module_loadingStatus", "\303\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class module_loadingStatus: public Ui_module_loadingStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULE_LOADINGSTATUS_H
