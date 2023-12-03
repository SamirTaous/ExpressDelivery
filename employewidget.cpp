#include "employewidget.h"

EmployeWidget::EmployeWidget(QWidget *parent)
    : QWidget(parent), employeInstance("Default Name", "john@example.com", "Delivery Driver", 40, 80) {
    ui.setupUi(this);

    // Connect UI signals to slots
    connect(ui.updateButton, &QPushButton::clicked, this, &EmployeWidget::updateEmployeeInfo);

    // Display employee information on startup
    updateEmployeeInfo();
}


EmployeWidget::~EmployeWidget() {
    // Destructor implementation, if needed
}

void EmployeWidget::updateEmployeeInfo() {
    employeInstance.set_contact(ui.contactLineEdit->text().toStdString());
    employeInstance.set_role(ui.roleLineEdit->text().toStdString());
    employeInstance.set_heures(ui.hoursSpin->value());
    employeInstance.set_performance(ui.performanceSpin->value());

    ui.idLabel->setText("Employee ID: " + QString::number(employeInstance.getIDemploye()));
    ui.infoLabel->setText(QString::fromStdString(
        "Name: " + employeInstance.getNom() +
        "\nContact: " + employeInstance.getContact() +
        "\nRole: " + employeInstance.getRole() +
        "\nHours: " + std::to_string(employeInstance.getHeures()) +
        "\nPerformance: " + std::to_string(employeInstance.getPerformance())
    ));
}
