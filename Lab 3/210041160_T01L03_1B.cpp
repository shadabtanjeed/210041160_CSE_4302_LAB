#include <iostream>

using namespace std;

class Counter
{
private:
    int count;
    int increamentValue;

public:
    void setIncreamentStep(int step_val)
    {
        increamentValue = step_val;
    }

    int getCount()
    {
        return count;
    }

    void increament()
    {
        count += increamentValue;
    }

    void resetCount()
    {
        count = 0;
    }
};

int main()
{
    Counter c1;
    int options = 1, increamentStep;

    while (1)
    {
        cin >> options;

        if (options == -1)
            break;

        switch (options)
        {
        case 1:
            cin >> increamentStep;
            c1.setIncreamentStep(increamentStep);
            break;

        case 2:
            cout << c1.getCount() << endl;
            break;

        case 3:
            c1.increament();
            break;

        case 4:
            c1.resetCount();
            break;

        default:
            break;
        }
    }
    return 0;
}