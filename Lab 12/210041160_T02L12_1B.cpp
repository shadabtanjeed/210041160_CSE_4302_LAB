#include <iostream>
#include <algorithm>

#define MAX 100

using namespace std;

template <class Type>

class my_stack
{
private:
    Type array[MAX];
    int top;
    int size;

public:
    my_stack()
    {
        top = -1;
        size = 0;
    }

    void push(Type object)
    {
        if (size == MAX)
        {
            cout << "stack already full" << endl;
        }

        else
        {
            top++;
            array[top] = object;
            size++;
        }
    }

    Type pop()
    {
        if (size == 0)
        {
            cout << "stack empty" << endl;
            return 0;
        }

        else
        {
            Type object = array[top];
            top--;
            size--;
            return object;
        }
    }

    Type peek()
    {
        if (size == 0)
        {
            cout << "stack empty" << endl;
            return 0;
        }

        else
        {
            return array[top];
        }
    }
};

int main()
{
    cout << "integer type" << endl;
    my_stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout << s1.peek() << endl;
    s1.pop();
    cout << s1.peek() << endl;
    s1.pop();
    cout << s1.peek() << endl;
    s1.pop();

    cout << "float type" << endl;
    my_stack<float> s2;
    s2.push(1.5);
    s2.push(2.5);
    s2.push(3.5);
    cout << s2.peek() << endl;
    s2.pop();
    cout << s2.peek() << endl;
    s2.pop();
    cout << s2.peek() << endl;
    s2.pop();

    cout << "char type" << endl;
    my_stack<char> s3;
    s3.push('a');
    s3.push('b');
    s3.push('c');
    cout << s3.peek() << endl;
    s3.pop();
    cout << s3.peek() << endl;
    s3.pop();
    cout << s3.peek() << endl;
    s3.pop();
    s3.pop();

    return 0;
}