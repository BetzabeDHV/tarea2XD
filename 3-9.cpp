#include <iostream>
#include "h.h"
using namespace std;

int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};
    cout << "account1: " << account1.getName() << " balance is $"<<account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"<<account2.getBalance();

    cout << "\n\nEnter deposit amount for account1: "; // prompt
    int depositAmount;
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount);
    cout << "\n\naccount1: " << account1.getName() << " balance is $"<< account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"<< account2.getBalance();
    cout << "\n\nEnter deposit amount for account2: "; // prompt
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount);
    cout << "\n\naccount1: " << account1.getName() << " balance is $"<< account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"<< account2.getBalance() << endl;
    cout << "\n\nEnter whitdrawal amount for account1: "; // prompt
    int whitdrawalAmount;
    cin >> whitdrawalAmount; // obtain user input
    cout << "whitdrawing " << whitdrawalAmount << " to account1 balance";
    account1.whitdraw(whitdrawalAmount);
    cout << "\n\naccount1: " << account1.getName() << " balance is $"<< account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"<< account2.getBalance();
    cout << "\n\nEnter whitdrawal amount for account2: "; // prompt
    cin >> whitdrawalAmount; // obtain user input
    cout << "whitdrawing " << whitdrawalAmount << " to account2 balance";
    account2.whitdraw(whitdrawalAmount);
    cout << "\n\naccount1: " << account1.getName() << " balance is $"<< account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"<< account2.getBalance();
}






