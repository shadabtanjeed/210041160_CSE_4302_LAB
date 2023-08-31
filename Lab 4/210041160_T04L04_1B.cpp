#include <iostream>
#include <string>

using namespace std;

class ZooAnimal
{
private:
    string nameOfAnimal;
    int birthYear;
    int cageNumber;
    float weight;
    int height;

public:
    ZooAnimal(string animalname = "", int birthyear = 2023, int cagenumber = 0, float Weight = 1, int Height = 1)
    {
        nameOfAnimal = animalname;
        birthYear = birthyear;
        cageNumber = cagenumber;
        weight = Weight;
        height = Height;
    }

    void setName(const string &name)
    {
        nameOfAnimal = name;
    }

    string getName()
    {
        return nameOfAnimal;
    }

    void setBirthYear(int year)
    {
        birthYear = year;
    }

    int getBirthYear()
    {
        return birthYear;
    }

    void setCageNumber(int cage)
    {
        cageNumber = cage;
    }

    int getCageNumber()
    {
        return cageNumber;
    }

    void setWeight(float value)
    {
        weight = value;
    }

    float getWeight()
    {
        return weight;
    }

    void setHeight(int value)
    {
        height = value;
    }

    int getHeight()
    {
        return height;
    }

    int getAge()
    {
        return 2023 - birthYear;
    }

    void displayInfo()
    {
        cout << "Name: " << nameOfAnimal << endl;
        cout << "Birth Year: " << birthYear << endl;
        cout << "Cage Number: " << cageNumber << endl;
        cout << "Weight: " << weight << endl;
        cout << "Height: " << height << endl;
    }
    ~ZooAnimal()
    {
        displayInfo();
        cout << "Information Destructed" << endl;
    }
};

int main()
{
    // ZooAnimal z1("Shadab", 2003, 5, 50.9, 1.2);
    ZooAnimal z1;
    z1.displayInfo();
    cout << endl;

    z1.setName("Miao");
    z1.setBirthYear(2020);
    z1.setCageNumber(10);
    z1.setWeight(50);
    z1.setHeight(21);

    cout << "Age: " << z1.getAge() << endl;

    z1.displayInfo();
    cout << endl;

    return 0;
}