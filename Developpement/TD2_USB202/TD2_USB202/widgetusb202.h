#ifndef WIDGETUSB202_H
#define WIDGETUSB202_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class WidgetUSB202; }
QT_END_NAMESPACE

class WidgetUSB202 : public QWidget
{
    Q_OBJECT

public:
    WidgetUSB202(QWidget *parent = nullptr);
    ~WidgetUSB202();

private slots:
    void on_checkBox_LED1_stateChanged(int arg1);

    void on_checkBox_LED2_stateChanged(int arg1);

    void on_checkBox_LED3_stateChanged(int arg1);

    void on_checkBox_LED4_stateChanged(int arg1);

private:
    Ui::WidgetUSB202 *ui;
};
#endif // WIDGETUSB202_H
