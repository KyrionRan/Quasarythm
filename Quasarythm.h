#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Quasarythm.h"

class Quasarythm : public QMainWindow
{
    Q_OBJECT

public:
    Quasarythm(QWidget *parent = Q_NULLPTR);

private:
    Ui::QuasarythmClass ui;
};
