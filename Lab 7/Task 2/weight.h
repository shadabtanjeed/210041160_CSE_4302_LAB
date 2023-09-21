#ifndef WEIGHT_H
#define WEIGHT_H

#include <iostream>
using namespace std;

class Weight
{

private:
    const double kgToPound;
    int pound;
    double ounce;

public:
    Weight() : kgToPound(2.20462), pound(0), ounce(0)
    {
    }

    Weight(double kg) : kgToPound(2.20462)
    {
        // kgToPound = 2.20462;
        double temp = kg * kgToPound;
        pound = (int)temp;
        ounce = (temp - (double)pound) * 16;
    }

    Weight(int pound, double ounce) : pound(pound), ounce(ounce), kgToPound(2.20462)
    {
    }

    void showWeight()
    {
        cout << "Pound: " << pound << endl;
        cout << "Ounce: " << ounce << endl;
    }

    operator double()
    {
        double temp = ((double)pound + (ounce / 16)) / kgToPound;
        return temp;
    }
};

#endif