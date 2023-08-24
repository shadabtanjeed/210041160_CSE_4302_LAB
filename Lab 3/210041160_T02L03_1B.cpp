#include <iostream>

using namespace std;

class RationalNumber
{
private:
    int numerator;
    int denominator;

public:
    void assign(int x, int y)
    {
        if (y == 0)
            cout << "ERROR" << endl;

        else
        {
            numerator = x;
            denominator = y;
        }
    }

    double convert()
    {
        double num = numerator;
        double den = denominator;
        return (num / den);
    }

    void invert()
    {
        if (numerator == 0)
        {
            cout << "ERROR" << endl;
        }

        else
        {
            int temp = numerator;
            numerator = denominator;
            denominator = temp;
        }
    }

    void print()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    RationalNumber r1;

    int options = 1;

    while (1)
    {
        cin >> options;

        if (options == -1)
            break;

        else
        {
            switch (options)
            {
            case 1:
                int num, den;
                cout << "Enter numerator: ";
                cin >> num;
                cout << "Enter denominator: ";
                cin >> den;
                r1.assign(num, den);
                break;

            case 2:
                cout << r1.convert() << endl;
                break;

            case 3:
                r1.invert();
                break;

            case 4:
                r1.print();
                break;

            default:
                break;
            }
        }
    }

    return 0;
}