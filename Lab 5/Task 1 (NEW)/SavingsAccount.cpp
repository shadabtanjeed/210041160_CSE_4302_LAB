#include "SavingsAccount.h"

double SavingsAccount::annualInterestRate = 0.0;
int SavingsAccount::totalObjectsCreated = 0;
int SavingsAccount::totalObjectsDestroyed = 0;

SavingsAccount::SavingsAccount()
{
    totalObjectsCreated++;
}

SavingsAccount::~SavingsAccount()
{
    totalObjectsDestroyed++;
}

int main()
{
    SavingsAccount saver1;
    SavingsAccount saver2;

    saver1.SetSavingsBalance(2000);
    saver2.SetSavingsBalance(3000);

    saver1.modifyInterestRate(3);
    saver2.modifyInterestRate(3);

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "Saver 1 Balance: " << saver1.GetSavingsBalance() << endl;
    cout << "Saver 2 Balance: " << saver2.GetSavingsBalance() << endl;

    saver1.modifyInterestRate(4);
    saver2.modifyInterestRate(4);

    cout << "Monthly Interest (Saver 1): " << saver1.calculateMonthlyInterest() << endl;
    cout << "Monthly Interest (Saver 2): " << saver2.calculateMonthlyInterest() << endl;

    cout << "Saver 1 Total Balance: " << saver1.GetSavingsBalance() << endl;
    cout << "Saver 2 Total Balance: " << saver2.GetSavingsBalance() << endl;

    cout << "Total Objects Created: " << SavingsAccount::GetTotalObjectsCreated() << endl;
    cout << "Total Objects Destroyed: " << SavingsAccount::GetTotalObjectsDestroyed() << endl;

    return 0;
}
