#include "module_dataInput.h"
#include "ui_module_datainput.h"
// Qt library
#include <QSettings>
#include <QString>
#include <QFileDialog>
// global variant
QSettings PathSetting("Setting.ini", QSettings::IniFormat);
QString DefaultPath = ".";

module_dataInput::module_dataInput(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::module_dataInput)
{
    ui->setupUi(this);

    // connect
    connect(ui->Button_selectImage, SIGNAL(clicked(bool)), this, SLOT(load_image()));
    connect(ui->Button_selectFolder, SIGNAL(clicked(bool)), this, SLOT(load_fold()));

}

module_dataInput::~module_dataInput()
{
    delete ui;
}

// function implementation
void module_dataInput::load_image()
{
    DefaultPath = PathSetting.value("datapath").toString();
    QStringList fileName = QFileDialog::getOpenFileNames(this,
                                                        tr("Open image"),DefaultPath,
                                                        tr("Image files (*.jpg *.bmp *.png)"));
    this->address = fileName;
    if (fileName.size() > 0) {
        QString t = fileName[0];
        int index = t.lastIndexOf('/');
        DefaultPath = t.mid(0,index);
        PathSetting.setValue("datapath", DefaultPath);
    }
}

void module_dataInput::load_fold()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "/home",
                                                    QFileDialog::ShowDirsOnly
                                                    | QFileDialog::DontResolveSymlinks);
}
