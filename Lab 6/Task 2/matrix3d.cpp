#include "matrix3d.h"

using namespace std;

int main()
{
    vector<vector<double>> values1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<double>> values2 = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    Matrix3D mat1(values1);
    Matrix3D mat2(values2);

    Matrix3D matrix3 = mat1 + mat2;
    cout << "Sum:" << endl;
    matrix3.printMatrix();
    cout << endl;

    matrix3 = mat1 - mat2;
    cout << "Difference:" << endl;
    matrix3.printMatrix();
    cout << endl;

    matrix3 = mat1 * mat2;
    cout << "Product:" << endl;
    matrix3.printMatrix();
    cout << endl;

    matrix3.inverse();
    cout << "Inverse:" << endl;
    matrix3.printMatrix();
    cout << endl;
}
