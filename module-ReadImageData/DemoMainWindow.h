#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
// Qt library
#include <QPainter>
#include <QImage>
// Qt OpenGL
#include <customglwidget.h>
// module UI page
#include <module_dataInput.h>
#include <module_loadingstatus.h>
#include <module_TaskInformation.h>

namespace Ui {
class DemoMainWindow;
}

class DemoMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DemoMainWindow(QWidget *parent = 0);
    ~DemoMainWindow();

    // opengl module
    QOpenGLContext* m_content;

private:
    Ui::DemoMainWindow *ui;
    // module
    module_dataInput*       m_InputOption;
    module_loadingStatus*   m_loadingStatus;
    module_TaskInformation* m_TaskInformation;

    // action
    QAction* action_InputOption;
    QAction* action_loadingStatus;
    QAction* action_TaskInformation;

    // boot animation
    QImage* boot_animation;


};

#endif // MAINWINDOW_H
