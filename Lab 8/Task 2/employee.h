#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee
{
public:
    Employee(string n, string id, bool duty)
        : Name(n), emp_id(id), onDuty(duty)
    {
    }

    string GetName() const { return Name; }
    string Getemp_id() const { return emp_id; }
    bool GetonDuty() const { return onDuty; }
    float Getmonthly_salary() const { return monthly_salary; }

    float yearlyIncome() const
    {
        return monthly_salary * 12;
    }

protected:
    void SetMonthlySalary(float salary)
    {
        monthly_salary = salary;
    }

private:
    string Name;
    string emp_id;
    float monthly_salary;
    bool onDuty;
};

class Manager : public Employee
{
public:
    Manager(string n, string id, bool duty)
        : Employee(n, id, duty)
    {
        SetMonthlySalary(10000);
    }
};

class Engineer : public Employee
{
public:
    Engineer(string n, string id, bool duty)
        : Employee(n, id, duty)
    {
        SetMonthlySalary(8000);
    }
};

class Designer : public Employee
{
public:
    Designer(string n, string id, bool duty)
        : Employee(n, id, duty)
    {
        SetMonthlySalary(7000);
    }
};

#endif // EMPLOYEE_H
