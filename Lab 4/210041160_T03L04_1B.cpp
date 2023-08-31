#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountName;
    string accountType;
    float balance;
    float minimumBalance;

public:
    BankAccount(int accNumber, string accName, string accType, float initialBalance, float minBalance)
    {
        accountNumber = accNumber;
        accountName = accName;
        accountType = accType;
        balance = initialBalance;
        minimumBalance = minBalance;
        ShowInfo();
    }

    void SetAccountInfo(int accNumber, string accName, string accType, float initialBalance, float minBalance)
    {
        accountNumber = accNumber;
        accountName = accName;
        accountType = accType;
        balance = initialBalance;
        minimumBalance = minBalance;
    }

    void ShowInfo()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder's Name: " << accountName << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Current Balance: " << balance << endl;
        cout << "Threshold Balance: " << minimumBalance << endl;
        cout << endl;
    }

    void ShowBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }

    void deposit(float value)
    {
        if (value < 0)
            cout << "Negative amount cannot be deposited" << endl;
        else
        {
            balance += value;
        }
    }

    void withdraw(float value)
    {
        if (value < 0)
            cout << "Negative amount cannot be withdrawn" << endl;
        else if ((balance - value) < minimumBalance)
            cout << "Error: Account Balance is less than Minimum Balance" << endl;
        else
        {
            balance -= value;
        }
    }

    void giveInterest(float interest = 0.03)
    {
        float interestAmount = balance * interest;
        balance += interestAmount;

        float sourceTaxAmount = balance * 0.1;

        balance -= sourceTaxAmount;
    }

    ~BankAccount()
    {
        cout << "Account of " << accountName << " with account no " << accountNumber
             << " is destroyed with a balance BDT " << balance << endl;
    }
};

int main()
{
    BankAccount b1(12345, "Shadab", "Savings", 100000, 10000);
    b1.deposit(5000);
    b1.ShowBalance();
    b1.withdraw(99000);
    b1.ShowBalance();
    b1.withdraw(5000);
    b1.ShowBalance();
    b1.giveInterest(10);
    b1.ShowBalance();
    cout << endl;
    b1.ShowInfo();

    b1.SetAccountInfo(64599, "Tanjeed", "Current", 5000, 1000);
    b1.deposit(5000);
    b1.ShowBalance();
    b1.withdraw(9001);
    b1.ShowBalance();
    b1.withdraw(5000);
    b1.ShowBalance();
    b1.giveInterest();
    b1.ShowBalance();
    cout << endl;
    b1.ShowInfo();

    return 0;
}
