#include <iostream>
#include <algorithm>

using namespace std;

template <class Type>

Type amx(Type *array, int size, int n)
{
    sort(array, array + size);

    // for (int i = 0; i < size; i++)
    // {
    //     cout << array[i] << " ";
    // }

    // cout << endl;

    if (n > size)
    {
        cout << "array index out of bounds" << endl;
        return 0;
    }

    else
    {
        return array[size - n];
    }
}

int main()
{

    int array[6] = {95, 13, 2, 7, 90, 67};
    cout << amx(array, 6, 3) << endl;

    float array2[6] = {91.3, 22.58, 3.14, 7.8, 90.1, 67.2};
    cout << amx(array2, 6, 3) << endl;

    return 0;
}