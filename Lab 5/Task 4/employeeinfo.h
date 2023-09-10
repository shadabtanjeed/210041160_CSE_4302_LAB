#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H

#include <iostream>
#include <string>

using namespace std;

class EmployeeInfo
{
private:
    string name;
    string dateOfBirth;
    int salary;

public:
    EmployeeInfo()
    {
        name = "John Doe";
        dateOfBirth = "01 January 2002";
        salary = 10000;
    }

    void setName(const string &newName)
    {
        if (newName.length() > 2)
        {
            name = newName;
        }
    }

    void setDateOfBirth(const string &newDateOfBirth)
    {
        string birthYearStr = newDateOfBirth.substr(newDateOfBirth.length() - 4, 4);

        try
        {
            int birthYear = stoi(birthYearStr);
            string currentDate = "10 September 2023";

            int currYear = stoi(currentDate.substr(currentDate.length() - 4, 4));
            int age = currYear - birthYear;

            if (age < 18)
            {
                dateOfBirth = "01 January 2002";
            }
            else
            {
                dateOfBirth = newDateOfBirth;
            }
        }
        catch (const invalid_argument &e)
        {
            cerr << "Error: Invalid date format in setDateOfBirth function." << endl;
        }
    }

    void setSalary(int newSalary)
    {
        if (newSalary >= 10000 && newSalary <= 100000)
        {
            salary = newSalary;
        }
        else
        {
            salary = 10000;
        }
    }

    string getName() const
    {
        return name;
    }

    string getDateOfBirth() const
    {
        return dateOfBirth;
    }

    int getSalary() const
    {
        return salary;
    }

    void setInfo(const string &newName, const string &newDateOfBirth, int newSalary)
    {
        setName(newName);
        setDateOfBirth(newDateOfBirth);
        setSalary(newSalary);
    }

    void getInfo() const
    {
        cout << "Name: " << getName() << endl;
        cout << "Date of Birth: " << getDateOfBirth() << endl;
        cout << "Salary: BDT " << getSalary() << endl;
    }
};

#endif // EMPLOYEEINFO_H
