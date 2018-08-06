#include "module_loadingstatus.h"
#include "ui_module_loadingstatus.h"

module_loadingStatus::module_loadingStatus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::module_loadingStatus)
{
    ui->setupUi(this);
}

module_loadingStatus::~module_loadingStatus()
{
    delete ui;
}
