#include "module_TaskInformation.h"
#include "ui_module_TaskInformation.h"

module_TaskInformation::module_TaskInformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::module_TaskInformation)
{
    ui->setupUi(this);
}

module_TaskInformation::~module_TaskInformation()
{
    delete ui;
}
