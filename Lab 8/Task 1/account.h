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

protected:
private:
    string accountNo;
    string accountName;
    float balance;
};

class CurrentAccount : public Account
{
private:
    const static int serviceCharge = 100;
    const static int accountPrefix = 100;
    static int serial;
    string nextAccountNo;

public:
    CurrentAccount()
    {
        nextAccountNo = to_string(accountPrefix) + "-" + to_string(serial);
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
};

class SavingsAccount : public Account
{

private:
    float interestRate;
    float monthlyDepositAmount;
    const static int accountPrefix = 200;
    static int serial;
    string nextAccountNo;

public:
    SavingsAccount()
    {
        nextAccountNo = to_string(accountPrefix) + "-" + to_string(serial);
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

    string getAccountNo()
    {
        return nextAccountNo;
    }
};

class MonthlyDepositScheme : public Account
{
private:
    float interestRate;
    float monthlyDepositAmount;
    const static int accountPrefix = 300;
    static int serial;
    string nextAccountNo;

public:
    MonthlyDepositScheme()
    {
        nextAccountNo = to_string(accountPrefix) + "-" + to_string(serial);
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

    string getAccountNo()
    {
        return nextAccountNo;
    }
};

class LoanAccount : public Account
{
private:
    float interestRate;
    float monthlyDepositAmount;
    const static int accountPrefix = 900;
    static int serial;
    string nextAccountNo;

public:
    LoanAccount()
    {
        nextAccountNo = to_string(accountPrefix) + "-" + to_string(serial);
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

    string getAccountNo()
    {
        return nextAccountNo;
    }
};

#endif // ACCOUNT_H
