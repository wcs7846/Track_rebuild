#ifndef MODULE_PREVIEW_H
#define MODULE_PREVIEW_H

#include <QWidget>

namespace Ui {
class module_TaskInformation;
}

class module_TaskInformation : public QWidget
{
    Q_OBJECT

public:
    explicit module_TaskInformation(QWidget *parent = 0);
    ~module_TaskInformation();


private:
    Ui::module_TaskInformation *ui;

};

#endif // MODULE_PREVIEW_H
