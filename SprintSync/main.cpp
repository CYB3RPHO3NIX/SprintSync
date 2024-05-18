#include "stdafx.h"
#include "SprintSync.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SprintSync w;
    w.show();
    return a.exec();
}
