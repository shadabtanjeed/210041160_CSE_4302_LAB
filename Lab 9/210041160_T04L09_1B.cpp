#include <iostream>
#include <cmath>

using namespace std;

class TwoDimensionalShape
{
public:
    virtual double getPerimeter() = 0;
    virtual double getArea() = 0;
    virtual void setColor() = 0;
    virtual void ShapeDetails() = 0;
};

class Triangle : public TwoDimensionalShape
{
private:
    double side1;
    double side2;
    double side3;
    string color;

public:
    Triangle(double a, double b, double c) : side1(a), side2(b), side3(c)
    {
    }

    double getPerimeter()
    {
        return side1 + side2 + side3;
    }

    double getArea()
    {
        double s = getPerimeter() / 2;
        double AreaSquare = s * (s - side1) * (s - side2) * (s - side3);
        return sqrt(AreaSquare);
    }

    void setColor()
    {
        cout << "Set the color: ";
        cin >> color;
    }

    void ShapeDetails()
    {
        cout << "Number of Sides: 3" << endl;
        cout << "Type: Triangle" << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
        cout << "Color: " << color << endl;
    }
};

class Rectangle : public TwoDimensionalShape
{

private:
    double length;
    double breadth;
    string color;

public:
    Rectangle(double l, double b) : length(l), breadth(b)
    {
    }

    double getPerimeter()
    {
        return 2 * (length + breadth);
    }

    double getArea()
    {
        return length * breadth;
    }

    void setColor()
    {
        cout << "Set the color: ";
        cin >> color;
    }

    void ShapeDetails()
    {
        cout << "Number of Sides: 4" << endl;
        cout << "Type: Rectangle" << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
        cout << "Color: " << color << endl;
    }
};

class Square : public TwoDimensionalShape
{
private:
    double length;
    string color;

public:
    Square(double s) : length(s)
    {
    }

    double getPerimeter()
    {
        return 4 * length;
    }

    double getArea()
    {
        return length * length;
    }

    void setColor()
    {
        cout << "Set the color: ";
        cin >> color;
    }

    void ShapeDetails()
    {
        cout << "Number of Sides: 4" << endl;
        cout << "Type: Square" << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
        cout << "Color: " << color << endl;
    }
};

class Hexagon : public TwoDimensionalShape
{
private:
    double length;
    string color;

public:
    Hexagon(double s) : length(s)
    {
    }

    double getPerimeter()
    {
        return 6 * length;
    }

    double getArea()
    {
        return (3 * sqrt(3) * length * length) / 2;
    }

    void setColor()
    {
        cout << "Set the color: ";
        cin >> color;
    }

    void ShapeDetails()
    {
        cout << "Number of Sides: 6" << endl;
        cout << "Type: Hexagon" << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
        cout << "Color: " << color << endl;
    }
};

void sortShapePerimeter(TwoDimensionalShape **shapes, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (shapes[j]->getPerimeter() < shapes[j + 1]->getPerimeter())
            {
                TwoDimensionalShape *temp = shapes[j];
                shapes[j] = shapes[j + 1];
                shapes[j + 1] = temp;
            }
        }
    }
}

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

    for (int i = 0; i < 8; i++)
    {
        t[i]->setColor();
    }

    cout << endl;

    sortShapePerimeter(t, 8);

    for (int i = 0; i < 8; i++)
    {
        t[i]->ShapeDetails();
        cout << endl;
    }
}