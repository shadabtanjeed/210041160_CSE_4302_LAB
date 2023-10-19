#include "Employee.h"

int main()
{
    Employee emp("Reza", "E001", 5000.0, true);

    emp.present.SetHouse(123);
    emp.present.SetRoad(456);
    emp.present.SetCity("Dhaka");
    emp.present.SetZipcode(1000);
    emp.present.SetDistrict("Gulshan");
    emp.present.SetCountry("Bangladesh");

    emp.permanent.SetHouse(789);
    emp.permanent.SetRoad(101);
    emp.permanent.SetCity("Dhaka");
    emp.permanent.SetZipcode(10001);
    emp.permanent.SetDistrict("Mirpur");
    emp.permanent.SetCountry("Bangladesh");

    emp.personal.SetPrimaryPhone(1234567890);
    emp.personal.SetSecondaryPhone(9876543210);
    emp.personal.SetEmail("reza@example.com");

    emp.emergency.SetPrimaryPhone(1112223333);
    emp.emergency.SetSecondaryPhone(4445556666);
    emp.emergency.SetEmail("emergency@example.com");

    cout << "Employee Information:" << endl;
    cout << "Name: " << emp.GetName() << endl;
    cout << "Employee ID: " << emp.GetEmpId() << endl;
    cout << "Monthly Salary: " << emp.GetMonthlySalary() << endl;
    cout << "Yearly Income: " << emp.YearlyIncome() << endl;
    cout << "On Duty: " << (emp.GetOnDuty() ? "Yes" : "No") << endl;

    cout << "\nPresent Address Information:" << endl;
    cout << "House: " << emp.present.GetHouse() << endl;
    cout << "Road: " << emp.present.GetRoad() << endl;
    cout << "City: " << emp.present.GetCity() << endl;
    cout << "Zipcode: " << emp.present.GetZipcode() << endl;
    cout << "District: " << emp.present.GetDistrict() << endl;
    cout << "Country: " << emp.present.GetCountry() << endl;

    cout << "\nPermanent Address Information:" << endl;
    cout << "House: " << emp.permanent.GetHouse() << endl;
    cout << "Road: " << emp.permanent.GetRoad() << endl;
    cout << "City: " << emp.permanent.GetCity() << endl;
    cout << "Zipcode: " << emp.permanent.GetZipcode() << endl;
    cout << "District: " << emp.permanent.GetDistrict() << endl;
    cout << "Country: " << emp.permanent.GetCountry() << endl;

    cout << "\nPersonal Contact Information:" << endl;
    cout << "Primary Phone: " << emp.personal.GetPrimaryPhone() << endl;
    cout << "Secondary Phone: " << emp.personal.GetSecondaryPhone() << endl;
    cout << "Email: " << emp.personal.GetEmail() << endl;

    cout << "\nEmergency Contact Information:" << endl;
    cout << "Primary Phone: " << emp.emergency.GetPrimaryPhone() << endl;
    cout << "Secondary Phone: " << emp.emergency.GetSecondaryPhone() << endl;
    cout << "Email: " << emp.emergency.GetEmail() << endl;

     Engineer engineer("Kibria", "E002", 6000.0, true);

    engineer.present.SetHouse(789);
    engineer.present.SetRoad(102);
    engineer.present.SetCity("Dhaka");
    engineer.present.SetZipcode(10002);
    engineer.present.SetDistrict("Banani");
    engineer.present.SetCountry("Bangladesh");

    engineer.permanent.SetHouse(654);
    engineer.permanent.SetRoad(103);
    engineer.permanent.SetCity("Dhaka");
    engineer.permanent.SetZipcode(10003);
    engineer.permanent.SetDistrict("Uttara");
    engineer.permanent.SetCountry("Bangladesh");

    engineer.personal.SetPrimaryPhone(9876543210);
    engineer.personal.SetSecondaryPhone(1234567890);
    engineer.personal.SetEmail("kibria@example.com");

    engineer.emergency.SetPrimaryPhone(2223334444);
    engineer.emergency.SetSecondaryPhone(7778889999);
    engineer.emergency.SetEmail("emergency_kibria@example.com");

    cout << "\nEngineer Information:" << endl;
    cout << "Name: " << engineer.GetName() << endl;
    cout << "Employee ID: " << engineer.GetEmpId() << endl;
    cout << "Monthly Salary: " << engineer.GetMonthlySalary() << endl;
    cout << "Yearly Income: " << engineer.YearlyIncome() << endl;
    cout << "On Duty: " << (engineer.GetOnDuty() ? "Yes" : "No") << endl;

    cout << "\nPresent Address Information:" << endl;
    cout << "House: " << engineer.present.GetHouse() << endl;
    cout << "Road: " << engineer.present.GetRoad() << endl;
    cout << "City: " << engineer.present.GetCity() << endl;
    cout << "Zipcode: " << engineer.present.GetZipcode() << endl;
    cout << "District: " << engineer.present.GetDistrict() << endl;
    cout << "Country: " << engineer.present.GetCountry() << endl;

    cout << "\nPermanent Address Information:" << endl;
    cout << "House: " << engineer.permanent.GetHouse() << endl;
    cout << "Road: " << engineer.permanent.GetRoad() << endl;
    cout << "City: " << engineer.permanent.GetCity() << endl;
    cout << "Zipcode: " << engineer.permanent.GetZipcode() << endl;
    cout << "District: " << engineer.permanent.GetDistrict() << endl;
    cout << "Country: " << engineer.permanent.GetCountry() << endl;

    cout << "\nPersonal Contact Information:" << endl;
    cout << "Primary Phone: " << engineer.personal.GetPrimaryPhone() << endl;
    cout << "Secondary Phone: " << engineer.personal.GetSecondaryPhone() << endl;
    cout << "Email: " << engineer.personal.GetEmail() << endl;

    cout << "\nEmergency Contact Information:" << endl;
    cout << "Primary Phone: " << engineer.emergency.GetPrimaryPhone() << endl;
    cout << "Secondary Phone: " << engineer.emergency.GetSecondaryPhone() << endl;
    cout << "Email: " << engineer.emergency.GetEmail() << endl;

    return 0;
}
