#include "employewidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EmployeWidget w;
    w.show();
    return a.exec();
}
