#ifndef EQUILIBREUSE_H
#define EQUILIBREUSE_H

#include "capot.h"
#include "moteur.h"
#include <QLabel>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Equilibreuse; }
QT_END_NAMESPACE

class Equilibreuse : public QMainWindow
{
    Q_OBJECT

public:
    Equilibreuse(QWidget *parent = nullptr);
    ~Equilibreuse();
public slots:
    void onCapot_EtatCapotChange(bool _etat);

private:
    Ui::Equilibreuse *ui;
    QLabel labelEtatCapot;
    Capot *leCapot;
    Moteur *leMoteur;
    MccUldaq laCarte;


};
#endif // EQUILIBREUSE_H
