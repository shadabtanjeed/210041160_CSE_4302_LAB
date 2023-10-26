#include <iostream>
#include <cmath>

using namespace std;

class TwoDimensionalShape
{
public:
    double sides;
    string type;
    double area;
    double perimeter;
    string color;

    void ShapeDetails()
    {
        cout << "Number of Sides: " << sides << endl;
        cout << "Type: " << type << endl;
        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter << endl;
        cout << "Color: " << color << endl;
    }

    virtual void setColor()
    {
    }
};

class Triangle : public TwoDimensionalShape
{
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double a, double b, double c) : side1(a), side2(b), side3(c)
    {
        sides = 3;
        type = "Triangle";
        setPerimeter();
        setArea();
    }

    void setPerimeter()
    {
        perimeter = side1 + side2 + side3;
    }

    void setArea()
    {
        double s = perimeter / 2;
        double AreaSquare = s * (s - side1) * (s - side2) * (s - side3);
        area = sqrt(AreaSquare);
    }

    void setColor()
    {
        cout << "Set the color: ";
        string input;
        cin >> input;
        color = input;
    }
};

class Rectangle : public TwoDimensionalShape
{

private:
    double length;
    double breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b)
    {
        sides = 4;
        type = "Rectangle";
        setPerimeter();
        setArea();
    }

    void setPerimeter()
    {
        perimeter = 2 * (length + breadth);
    }

    void setArea()
    {
        area = length * breadth;
    }

    void setColor()
    {
        cout << "Set the color: ";
        string input;
        cin >> input;
        color = input;
    }
};

class Square : public TwoDimensionalShape
{
private:
    double length;

public:
    Square(double s) : length(s)
    {
        sides = 4;
        type = "Square";
        setPerimeter();
        setArea();
    }

    void setPerimeter()
    {
        perimeter = 4 * length;
    }

    void setArea()
    {
        area = length * length;
    }

    void setColor()
    {
        cout << "Set the color: ";
        string input;
        cin >> input;
        color = input;
    }
};

class Hexagon : public TwoDimensionalShape
{
private:
    double length;

public:
    Hexagon(double s) : length(s)
    {
        sides = 6;
        type = "Hexagon";
        setPerimeter();
        setArea();
    }

    void setPerimeter()
    {
        perimeter = 6 * length;
    }

    void setArea()
    {
        area = (3 * sqrt(3) * length * length) / 2;
    }

    void setColor()
    {
        cout << "Set the color: ";
        string input;
        cin >> input;
        color = input;
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

    for (int i = 0; i < 8; i++)
    {
        t[i]->setColor();
    }

    for (int i = 0; i < 8; i++)
    {
        t[i]->ShapeDetails();
        cout << endl;
    }
}