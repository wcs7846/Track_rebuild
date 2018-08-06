/********************************************************************************
** Form generated from reading UI file 'module_datainput.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULE_DATAINPUT_H
#define UI_MODULE_DATAINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_module_dataInput
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_picture;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label;
    QPushButton *Button_selectImage;
    QPushButton *Button_selectFolder;
    QLabel *label_3;
    QLabel *label_4;
    QCheckBox *checkBox_preview;
    QCheckBox *checkBox_advDisplay;
    QWidget *tab_video;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *module_dataInput)
    {
        if (module_dataInput->objectName().isEmpty())
            module_dataInput->setObjectName(QStringLiteral("module_dataInput"));
        module_dataInput->resize(310, 374);
        gridLayout = new QGridLayout(module_dataInput);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(module_dataInput);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_picture = new QWidget();
        tab_picture->setObjectName(QStringLiteral("tab_picture"));
        gridLayout_2 = new QGridLayout(tab_picture);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(tab_picture);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/icons/124-Folder.png);"));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(tab_picture);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/icons/71-Picture.png);"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        Button_selectImage = new QPushButton(tab_picture);
        Button_selectImage->setObjectName(QStringLiteral("Button_selectImage"));

        gridLayout_2->addWidget(Button_selectImage, 1, 0, 1, 1);

        Button_selectFolder = new QPushButton(tab_picture);
        Button_selectFolder->setObjectName(QStringLiteral("Button_selectFolder"));

        gridLayout_2->addWidget(Button_selectFolder, 1, 1, 1, 1);

        label_3 = new QLabel(tab_picture);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/icons/10-View-File.png);"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(tab_picture);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/icons/29-Support.png);"));

        gridLayout_2->addWidget(label_4, 2, 1, 1, 1);

        checkBox_preview = new QCheckBox(tab_picture);
        checkBox_preview->setObjectName(QStringLiteral("checkBox_preview"));
        checkBox_preview->setChecked(true);

        gridLayout_2->addWidget(checkBox_preview, 3, 0, 1, 1);

        checkBox_advDisplay = new QCheckBox(tab_picture);
        checkBox_advDisplay->setObjectName(QStringLiteral("checkBox_advDisplay"));

        gridLayout_2->addWidget(checkBox_advDisplay, 3, 1, 1, 1);

        tabWidget->addTab(tab_picture, QString());
        tab_video = new QWidget();
        tab_video->setObjectName(QStringLiteral("tab_video"));
        gridLayout_3 = new QGridLayout(tab_video);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_6 = new QLabel(tab_video);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        label_5 = new QLabel(tab_video);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(tab_video);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_3->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(tab_video);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_3->addWidget(pushButton_4, 1, 1, 1, 1);

        tabWidget->addTab(tab_video, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(module_dataInput);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(module_dataInput);
    } // setupUi

    void retranslateUi(QWidget *module_dataInput)
    {
        module_dataInput->setWindowTitle(QApplication::translate("module_dataInput", "Form", nullptr));
        label_2->setText(QString());
        label->setText(QString());
        Button_selectImage->setText(QApplication::translate("module_dataInput", "Select Picture", nullptr));
        Button_selectFolder->setText(QApplication::translate("module_dataInput", "Select Folder", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        checkBox_preview->setText(QApplication::translate("module_dataInput", "Pre-View", nullptr));
        checkBox_advDisplay->setText(QApplication::translate("module_dataInput", "Advance Display", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_picture), QApplication::translate("module_dataInput", "Input-Picture", nullptr));
        label_6->setText(QApplication::translate("module_dataInput", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("module_dataInput", "TextLabel", nullptr));
        pushButton_3->setText(QApplication::translate("module_dataInput", "Select Picture", nullptr));
        pushButton_4->setText(QApplication::translate("module_dataInput", "Select Folder", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_video), QApplication::translate("module_dataInput", "Input-video", nullptr));
    } // retranslateUi

};

namespace Ui {
    class module_dataInput: public Ui_module_dataInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULE_DATAINPUT_H
