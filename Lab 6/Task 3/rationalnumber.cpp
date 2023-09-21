#include "rationalnumber.h"

int main()
{
    RationalNumber R1(3, 4);
    RationalNumber R2(4, 5);
    RationalNumber R3(2, 5);

    R1.invert();
    R1.printFraction();

    cout << R1.toDecimal() << endl;

    RationalNumber result1 = R2 + R3;
    RationalNumber result2 = R2 - R3;
    RationalNumber result3 = R2 * R3;
    RationalNumber result4 = R2 / R3;

    cout << "R2 + R3 = ";
    result1.printFraction();
    cout << "R2 - R3 = ";
    result2.printFraction();
    cout << "R2 * R3 = ";
    result3.printFraction();
    cout << "R2 / R3 = ";
    result4.printFraction();

    return 0;
}
