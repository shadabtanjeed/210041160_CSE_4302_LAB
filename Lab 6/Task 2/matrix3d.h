#ifndef MATRIX3D_H
#define MATRIX3D_H

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Matrix3D
{
private:
    vector<vector<double>> matrix;

public:
    Matrix3D()
    {
        matrix = vector<vector<double>>(3, vector<double>(3, 0.0));
    }

    Matrix3D(vector<vector<double>> values)
    {

        matrix = values;
    }

    ~Matrix3D() {}

    double det() const
    {
        double result = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
                        matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
                        matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

        return result;
    }

    Matrix3D inverse() const
    {
        double determinant = det();

        Matrix3D inverse;
        inverse.matrix[0][0] = (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) / determinant;
        inverse.matrix[0][1] = (matrix[0][2] * matrix[2][1] - matrix[0][1] * matrix[2][2]) / determinant;
        inverse.matrix[0][2] = (matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1]) / determinant;
        inverse.matrix[1][0] = (matrix[1][2] * matrix[2][0] - matrix[1][0] * matrix[2][2]) / determinant;
        inverse.matrix[1][1] = (matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0]) / determinant;
        inverse.matrix[1][2] = (matrix[0][2] * matrix[1][0] - matrix[0][0] * matrix[1][2]) / determinant;
        inverse.matrix[2][0] = (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]) / determinant;
        inverse.matrix[2][1] = (matrix[0][1] * matrix[2][0] - matrix[0][0] * matrix[2][1]) / determinant;
        inverse.matrix[2][2] = (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]) / determinant;

        return inverse;
    }

    Matrix3D operator+(const Matrix3D &matrix2) const
    {
        Matrix3D result;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                result.matrix[i][j] = matrix[i][j] + matrix2.matrix[i][j];
            }
        }
        return result;
    }

    Matrix3D operator-(const Matrix3D &matrix2) const
    {
        Matrix3D result;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                result.matrix[i][j] = matrix[i][j] - matrix2.matrix[i][j];
            }
        }
        return result;
    }

    Matrix3D operator*(const Matrix3D &matrix2) const
    {
        Matrix3D result;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    result.matrix[i][j] += matrix[i][k] * matrix2.matrix[k][j];
                }
            }
        }
        return result;
    }

    void printMatrix() const
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

#endif // MATRIX3D_H
