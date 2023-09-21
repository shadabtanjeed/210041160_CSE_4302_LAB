#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

#include <iostream>
using namespace std;

class RationalNumber
{
private:
    int numerator;
    int denominator;

public:
    RationalNumber(int num, int denom) : numerator(num), denominator(denom)
    {
        if (denominator == 0)
        {
            cout << "Error inputting denominator=0" << endl;
            exit(0);
        }
    }

    int getNumerator() const
    {
        return numerator;
    }

    int getDenominator() const
    {
        return denominator;
    }

    void setNumerator(int num)
    {
        numerator = num;
    }

    void setDenominator(int denom)
    {
        if (denominator == 0)
        {
            cout << "Error inputting denominator=0" << endl;
            exit(0);
        }

        denominator = denom;
    }

    double toDecimal() const
    {
        double num = numerator;
        double den = denominator;

        return num / den;
    }

    void invert()
    {
        if (numerator != 0)
        {
            swap(numerator, denominator);
        }

        else
        {
            cout << "Denominator of the inverted fraction cannot be zero" << endl;
            exit(0);
        }
    }

    RationalNumber operator+(const RationalNumber &other) const
    {
        int newNumerator = (numerator * other.denominator) + (other.numerator * denominator);
        int newDenominator = denominator * other.denominator;
        return RationalNumber(newNumerator, newDenominator);
    }

    RationalNumber operator-(const RationalNumber &other) const
    {
        int newNumerator = (numerator * other.denominator) - (other.numerator * denominator);
        int newDenominator = denominator * other.denominator;
        return RationalNumber(newNumerator, newDenominator);
    }

    RationalNumber operator*(const RationalNumber &other) const
    {
        int newNumerator = numerator * other.numerator;
        int newDenominator = denominator * other.denominator;
        return RationalNumber(newNumerator, newDenominator);
    }

    RationalNumber operator/(const RationalNumber &other) const
    {
        if (other.numerator == 0)
        {
            cout << "Error: Division by 0 is not possible" << endl;
            exit(0);
        }

        int newNumerator = numerator * other.denominator;
        int newDenominator = denominator * other.numerator;
        return RationalNumber(newNumerator, newDenominator);
    }

    void printFraction() const
    {
        cout << numerator << "/" << denominator;
        cout << endl;
    }
};

#endif // RATIONALNUMBER_H
