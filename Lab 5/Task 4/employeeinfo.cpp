#include "employeeinfo.h"

int main()
{
    EmployeeInfo employee1;

    employee1.setInfo("Shadab", "10 February 2020", 45000);

    cout << "Employee Info:" << endl;
    employee1.getInfo();

    employee1.setInfo("Tanjeed", "05 November 2001", 9000);
    cout << "\nEmployee  Info:" << endl;
    employee1.getInfo();

    return 0;
}
