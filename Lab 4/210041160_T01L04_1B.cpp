#include <iostream>

using namespace std;

class Calculator
{
private:
    int current_integer;

public:
    Calculator()
    {
        current_integer = 0;
    }

    Calculator(int value)
    {
        current_integer = value;
    }

    int getValue()
    {
        return current_integer;
    }

    void setValue(int val)
    {
        current_integer = val;
    }

    void add(int Value)
    {
        current_integer += Value;
        display();
    }

    void subtract(int Value)
    {
        if (Value <= current_integer)
            current_integer = current_integer - Value;

        else
            cout << "Error" << endl;

        display();
    }

    void multiply(int Value)
    {
        current_integer = Value * current_integer;
        display();
    }

    void divideBy(int Value)
    {
        if (Value == 0)
            cout << "Error : divide by 0 is undefined." << endl;

        else
            current_integer = current_integer / Value;

        display();
    }

    void clear()
    {
        current_integer = 0;
        display();
    }

    void display()
    {
        cout << "Calculator Display: " << current_integer << endl;
    }

    ~Calculator()
    {
        cout << "Calculator Object is destroyed" << endl;
    }
};

int main()
{
    Calculator c1;

    /*
    Calculator c2(10);
    cout << c2.getValue() << endl;
    */

    c1.setValue(5);

    cout << c1.getValue() << endl;

    c1.setValue(0);

    c1.add(10);
    c1.add(7);
    c1.multiply(31);
    c1.subtract(42);
    c1.divideBy(7);
    c1.divideBy(0);
    c1.add(3);
    c1.subtract(1);
    c1.clear();
}
