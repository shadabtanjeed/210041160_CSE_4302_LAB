#ifndef ZOOANIMAL_H
#define ZOOANIMAL_H

#include <iostream>

using namespace std;

class ZooAnimal
{
private:
    string nameOfAnimal;
    int birthYear;
    int cageNumber;
    float weightData;
    int height;

public:
    ZooAnimal(string name, int birth, int cage, float weight, int hght)
        : nameOfAnimal(name), birthYear(birth), cageNumber(cage), weightData(weight), height(hght) {}

    bool operator>(ZooAnimal &z2)
    {
        if (weightData > z2.weightData)
            return true;

        else
            return false;
    }

    bool operator<(ZooAnimal &z2)
    {
        if (weightData < z2.weightData)
            return true;

        else
            return false;
    }

    bool operator>=(ZooAnimal &z2)
    {
        if (weightData >= z2.weightData)
            return true;

        else
            return false;
    }

    bool operator<=(ZooAnimal &z2)
    {
        if (weightData <= z2.weightData)
            return true;

        else
            return false;
    }

    bool operator==(ZooAnimal &z2)
    {
        if (weightData == z2.weightData)
            return true;

        else
            return false;
    }

    bool operator!=(ZooAnimal &z2)
    {
        if (weightData != z2.weightData)
            return true;

        else
            return false;
    }

    ZooAnimal operator+=(int value)
    {
        weightData += value;
        return *this;
    }

    ZooAnimal operator-=(int value)
    {
        weightData -= value;
        return *this;
    }

    void showInfo()
    {
        cout << "Name: " << nameOfAnimal << endl;
        cout << "Birth Year: " << birthYear << endl;
        cout << "Cage Number: " << cageNumber << endl;
        cout << "Weight: " << weightData << endl;
        cout << "Height: " << height << endl;
        cout << endl;
    }
};

#endif // ZOOANIMAL_H
