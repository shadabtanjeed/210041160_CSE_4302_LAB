#include <iostream>
#include <algorithm>

#define MAX 3

using namespace std;

template <class Type>

class my_stack
{
private:
    Type array[MAX];
    int top;
    int size;

public:
    class Full
    {
    };

    class Empty
    {
    };

    my_stack()
    {
        top = -1;
        size = 0;
    }

    void push(Type object)
    {
        if (size == MAX)
        {
            throw Full();
        }

        top++;
        array[top] = object;
        size++;
    }

    Type pop()
    {
        if (size == 0)
        {
            throw Empty();
        }

        Type object = array[top];
        top--;
        size--;
        return object;
    }

    Type peek()
    {
        if (size == 0)
        {
            throw Empty();
        }

        return array[top];
    }
};

int main()
{

    // cout << "integer type" << endl;
    // my_stack<int> s1;
    // s1.push(1);
    // s1.push(2);
    // s1.push(3);
    // cout << s1.peek() << endl;
    // s1.pop();
    // cout << s1.peek() << endl;
    // s1.pop();
    // cout << s1.peek() << endl;
    // s1.pop();

    // cout << "float type" << endl;
    // my_stack<float> s2;
    // s2.push(1.5);
    // s2.push(2.5);
    // s2.push(3.5);
    // cout << s2.peek() << endl;
    // s2.pop();
    // cout << s2.peek() << endl;
    // s2.pop();
    // cout << s2.peek() << endl;
    // s2.pop();

    // cout << "char type" << endl;
    // my_stack<char> s3;
    // s3.push('a');
    // s3.push('b');
    // s3.push('c');
    // cout << s3.peek() << endl;
    // s3.pop();
    // cout << s3.peek() << endl;
    // s3.pop();
    // cout << s3.peek() << endl;
    // s3.pop();
    // s3.pop();

    my_stack<int> s4;

    try
    {
        s4.push(1);
        s4.push(2);
        s4.push(3);
        s4.push(4);
    }

    catch (my_stack<int>::Full)
    {
        cout << "stack full" << endl;
    }

    try
    {
        cout << s4.pop() << endl;
        cout << s4.pop() << endl;
        cout << s4.pop() << endl;
        cout << s4.pop() << endl;
    }

    catch (my_stack<int>::Empty)
    {
        cout << "stack empty" << endl;
    }

    try
    {
        s4.peek();
    }

    catch (my_stack<int>::Empty)
    {
        cout << "stack empty" << endl;
    }

    return 0;
}