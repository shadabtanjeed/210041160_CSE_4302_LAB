#include <iostream>

using namespace std;

class FlightDetails
{
private:
    int flightNumber;
    string destination;
    float distance;
    float MaxFuelCapacity;

    int CalFuel()
    {
        if (distance <= 1000)
            return 500;

        else if (distance > 1000 && distance <= 2000)
            return 1100;

        else if (distance > 2000)
            return 2200;

        else
            return -1;
    }

public:
    void FeedInfo()
    {
        cout << "Flight Number: ";
        cin >> flightNumber;
        cout << "Destination: ";
        cin >> destination;
        cout << "Distance: ";
        cin >> distance;
        cout << "Maximum Fuel Capacity: ";
        cin >> MaxFuelCapacity;
    }

    void ShowInfo()
    {
        cout << "Flight Number: " << flightNumber << endl;
        cout << "Destination: " << destination << endl;
        cout << "Distance: " << distance << endl;
        cout << "Maximum Fuel Capacity: " << MaxFuelCapacity << endl;

        cout << endl;

        if (CalFuel() > MaxFuelCapacity)
        {
            cout << "Not Sufficient Fuel Capacity for this file" << endl;
        }

        else
            cout << "Fuel capacity is fit for this flight distance" << endl;
    }
};

int main()
{
    FlightDetails f1;
    f1.FeedInfo();
    cout << endl;
    f1.ShowInfo();
}