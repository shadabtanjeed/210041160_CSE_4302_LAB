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
    int GetPrimary_phone()
    {
        return primary_phone;
    }

    void SetPrimary_phone(int val)
    {
        primary_phone = val;
    }

    int GetSecondary_phone()
    {
        return secondary_phone;
    }

    void SetSecondary_phone(int val)
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

#endif // EMPLOYEE_H
