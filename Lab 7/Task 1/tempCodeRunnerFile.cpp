#include "studentcollection.h"

int main()
{

    StudentCollection SC1;

    SC1.addStudent("Rupom", 3.7);
    SC1.addStudent("Ahsan", 3.98);
    SC1.addStudent("Sabrina", 3.52);
    SC1.addStudent("Shadab", 2.9);
    SC1.addStudent("Mithila", 3.25);

    double temp = SC1["Shadab"];
}