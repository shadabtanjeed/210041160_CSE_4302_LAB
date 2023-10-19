#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
    Manager manager("Raiyan", "M001", 0, true);

    Engineer engineer("Ifti", "E001", 0, true);

    Designer designer("Nuh", "D001", 0, true);

    manager.present.SetCity("Dhaka");

    cout << manager.present.GetCity() << endl;

    return 0;
}
