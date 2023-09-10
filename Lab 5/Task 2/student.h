#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

using namespace std;

class Student {
private:
    string name;
    string dateOfBirth;
    int id;
    float cgpa;

public:

    void setName(const string &newName) {
        name = newName;
    }

    void setDateOfBirth(const string &newDateOfBirth) {
        dateOfBirth = newDateOfBirth;
    }

    void setId(int newId) {
        id = newId;
    }

    void setCGPA(float newCGPA) {
        cgpa = newCGPA;
    }

    string getName() const {
        return name;
    }

    string getDateOfBirth() const {
        return dateOfBirth;
    }

    int getId() const {
        return id;
    }

    float getCGPA() const {
        return cgpa;
    }


    void setInfo(const string &newName, const string &newDateOfBirth, int newId, float newCGPA) {
        setName(newName);
        setDateOfBirth(newDateOfBirth);
        setId(newId);
        setCGPA(newCGPA);
    }


    void getInfo() const {
        cout << "Name: " << getName() << endl;
        cout << "Date of Birth: " << getDateOfBirth() << endl;
        cout << "ID: " << getId() << endl;
        cout << "CGPA: " << getCGPA() << endl;
    }
};

#endif
