#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Student
{
private:
    string name;
    string dateOfBirth;
    int id;
    float cgpa;

public:

    void setName(const string &newName)
    {
        name = newName;
    }

    void setDateOfBirth(const string &newDateOfBirth)
    {
        dateOfBirth = newDateOfBirth;
    }

    void setId(int newId)
    {
        id = newId;
    }

    void setCGPA(float newCGPA)
    {
        cgpa = newCGPA;
    }

    string getName() const
    {
        return name;
    }

    string getDateOfBirth() const
    {
        return dateOfBirth;
    }

    int getId() const
    {
        return id;
    }

    float getCGPA() const
    {
        return cgpa;
    }


    void setInfo(const string &newName, const string &newDateOfBirth, int newId, float newCGPA)
    {
        setName(newName);
        setDateOfBirth(newDateOfBirth);
        setId(newId);
        setCGPA(newCGPA);
    }


    void getInfo() const
    {
        cout << "Name: " << getName() << endl;
        cout << "Date of Birth: " << getDateOfBirth() << endl;
        cout << "ID: " << getId() << endl;
        cout << "CGPA: " << getCGPA() << endl;
    }

    int calculateAge(const string &currentDate) const
    {
        int dobDay, dobMonth, dobYear, currDay, currMonth, currYear;

        istringstream dobStream(dateOfBirth);
        istringstream currStream(currentDate);

        char dash;

        dobStream >> dobDay >> dash >> dobMonth >> dash >> dobYear;
        currStream >> currDay >> dash >> currMonth >> dash >> currYear;

        int years = currYear - dobYear;
        int months = currMonth - dobMonth;
        int days = currDay - dobDay;

        if (days < 0)
        {
            months--;
            int prevMonthDays = 31;

            if (dobMonth == 3 || dobMonth == 5 || dobMonth == 8 || dobMonth == 10)
            {
                prevMonthDays = 30;
            }
            else if (dobMonth == 1)
            {
                prevMonthDays = (dobYear % 4 == 0 && (dobYear % 100 != 0 || dobYear % 400 == 0)) ? 29 : 28;
            }

            days += prevMonthDays;
        }

        if (months < 0)
        {
            years--;
            months += 12;
        }

        return years;
    }


    bool isValidDate(const string &date) const
    {
        if (date.size() != 10)
        {
            return false;
        }

        if (date[2] != '-' || date[5] != '-')
        {
            return false;
        }

        for (int i = 0; i < 10; i++)
        {
            if (i == 2 || i == 5)
            {
                continue;
            }

            if (!isdigit(date[i]))
            {
                return false;
            }
        }

        int day = stoi(date.substr(0, 2));
        int month = stoi(date.substr(3, 2));
        int year = stoi(date.substr(6, 4));

        if (month < 1 || month > 12 || day < 1 || day > 31)
        {
            return false;
        }

        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        {
            return false;
        }

        if (month == 2)
        {
            if ((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) && day > 29)
            {
                return false;
            }
            else if (day > 28)
            {
                return false;
            }
        }

        return true;
    }


};

#endif
