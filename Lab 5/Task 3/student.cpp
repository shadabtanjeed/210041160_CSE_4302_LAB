#include "student.h"

int main() {
    Student student1;


    student1.setInfo("Shadab", "20-03-1990", 210041160, 3.75);


    student1.getInfo();

    student1.setName("Tanjeed");
    student1.setDateOfBirth("01-01-2001");
    student1.setId(190012151);
    student1.setCGPA(3.95);

    student1.getInfo();

    student1.getInfo();

    string currentDate;
    cout << "Enter current date (dd-mm-yyyy): ";
    cin >> currentDate;

    if (student1.isValidDate(currentDate)) {
        int age = student1.calculateAge(currentDate);
        cout << "Age: " << age << " years" << endl;
    } else {
        cout << "Invalid date format for current date." << endl;
    }

    return 0;
}
