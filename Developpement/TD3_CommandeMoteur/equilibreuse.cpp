#include "equilibreuse.h"
#include "ui_equilibreuse.h"
#include <QMessageBox>

Equilibreuse::Equilibreuse(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Equilibreuse)
{
    ui->setupUi(this);
    leCapot= new Capot(laCarte,0, this);
    connect(leCapot, &Capot::EtatCapotChange, this, &Equilibreuse::onCapot_EtatCapotChange);
    ui->statusbar->addPermanentWidget(&labelEtatCapot);
    QMessageBox msg;
}

Equilibreuse::~Equilibreuse()
{
    delete ui;
}

void Equilibreuse::onCapot_EtatCapotChange(bool _etat)
{
    QPalette palette;
        labelEtatCapot.setAutoFillBackground(true);
        if(_etat)
        {
            palette.setColor(QPalette::WindowText,Qt::black);
            labelEtatCapot.setPalette(palette);
            labelEtatCapot.setText("| Capot ..... |");
        }
        else
        {
            palette.setColor(QPalette::WindowText,Qt::red);
            labelEtatCapot.setPalette(palette);
            labelEtatCapot.setText("| Capot ..... |");
        }
}

