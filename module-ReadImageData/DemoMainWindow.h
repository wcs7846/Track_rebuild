#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
// Qt library
#include <QPainter>
#include <QImage>
#include <QVector>
// Qt OpenGL
#include <customglwidget.h>
// module UI page
#include <module_dataInput.h>
#include <module_loadingstatus.h>
#include <module_TaskInformation.h>

// opencv library
#include <opencv2/highgui.hpp>

namespace Ui {
class DemoMainWindow;
}

class DemoMainWindow : public QMainWindow
{
    Q_OBJECT
    QThread LoadData_Thread;

public:
    explicit DemoMainWindow(QWidget *parent = 0);
    ~DemoMainWindow();

    // opengl module
    QOpenGLContext* m_content;

    // data storage
    QVector<cv::Mat> RawImage;

private:
    Ui::DemoMainWindow *ui;
    // module
    module_dataInput*       m_InputOption;
    module_loadingStatus*   m_loadingStatus;
    module_TaskInformation* m_TaskInformation;
    // vector module
    QVector<module_TaskInformation*> QVec_TaskInformation;
    unsigned int order_Task;

    // action
    QAction* action_InputOption;
    QAction* action_loadingStatus;
    QAction* action_TaskInformation;

    // boot animation
    QImage* boot_animation;

    LoadData* work_loadData;
private slots:
    void from_datainput_add(QStringList);

};

// Load Thread: used to load the image data
class LoadData : public QObject
{
    Q_OBJECT
    QThread LoadData_Thread;

public slots:
    void Load_sequence(const QStringList fn){
        // load all the file in the list
        //
        emit loadfinished();
    }

signals:
    void loadfinished();
};

#endif // MAINWINDOW_H
