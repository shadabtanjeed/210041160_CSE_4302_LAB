#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    student();
    ~student();

    void setName(const string& newName)
    {
        name = newName;
    }
    void setBirthDay(const string& newBirthDay)
    {
        birth_day = newBirthDay;
    }
    void setId(const string& newId)
    {
        id = newId;
    }
    void setCgpa(const string& newCgpa)
    {
        cgpa = newCgpa;
    }

    string getName() const
    {
        return name;
    }
    string getBirthDay() const
    {
        return birth_day;
    }
    string getId() const
    {
        return id;
    }
    string getCgpa() const
    {
        return cgpa;
    }

    void setInfo(const string& newName, const string& newBirthDay, const string& newId, const string& newCgpa);
    void getInfo() {
        cout<<"Name: "<<name<<endl;
        cout<<"Birthday: "<<birth_day<<endl;
        cout<<"Student ID: "<<id<<endl;
        cout<<"CGPA: "<<cgpa<<endl;

    }

private:
    string name;
    string birth_day;
    string id;
    string cgpa;
};

#endif // STUDENT_H
