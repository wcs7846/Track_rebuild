/********************************************************************************
** Form generated from reading UI file 'DemoMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOMAINWINDOW_H
#define UI_DEMOMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <customglwidget.h>

QT_BEGIN_NAMESPACE

class Ui_DemoMainWindow
{
public:
    QAction *actionDataInput;
    QAction *actionTaskInformation;
    QAction *actionLoading;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    CustomGLWidget *openGLWidget;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Option;
    QMenu *menu_About;
    QMenu *menu_window;
    QStatusBar *statusbar;
    QDockWidget *dock_TaskInformation;
    QWidget *dockWidgetContents;
    QDockWidget *dock_Loading;
    QWidget *dockWidgetContents_4;
    QDockWidget *dock_InputOption;
    QWidget *dockWidgetContents_5;

    void setupUi(QMainWindow *DemoMainWindow)
    {
        if (DemoMainWindow->objectName().isEmpty())
            DemoMainWindow->setObjectName(QStringLiteral("DemoMainWindow"));
        DemoMainWindow->setWindowModality(Qt::NonModal);
        DemoMainWindow->resize(800, 600);
        actionDataInput = new QAction(DemoMainWindow);
        actionDataInput->setObjectName(QStringLiteral("actionDataInput"));
        actionTaskInformation = new QAction(DemoMainWindow);
        actionTaskInformation->setObjectName(QStringLiteral("actionTaskInformation"));
        actionLoading = new QAction(DemoMainWindow);
        actionLoading->setObjectName(QStringLiteral("actionLoading"));
        centralwidget = new QWidget(DemoMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        openGLWidget = new CustomGLWidget(centralwidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));

        gridLayout->addWidget(openGLWidget, 0, 0, 1, 1);

        DemoMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DemoMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_Option = new QMenu(menubar);
        menu_Option->setObjectName(QStringLiteral("menu_Option"));
        menu_About = new QMenu(menubar);
        menu_About->setObjectName(QStringLiteral("menu_About"));
        menu_window = new QMenu(menubar);
        menu_window->setObjectName(QStringLiteral("menu_window"));
        DemoMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DemoMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DemoMainWindow->setStatusBar(statusbar);
        dock_TaskInformation = new QDockWidget(DemoMainWindow);
        dock_TaskInformation->setObjectName(QStringLiteral("dock_TaskInformation"));
        dock_TaskInformation->setLayoutDirection(Qt::LeftToRight);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockWidgetContents->setLayoutDirection(Qt::LeftToRight);
        dock_TaskInformation->setWidget(dockWidgetContents);
        DemoMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dock_TaskInformation);
        dock_Loading = new QDockWidget(DemoMainWindow);
        dock_Loading->setObjectName(QStringLiteral("dock_Loading"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        dock_Loading->setWidget(dockWidgetContents_4);
        DemoMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dock_Loading);
        dock_InputOption = new QDockWidget(DemoMainWindow);
        dock_InputOption->setObjectName(QStringLiteral("dock_InputOption"));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QStringLiteral("dockWidgetContents_5"));
        dock_InputOption->setWidget(dockWidgetContents_5);
        DemoMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dock_InputOption);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Option->menuAction());
        menubar->addAction(menu_window->menuAction());
        menubar->addAction(menu_About->menuAction());

        retranslateUi(DemoMainWindow);

        QMetaObject::connectSlotsByName(DemoMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DemoMainWindow)
    {
        DemoMainWindow->setWindowTitle(QApplication::translate("DemoMainWindow", "MainWindow", nullptr));
        actionDataInput->setText(QApplication::translate("DemoMainWindow", "DataInput", nullptr));
        actionTaskInformation->setText(QApplication::translate("DemoMainWindow", "TaskInformation", nullptr));
        actionLoading->setText(QApplication::translate("DemoMainWindow", "Loading", nullptr));
        menu_File->setTitle(QApplication::translate("DemoMainWindow", "&File", nullptr));
        menu_Option->setTitle(QApplication::translate("DemoMainWindow", "&Option", nullptr));
        menu_About->setTitle(QApplication::translate("DemoMainWindow", "&About", nullptr));
        menu_window->setTitle(QApplication::translate("DemoMainWindow", "&window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DemoMainWindow: public Ui_DemoMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOMAINWINDOW_H
