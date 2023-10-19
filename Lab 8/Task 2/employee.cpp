#include "employee.h"

int main()
{
    Employee emp("Reza", "E001", true);
    Manager manager("Kibria", "M001", true);
    Engineer engineer("Mosleh", "E002", true);
    Designer designer("Habib", "D001", true);

    cout << "Employee Information:" << endl;
    cout << "Name: " << emp.GetName() << endl;
    cout << "Employee ID: " << emp.Getemp_id() << endl;
    cout << "Monthly Salary: " << emp.Getmonthly_salary() << endl;
    cout << "Yearly Income: " << emp.yearlyIncome() << endl;
    cout << "On Duty: " << (emp.GetonDuty() ? "Yes" : "No") << endl;

    cout << "\nManager Information:" << endl;
    cout << "Name: " << manager.GetName() << endl;
    cout << "Employee ID: " << manager.Getemp_id() << endl;
    cout << "Monthly Salary: " << manager.Getmonthly_salary() << endl;
    cout << "Yearly Income: " << manager.yearlyIncome() << endl;
    cout << "On Duty: " << (manager.GetonDuty() ? "Yes" : "No") << endl;

    cout << "\nEngineer Information:" << endl;
    cout << "Name: " << engineer.GetName() << endl;
    cout << "Employee ID: " << engineer.Getemp_id() << endl;
    cout << "Monthly Salary: " << engineer.Getmonthly_salary() << endl;
    cout << "Yearly Income: " << engineer.yearlyIncome() << endl;
    cout << "On Duty: " << (engineer.GetonDuty() ? "Yes" : "No") << endl;

    cout << "\nDesigner Information:" << endl;
    cout << "Name: " << designer.GetName() << endl;
    cout << "Employee ID: " << designer.Getemp_id() << endl;
    cout << "Monthly Salary: " << designer.Getmonthly_salary() << endl;
    cout << "Yearly Income: " << designer.yearlyIncome() << endl;
    cout << "On Duty: " << (designer.GetonDuty() ? "Yes" : "No") << endl;

    return 0;
}
