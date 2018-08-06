#ifndef MODULE_LOADINGSTATUS_H
#define MODULE_LOADINGSTATUS_H

#include <QWidget>

namespace Ui {
class module_loadingStatus;
}

class module_loadingStatus : public QWidget
{
    Q_OBJECT

public:
    explicit module_loadingStatus(QWidget *parent = 0);
    ~module_loadingStatus();

private:
    Ui::module_loadingStatus *ui;
};

#endif // MODULE_LOADINGSTATUS_H
