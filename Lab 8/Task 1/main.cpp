#include "account.h"
#include "monthlydepositscheme.h"

#include <iostream>
using namespace std;

int CurrentAccount::serial = 0;
int SavingsAccount::serial = 0;
int MonthlyDepositScheme::serial = 0;
int LoanAccount::serial = 0;

int main()
{

    Account account1;

    account1.setaccountNo("1234");
    account1.setaccountName("Shadab");
    account1.setbalance(1000.0);
    account1.description();

    cout << "Account Number: " << account1.getaccountNo() << endl;
    cout << "Account Name: " << account1.getaccountName() << endl;
    cout << "Account Balance: " << account1.getbalance() << endl;

    cout << "\nFor CurrentAccount Class:" << endl;
    CurrentAccount currentAccount;

    currentAccount.setaccountName("Tanjeed");
    currentAccount.setbalance(2000.0);
    currentAccount.description();

    cout << "Account Number: " << currentAccount.getaccountNo() << endl;
    cout << "Account Name: " << currentAccount.getaccountName() << endl;
    cout << "Account Balance: " << currentAccount.getbalance() << endl;
    cout << "Service Charge: " << currentAccount.getServiceCharge() << endl;

    cout << endl;

    CurrentAccount currentAccount2;
    currentAccount2.setaccountName("Ahmad");
    currentAccount2.setbalance(5000.0);

    cout << "Account Number: " << currentAccount2.getaccountNo() << endl;
    cout << "Account Name: " << currentAccount2.getaccountName() << endl;
    cout << "Account Balance: " << currentAccount2.getbalance() << endl;
    cout << "Service Charge: " << currentAccount2.getServiceCharge() << endl;

    cout << "\nFor SavingsAccount class:" << endl;
    SavingsAccount savingsAccount;

    savingsAccount.setaccountName("Tahsin");
    savingsAccount.setbalance(3000.0);
    savingsAccount.setInterestRate(5.0);
    savingsAccount.setmonthlyDepositRate(500.0);
    savingsAccount.description();

    cout << "Account Number: " << savingsAccount.getaccountNo() << endl;
    cout << "Account Name: " << savingsAccount.getaccountName() << endl;
    cout << "Account Balance: " << savingsAccount.getbalance() << endl;
    cout << "Interest Rate: " << savingsAccount.getInterestRate() << "%" << endl;
    cout << "Monthly Deposit Rate: " << savingsAccount.getmonthlyDepositRate() << endl;

    cout << "\nfor MonthlyDepositScheme class:" << endl;

    MonthlyDepositScheme monthlyDepositScheme;
    monthlyDepositScheme.setaccountName("Rupom");
    monthlyDepositScheme.setbalance(4000.0);
    monthlyDepositScheme.setInterestRate(4.5);
    monthlyDepositScheme.setmonthlyDepositRate(600.0);

    monthlyDepositScheme.description();

    cout << "Account Number: " << monthlyDepositScheme.getaccountNo() << endl;
    cout << "Account Name: " << monthlyDepositScheme.getaccountName() << endl;
    cout << "Account Balance: " << monthlyDepositScheme.getbalance() << endl;
    cout << "Interest Rate: " << monthlyDepositScheme.getInterestRate() << "%" << endl;
    cout << "Monthly Deposit Rate: " << monthlyDepositScheme.getmonthlyDepositRate() << endl;

    cout << "\nfor LoanAccount class:" << endl;
    LoanAccount loanAccount;
    loanAccount.setaccountName("Biral");
    loanAccount.setbalance(5000.0);
    loanAccount.setInterestRate(6.5);
    loanAccount.setmonthlyDepositRate(700.0);

    loanAccount.description();

    cout << "Account Number: " << loanAccount.getaccountNo() << endl;
    cout << "Account Name: " << loanAccount.getaccountName() << endl;
    cout << "Account Balance: " << loanAccount.getbalance() << endl;
    cout << "Interest Rate: " << loanAccount.getInterestRate() << "%" << endl;
    cout << "Monthly Deposit Rate: " << loanAccount.getmonthlyDepositRate() << endl;

    return 0;
}
