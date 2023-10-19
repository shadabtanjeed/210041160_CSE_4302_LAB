#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee
{
public:
    Employee(string n, string id, float sal, bool duty)
    {
        Name = n;
        emp_id = id;
        monthly_salary = sal;
        onDuty = duty;
    }

    string GetName() { return Name; }
    void SetName(string val) { Name = val; }
    string Getemp_id() { return emp_id; }
    void Setemp_id(string val) { emp_id = val; }
    float Getmonthly_salary() { return monthly_salary; }
    void Setmonthly_salary(float val) { monthly_salary = val; }
    bool GetonDuty() { return onDuty; }
    void SetonDuty(bool val) { onDuty = val; }

    float yearlyIncome()
    {
        return monthly_salary * 12;
    }

protected:
private:
    string Name;
    string emp_id;
    float monthly_salary;
    bool onDuty;
};

class Manager : public Employee
{

public:
    Manager(string n, string id, float sal, bool duty) : Employee(n, id, sal, duty)
    {
        Setmonthly_salary(10000);
    }
};

class Engineer : public Employee
{

public:
    Engineer(string n, string id, float sal, bool duty) : Employee(n, id, sal, duty)
    {
        Setmonthly_salary(8000);
    }
};

class Designer : public Employee
{

public:
    Designer(string n, string id, float sal, bool duty) : Employee(n, id, sal, duty)
    {
        Setmonthly_salary(7000);
    }
};

#endif // EMPLOYEE_H
