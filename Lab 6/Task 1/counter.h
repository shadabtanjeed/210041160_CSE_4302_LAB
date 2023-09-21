#ifndef COUNTER_H
#define COUNTER_H

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

    Counter operator+(Counter &c2)
    {
        Counter temp;
        temp.count = count + c2.count;
        temp.incrementStep = max(incrementStep, c2.incrementStep);
        return temp;
    }

    bool operator>(Counter &c2)
    {
        if (count > c2.count)
            return true;

        else
            return false;
    }

    bool operator<(Counter &c2)
    {
        if (count < c2.count)
            return true;

        else
            return false;
    }

    bool operator>=(Counter &c2)
    {
        if (count >= c2.count)
            return true;

        else
            return false;
    }

    bool operator<=(Counter &c2)
    {
        if (count <= c2.count)
            return true;

        else
            return false;
    }

    bool operator==(Counter &c2)
    {
        if (count == c2.count)
            return true;

        else
            return false;
    }

    bool operator!=(Counter &c2)
    {
        if (count != c2.count)
            return true;

        else
            return false;
    }

    Counter &operator+=(const Counter &c2)
    {
        count += c2.count;
        incrementStep = max(incrementStep, c2.incrementStep);
        return *this;
    }

    Counter &operator=(const Counter &c2)
    {

        count = c2.count;
        incrementStep = c2.incrementStep;
        return *this;
    }

    Counter operator++(int)
    {
        Counter temp(*this);
        count += incrementStep;
        return temp;
    }

    Counter &operator++()
    {
        count += incrementStep;
        return *this;
    }
};

#endif // COUNTER_H
