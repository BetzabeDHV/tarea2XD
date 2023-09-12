#include <iostream>
#include <string>
#include "invoice3-10.h" // Asegúrate de incluir el archivo de encabezado de la clase Invoice

int main() {
    // Variables para almacenar los datos ingresados por el usuario
    std::string partNumber;
    std::string description;
    int quantity;
    int price;

    // Solicitar al usuario que ingrese los datos
    std::cout << "Ingrese el número de parte: ";
    std::cin >> partNumber;

    std::cout << "Ingrese la descripción: ";
    std::cin.ignore(); // Ignorar el salto de línea anterior
    std::getline(std::cin, description);

    std::cout << "Ingrese la cantidad: ";
    std::cin >> quantity;

    std::cout << "Ingrese el precio: ";
    std::cin >> price;

    // Crear un objeto Invoice con los datos proporcionados por el usuario
    Invoice factura(partNumber, description, quantity, price);

    // Mostrar los detalles de la factura
    std::cout << "\nDetalles de la factura:\n";
    std::cout << "Número de parte: " << factura.detPartNumber() << std::endl;
    std::cout << "Descripción: " << factura.getDescription() << std::endl;
    std::cout << "Cantidad: " << factura.getQuantity() << std::endl;
    std::cout << "Precio unitario: " << factura.getPrice() << std::endl;

    // Calcular e imprimir el monto total de la factura
    double total = factura.getInvoiceAmount();
    std::cout << "Monto total de la factura: $" << total << std::endl;

    return 0;
}
