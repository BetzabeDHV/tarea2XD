#include <iostream>
#include <string>

class Account {
public:
    Account(unsigned int accountNumber, const std::string& firstName, const std::string& lastName, double balance)
        : accountNumber(accountNumber), firstName(firstName), lastName(lastName), balance(balance) {
    }

    // Otros miembros de la clase Cuenta

private:
    unsigned int accountNumber;
    std::string firstName;
    std::string lastName;
    double balance;
};

int main() {
    // Inicialización de un objeto de la clase Cuenta usando la inicialización de listas
    Account myAccount(12345, "John", "Doe", 1000.0);

    // Resto del código...

    return 0;
}
