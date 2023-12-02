#include <fstream> // for file I/O
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch = 'x';
    int j = 77;
    double d = 6.02;
    string str1 = "Kafka";       // strings without
    string str2 = "Proust";      // embedded spaces
    ofstream hello("fdata.txt"); // create ofstream object

    // insert (write) data

    hello << ch << " " << j << " " << d << " " << str1 << " " << str2;

    cout << "File written\n";
    return 0;
}
