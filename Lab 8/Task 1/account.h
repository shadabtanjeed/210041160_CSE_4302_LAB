#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

using namespace std;

class Account
{
public:
    Account()
    {
    }

    ~Account()
    {
    }

    string getaccountNo() const
    {
        return accountNo;
    }

    void setaccountNo(string val)
    {
        accountNo = val;
    }

    string getaccountName() const
    {
        return accountName;
    }

    void setaccountName(string val)
    {
        accountName = val;
    }

    float getbalance() const
    {
        return balance;
    }

    void setbalance(float val)
    {
        balance = val;
    }

    void description()
    {
        cout << "Account class: This is a basic account." << endl;
    }

protected:
private:
    string accountNo;
    string accountName;
    float balance;
};

class CurrentAccount : public Account
{
private:
    static const int serviceCharge = 100;
    static const int accountPrefix = 100;
    static int serial;
    string nextAccountNo()
    {
        return to_string(accountPrefix) + "-" + to_string(serial);
    }

public:
    CurrentAccount()
    {
        setaccountNo(nextAccountNo());
        serial++;
    }

    ~CurrentAccount()
    {
    }

    int getServiceCharge() const
    {
        return serviceCharge;
    }

    int getAccountPrefix() const
    {
        return accountPrefix;
    }

    int getSerial() const
    {
        return serial;
    }

    void description()
    {
        cout << "CurrentAccount class: This is a current account with a service charge of " << serviceCharge << " and account prefix " << accountPrefix << "." << endl;
    }
};

class SavingsAccount : public Account
{

private:
    float interestRate;
    float monthlyDepositAmount;
    static const int accountPrefix = 200;
    static int serial;
    string nextAccountNo()
    {
        return to_string(accountPrefix) + "-" + to_string(serial);
    }

public:
    SavingsAccount()
    {
        setaccountNo(nextAccountNo());
        serial++;
    }

    ~SavingsAccount()
    {
    }

    float getInterestRate() const
    {
        return interestRate;
    }

    void setInterestRate(float val)
    {
        interestRate = val;
    }

    float getmonthlyDepositRate() const
    {
        return monthlyDepositAmount;
    }

    void setmonthlyDepositRate(float val)
    {
        monthlyDepositAmount = val;
    }

    int getSerial() const
    {
        return serial;
    }

    void description()
    {
        cout << "SavingsAccount class: This is a savings account with an interest rate of " << interestRate << "%, monthly deposit amount of " << monthlyDepositAmount << ", and account prefix " << accountPrefix << "." << endl;
    }
};

class MonthlyDepositScheme : public Account
{
private:
    float interestRate;
    float monthlyDepositAmount;
    static const int accountPrefix = 300;
    static int serial;
    string nextAccountNo()
    {
        return to_string(accountPrefix) + "-" + to_string(serial);
    }

public:
    MonthlyDepositScheme()
    {
        setaccountNo(nextAccountNo());
        serial++;
    }

    ~MonthlyDepositScheme()
    {
    }

    float getInterestRate() const
    {
        return interestRate;
    }

    void setInterestRate(float val)
    {
        interestRate = val;
    }

    float getmonthlyDepositRate() const
    {
        return monthlyDepositAmount;
    }

    void setmonthlyDepositRate(float val)
    {
        monthlyDepositAmount = val;
    }

    int getSerial() const
    {
        return serial;
    }

    void description()
    {
        cout << "MonthlyDepositScheme class: This is a monthly deposit scheme with an interest rate of " << interestRate << "%, monthly deposit amount of " << monthlyDepositAmount << ", and account prefix " << accountPrefix << "." << endl;
    }
};

class LoanAccount : public Account
{
private:
    float interestRate;
    float monthlyDepositAmount;
    static const int accountPrefix = 900;
    static int serial;
    string nextAccountNo()
    {
        return to_string(accountPrefix) + "-" + to_string(serial);
    }

public:
    LoanAccount()
    {
        setaccountNo(nextAccountNo());
        serial++;
    }

    ~LoanAccount()
    {
    }

    float getInterestRate() const
    {
        return interestRate;
    }

    void setInterestRate(float val)
    {
        interestRate = val;
    }

    float getmonthlyDepositRate() const
    {
        return monthlyDepositAmount;
    }

    void setmonthlyDepositRate(float val)
    {
        monthlyDepositAmount = val;
    }

    int getSerial() const
    {
        return serial;
    }

    void description()
    {
        cout << "LoanAccount class: This is a loan account with an interest rate of " << interestRate << "%, monthly deposit amount of " << monthlyDepositAmount << ", and account prefix " << accountPrefix << "." << endl;
    }
};

#endif // ACCOUNT_H
