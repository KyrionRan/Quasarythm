#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_StartMenu.h"

class StartMenu : public QMainWindow
{
    Q_OBJECT

public:
    StartMenu(QWidget *parent = nullptr);
    ~StartMenu();

private:
    Ui::StartMenuClass ui;
};
