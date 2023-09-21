#ifndef STUDENTCOLLECTION_H
#define STUDENTCOLLECTION_H

#include <iostream>
#include <string>

using namespace std;

class StudentCollection
{

protected:
private:
    string names[10];
    double grades[10];
    int studentCount;

public:
    StudentCollection() : studentCount(0)
    {
    }

    void addStudent(string name, double grade)
    {
        if (studentCount >= 10)
        {
            cout << "Collection is already full" << endl;
            return;
        }

        names[studentCount] = name;
        grades[studentCount] = grade;

        ++studentCount;
    }

    double &operator[](string name)
    {
        for (int i = 0; i < studentCount; ++i)
        {
            if (names[i] == name)
            {
                return grades[i];
            }
        }

        cout << "Student Not Found" << endl;
        static double defaultGrade = 0.0;
        return defaultGrade;
    }
};

#endif // STUDENTCOLLECTION_H
