#include <iostream>
#include <fstream>

// fstream inline("./statement.txt");

using namespace std;

class Account
{
public:
    int account_number;
    string account_holder_name;
    int bank_balance;

public:
    void get_balance() const
    {
        cout << "Balance: " << bank_balance << endl;
    }

    void deposit(const int amount)
    {
        bank_balance += amount;
    }

    virtual void withdraw(const int amount)
    {
        bank_balance -= amount;
    }

    void show_statements() const
    {
    }
};

class SavingsAccount : public Account
{
protected:
    int interest_rate;
    int updated_balance;

public:
    SavingsAccount()
    {
        interest_rate = 0; // out of 100
        updated_balance = 0;
    }
    void create_account(int account_no, string name, int initial_amount)
    {
        Account::account_number = account_no;
        Account::account_holder_name = name;
        Account::bank_balance = initial_amount;
    }

    void set_interest_rate(int x)
    {
        interest_rate = x;
    }

    int get_updated_balance()
    {
        updated_balance = Account::bank_balance + Account::bank_balance * (interest_rate / 100);
        return updated_balance;
    }
};

class SalaryAccount : public Account
{
protected:
    string Employer_Name;

public:
    void create_account(int account_no, string name, int initial_amount)
    {
        Account::account_number = account_no;
        Account::account_holder_name = name;
        Account::bank_balance = initial_amount;
    }

    void set_employer_name(string name)
    {
        Employer_Name = name;
    }
};

class FixedTermDeposit : public SavingsAccount
{
protected:
    int term_month;
    int current_month;
    int penalty_rate;

public:
    FixedTermDeposit()
    {
        term_month = 0;
        penalty_rate = 0; // out of 100
        current_month = 0;
    }

    void set_term_month(int x)
    {
        term_month = x;
    }

    int get_term_month() const
    {
        return term_month;
    }

    void increase_current_month()
    {
        current_month++;
    }

    void set_penalty_rate(int x)
    {
        penalty_rate = x;
    }

    void withdraw(int x)
    {
        if (current_month < term_month)
        {
            cout << "Penalty Applicable" << endl;
            Account::bank_balance = Account::bank_balance - x - (x * (penalty_rate / 100));
        }

        else
            Account::bank_balance -= x;
    }
};

class Bank
{
public:
    Account ac1;

    void create_account(int account_no, string name, int initial_amount)
    {
        ac1.account_number = account_no;
        ac1.account_holder_name = name;
        ac1.bank_balance = initial_amount;
    }
};

int main()
{
    Bank b1;
    b1.create_account(005, "Raiyan", 1000);

    SalaryAccount sa1;
    sa1.create_account(001, "Shadab", 5000);

    FixedTermDeposit fd1;
    fd1.create_account(002, "Rupom", 2000);
    fd1.set_term_month(2);
    fd1.set_penalty_rate(10);
    fd1.increase_current_month();
    fd1.withdraw(1000);
    fd1.get_balance();

    SavingsAccount sv1;
    sv1.create_account(003, "Bulbul", 5000);
    sv1.set_interest_rate(8);
    cout << sv1.get_updated_balance() << endl;
}