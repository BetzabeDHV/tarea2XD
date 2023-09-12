#include <iostream>
#include "date.h" // Incluye el archivo de encabezado de la clase Date

int main() {
    int mes, dia, año;

    // Solicitar al usuario que ingrese el mes
    std::cout << "Ingrese el mes: ";
    std::cin >> mes;

    // Solicitar al usuario que ingrese el día
    std::cout << "Ingrese el día: ";
    std::cin >> dia;

    // Solicitar al usuario que ingrese el año
    std::cout << "Ingrese el año: ";
    std::cin >> año;

    // Crear un objeto Date con los valores proporcionados por el usuario
    Date miFecha(mes, dia, año);

    // Mostrar la fecha usando la función mostrarFecha
    std::cout << "Fecha: ";
    miFecha.mostrarFecha();

    return 0;
}
