#include <iostream>

using namespace std;

class Counter
{
private:
    int count;
    int incrementStep;

public:
    Counter(int step_val = 1)
    {
        if (step_val < 1)
        {
            cout << "Negative Number not Allowed" << endl;
            incrementStep = 1;
        }
        else
        {
            incrementStep = step_val;
        }
        count = 0;
    }

    void setIncrementStep(int step_val)
    {
        if (step_val >= 1)
        {
            incrementStep = step_val;
        }

        else
            cout << "Negative Number not allowed" << endl;
    }

    int getCount() const
    {
        return count;
    }

    void increment()
    {
        count += incrementStep;
    }

    void resetCount()
    {
        count = 0;
    }
};

int main()
{

    return 0;
}
