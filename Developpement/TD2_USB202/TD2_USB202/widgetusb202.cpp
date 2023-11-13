#include "widgetusb202.h"
#include "ui_widgetusb202.h"

WidgetUSB202::WidgetUSB202(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WidgetUSB202)
{
    ui->setupUi(this);
}

WidgetUSB202::~WidgetUSB202()
{
    delete ui;
}


void WidgetUSB202::on_checkBox_LED1_stateChanged(int arg1)
{

}


void WidgetUSB202::on_checkBox_LED2_stateChanged(int arg1)
{

}


void WidgetUSB202::on_checkBox_LED3_stateChanged(int arg1)
{

}


void WidgetUSB202::on_checkBox_LED4_stateChanged(int arg1)
{

}

