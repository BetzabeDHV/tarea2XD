#include <iostream>
#include "prueba.h"

using namespace std;

// Definir la función displayAccount
void displayAccount(Account accountToDisplay) {
    cout << "Account: " << accountToDisplay.getName() << " balance is $" << accountToDisplay.getBalance() << endl;
}

int main() {
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    // Llamar a la función displayAccount en lugar de duplicar el código
    displayAccount(account1);
    displayAccount(account2);

    int depositAmount;

    cout << "\nEnter deposit amount for account1: ";
    cin >> depositAmount;
    cout << "Adding " << depositAmount << " to account1 balance\n";
    account1.deposit(depositAmount);

    cout << "\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "Adding " << depositAmount << " to account2 balance\n";
    account2.deposit(depositAmount);

    // Mostrar los saldos actualizados
    displayAccount(account1);
    displayAccount(account2);

    return 0;
}
