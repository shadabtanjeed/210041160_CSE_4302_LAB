#include "zooanimal.h"

int main()
{
    ZooAnimal Lion("Lion", 1990, 15, 50.5, 2);
    ZooAnimal Tiger("Tiger", 1995, 15, 45, 2);
    ZooAnimal Deer1("Deer1", 1990, 15, 25, 2);
    ZooAnimal Deer2("Deer2", 1990, 15, 25, 2);

    Lion.showInfo();

    Lion += 2;

    Lion.showInfo();

    Lion -= 2;

    Lion.showInfo();

    if (Deer1 == Deer2)
        cout << "True" << endl;

    else
        cout << "False" << endl;

    if (Lion > Tiger)
        cout << "True" << endl;

    else
        cout << "False" << endl;

    if (Lion < Tiger)
        cout << "True" << endl;

    else
        cout << "False" << endl;
}
