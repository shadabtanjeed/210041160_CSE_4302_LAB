#include <stdio.h>

using namespace std;

class TwoDimensionalShape
{
public:
    double sides;
};

class Triangle : public TwoDimensionalShape
{
private:
    double side1;
    double side2;
    double side3;
    double area;
    double perimeter;

public:
    Triangle(double a, double b, double c) : side1(a), side2(b), side3(c)
    {
        sides = 3;
    }
};

class Rectangle : public TwoDimensionalShape
{

private:
    double length;
    double breadth;
    double area;
    double perimeter;

public:
    Rectangle(double l, double b) : length(l), breadth(b)
    {
        sides = 4;
    }
};

class Square : public TwoDimensionalShape
{
private:
    double length;
    double area;
    double perimeter;

public:
    Square(double s) : length(s)
    {
        sides = 4;
    }
};

class Hexagon : public TwoDimensionalShape
{
private:
    double length;
    double area;
    double perimeter;

public:
    Hexagon(double s) : length(s)
    {
        sides = 6;
    }
};

int main()
{
    TwoDimensionalShape *t[8];

    t[0] = new Triangle(3, 4, 5);
    t[1] = new Triangle(6, 7, 9);

    t[2] = new Rectangle(5, 4);
    t[3] = new Rectangle(10, 6);

    t[4] = new Square(5);
    t[5] = new Square(8);

    t[6] = new Hexagon(3);
    t[7] = new Hexagon(5);
}