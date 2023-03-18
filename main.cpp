#include "stdafx.h"
#include "StartMenu.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StartMenu w;
    w.show();
    return a.exec();
}
