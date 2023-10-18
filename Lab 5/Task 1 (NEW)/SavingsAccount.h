#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <iostream>
using namespace std;

class SavingsAccount
{
public:
    SavingsAccount();
    ~SavingsAccount()
    {
        totalObjectsDestroyed++;
        cout << totalObjectsDestroyed << "miao" << endl;
    }

    double calculateMonthlyInterest()
    {
        double temp = (annualInterestRate / 12) / 100;
        double temp2 = savingsBalance * temp;
        savingsBalance = savingsBalance + temp2;
        return temp2;
    }

    static void modifyInterestRate(double value)
    {
        annualInterestRate = value;
    }

    double GetSavingsBalance()
    {
        return savingsBalance;
    }

    void SetSavingsBalance(double value)
    {
        savingsBalance = value;
    }

    static int GetTotalObjectsCreated()
    {
        return totalObjectsCreated;
    }

    static int GetTotalObjectsDestroyed()
    {
        return totalObjectsDestroyed;
    }

protected:
private:
    static double annualInterestRate;
    double savingsBalance;
    static int totalObjectsCreated;
    static int totalObjectsDestroyed;
};

#endif // SAVINGSACCOUNT_H
