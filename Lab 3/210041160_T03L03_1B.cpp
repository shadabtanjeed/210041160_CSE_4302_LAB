#include <iostream>

using namespace std;

class BankAccount
{
private:
    string name;
    long long acNo;
    string acType;
    long long balance = 0;

public:
    void customerDetails(string c_name, long long ac_no)
    {
        name = c_name;
        acNo = ac_no;
    }

    void accountType(string acc_type)
    {
        acType = acc_type;
    }

    void displayBalance()
    {
        cout << balance << endl;
    }

    void deposit(long long d_amount)
    {
        balance += d_amount;
    }

    void withdraw(long long w_amount)
    {
        balance -= w_amount;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << acNo << endl;
        cout << "Type of Account: " << acType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount bank_account;

    int options = 1;

    while (1)
    {
        cin >> options;

        if (options == -1)
            break;

        else
        {
            if (options == 1)
            {
                string namecustomer;
                long long ac_no;

                cout << "Enter Name: ";
                cin >> namecustomer;
                cout << "Enter Account No: ";
                cin >> ac_no;
                bank_account.customerDetails(namecustomer, ac_no);
            }

            else if (options == 2)
            {
                cout << "Account Type: ";
                string account_type;
                cin >> account_type;
                bank_account.accountType(account_type);
            }

            else if (options == 3)
            {
                bank_account.displayBalance();
            }

            else if (options == 4)
            {
                long long deposit_amount;
                cout << "Enter deposit amount: ";
                cin >> deposit_amount;
                bank_account.deposit(deposit_amount);
            }

            else if (options == 5)
            {
                long long withdrawal_amount;
                cout << "Enter withdrawal amount: ";
                cin >> withdrawal_amount;
                bank_account.withdraw(withdrawal_amount);
            }

            else if (options == 6)
            {
                bank_account.display();
            }
        }
    }
}
