#include "counter.h"

int main()
{
    Counter c1, c2, c3;
    c1.setIncrementStep(5);
    c2.setIncrementStep(6);
    c3.setIncrementStep(7);

    c1.increment();
    c2.increment();
    c3.increment();

    cout << c1.getCount() << endl;
    cout << c2.getCount() << endl;
    cout << c3.getCount() << endl;

    c1 = c2 + c3;
    c1.increment();

    cout << c1.getCount() << endl;

    c1.resetCount();
    cout << c1.getCount() << endl;

    if (c1 <= c2)
        cout << "True" << endl;

    else
        cout << "False" << endl;

    c1.increment();
    cout << c1.getCount() << endl;

    if (c1 == c2)
        cout << "True" << endl;

    else
        cout << "False" << endl;

    c1.increment();
    cout << c1.getCount() << endl;

    if (c1 >= c2)
        cout << "True" << endl;

    else
        cout << "False" << endl;

    c1.resetCount();
    cout << c1.getCount() << endl;
    c1 += c2;

    cout << c1.getCount() << endl;

    c1 = c2;
    c1.increment();
    cout << c1.getCount() << endl;

    c1++;
    c1.increment();
    cout << c1.getCount() << endl;

    ++c1;
    c1.increment();
    cout << c1.getCount() << endl;
}
