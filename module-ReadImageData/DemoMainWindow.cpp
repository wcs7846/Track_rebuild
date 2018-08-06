#include "DemoMainWindow.h"
#include "ui_DemoMainWindow.h"

DemoMainWindow::DemoMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DemoMainWindow)
{
    ui->setupUi(this);

    // setting the dock widget
    this->m_InputOption     = new module_dataInput(ui->dock_InputOption);
    this->m_loadingStatus   = new module_loadingStatus(ui->dock_Loading);
    this->m_TaskInformation = new module_TaskInformation(ui->dock_TaskInformation);

    ui->dock_InputOption->setWidget(m_InputOption);
    ui->dock_Loading->setWidget(m_loadingStatus);
    ui->dock_TaskInformation->setWidget(m_TaskInformation);

    action_InputOption     = ui->dock_InputOption->toggleViewAction();
    action_loadingStatus   = ui->dock_Loading->toggleViewAction();
    action_TaskInformation = ui->dock_TaskInformation->toggleViewAction();
    ui->menu_window->addAction(action_InputOption);
    action_InputOption->setText("InputOption");
    ui->menu_window->addAction(action_loadingStatus);
    action_loadingStatus->setText("LoadingStatus");
    ui->menu_window->addAction(action_TaskInformation);
    action_TaskInformation->setText("TaskInformation");

    // boot animation
    boot_animation = new QImage("timg.jpg");

}

DemoMainWindow::~DemoMainWindow()
{
    delete ui;
}

// function implementation
//void DemoMainWindow::paintEvent(QPaintEvent *event)
//{
//    QPainter painter;
//    painter.begin(ui->openGLWidget);
//    painter.setRenderHint(QPainter::Antialiasing);
//    painter.drawImage(event->rect(), *this->boot_animation, QRectF(0.0, 0.0, 640.0, 512.0));
//    painter.drawText(100,100,"helloworld");
////    paint(&painter, event, elapsed);
//    painter.end();
//}


