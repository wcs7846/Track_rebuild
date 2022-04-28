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
    this->m_TaskInformation = new module_TaskInformation();

    // initialization
    QVec_TaskInformation.resize(1);
    QVec_TaskInformation[0] = this->m_TaskInformation;
    this->order_Task = 0;

    // initialization - setting the thread
    work_loadData = new LoadData;
//    work_loadData->moveToThread(LoadData_Thread);

    ui->dock_InputOption->setWidget(m_InputOption);
    ui->dock_Loading->setWidget(m_loadingStatus);
    action_InputOption   = ui->dock_InputOption->toggleViewAction();
    action_loadingStatus = ui->dock_Loading->toggleViewAction();

    // menu button
    ui->menu_window->addAction(action_InputOption);
    action_InputOption->setText("InputOption");
    ui->menu_window->addAction(action_loadingStatus);
    action_loadingStatus->setText("LoadingStatus");

    // boot animation
    boot_animation = new QImage("timg.jpg");

    // connect
    connect(this->m_InputOption, SIGNAL(module_dataInput::add_Task(QStringList)), this, SLOT(from_datainput_add(QStringList)));
}

DemoMainWindow::~DemoMainWindow()
{
    delete ui;
}

// SLOT:
//void DemoMainWindow::from_datainput_add()
//{
//    this->order_Task++;
//    // start the loading-thread to load all the image

//}


