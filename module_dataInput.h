#ifndef MODULE_DATAINPUT_H
#define MODULE_DATAINPUT_H

#include <QWidget>

namespace Ui {
class module_dataInput;
}

class module_dataInput : public QWidget
{
    Q_OBJECT

public:
    explicit module_dataInput(QWidget *parent = 0);
    ~module_dataInput();

private:
    Ui::module_dataInput *ui;
    QStringList address; // image filename list
    // private slot
private slots:
    void load_image(void);
    void load_fold(void);

};

#endif // MODULE_DATAINPUT_H
