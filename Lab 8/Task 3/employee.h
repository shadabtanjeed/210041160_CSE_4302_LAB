#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
using namespace std;

class Address
{
private:
    int house;
    int road;
    string city;
    int zipcode;
    string district;
    string country;

public:
    int GetHouse()
    {
        return house;
    }

    void SetHouse(int val)
    {
        house = val;
    }

    int GetRoad()
    {
        return road;
    }

    void SetRoad(int val)
    {
        road = val;
    }

    string GetCity()
    {
        return city;
    }

    void SetCity(string val)
    {
        city = val;
    }

    int GetZipcode()
    {
        return zipcode;
    }

    void SetZipcode(int val)
    {
        zipcode = val;
    }

    string GetDistrict()
    {
        return district;
    }

    void SetDistrict(string val)
    {
        district = val;
    }

    string GetCountry()
    {
        return country;
    }

    void SetCountry(string val)
    {
        country = val;
    }
};

class ContactInformation
{
private:
    int primary_phone;
    int secondary_phone;
    string email;

public:
    int GetPrimaryPhone()
    {
        return primary_phone;
    }

    void SetPrimaryPhone(int val)
    {
        primary_phone = val;
    }

    int GetSecondaryPhone()
    {
        return secondary_phone;
    }

    void SetSecondaryPhone(
        int val)
    {
        secondary_phone = val;
    }

    string GetEmail()
    {
        return email;
    }

    void SetEmail(string val)
    {
        email = val;
    }
};

class Employee
{
public:
    Employee(string n, string id, float sal, bool duty)
        : Name(n), emp_id(id), monthly_salary(sal), onDuty(duty) {}

    string GetName()
    {
        return Name;
    }

    void SetName(string val) { Name = val; }

    string GetEmpId()
    {
        return emp_id;
    }

    void SetEmpId(string val)
    {
        emp_id = val;
    }

    float GetMonthlySalary()
    {
        return monthly_salary;
    }

    void SetMonthlySalary(float val)
    {
        monthly_salary = val;
    }

    bool GetOnDuty()
    {
        return onDuty;
    }

    void SetOnDuty(bool val)
    {
        onDuty = val;
    }

    float YearlyIncome()
    {
        return monthly_salary * 12;
    }

    Address present;
    Address permanent;
    ContactInformation personal;
    ContactInformation emergency;

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
    Manager(string n, string id, float sal, bool duty)
        : Employee(n, id, sal, duty)
    {
        SetMonthlySalary(10000);
    }
};

class Engineer : public Employee
{
public:
    Engineer(string n, string id, float sal, bool duty)
        : Employee(n, id, sal, duty)
    {
        SetMonthlySalary(8000);
    }
};

class Designer : public Employee
{
public:
    Designer(string n, string id, float sal, bool duty)
        : Employee(n, id, sal, duty)
    {
        SetMonthlySalary(7000);
    }
};

#endif // EMPLOYEE_H
