#ifndef EMPLOYEWIDGET_H
#define EMPLOYEWIDGET_H

#include <QWidget>
#include "employe.h"
#include "ui_employewidget.h"

class EmployeWidget : public QWidget {
    Q_OBJECT

public:
    explicit EmployeWidget(QWidget *parent = nullptr);
    ~EmployeWidget();

public slots:
    void updateEmployeeInfo();

private:
    Ui::EmployeWidget ui;
    Employe employeInstance;
};

#endif // EMPLOYEWIDGET_H
