#include "weight.h"

int main()
{
    Weight demo1;

    demo1 = Weight(50.00);
    demo1.showWeight();

    double temp = (demo1);
    cout << "Weight in kg: " << temp << endl;

    demo1 = Weight(40, 1.5);
    demo1.showWeight();

    return 0;
}
