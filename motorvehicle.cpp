#include <iostream>
#include "motorvehicle3-11.h" // Incluye el archivo de encabezado de la clase MotorVehicle

int main() {
    std::string make;
    std::string fuelType;
    int yearOfManufacture;
    std::string color;
    int engineCapacity;

    // Solicitar al usuario que ingrese la marca del vehículo
    std::cout << "Ingrese la marca del vehículo: ";
    std::cin >> make;

    // Solicitar al usuario que ingrese el tipo de combustible
    std::cout << "Ingrese el tipo de combustible: ";
    std::cin >> fuelType;

    // Solicitar al usuario que ingrese el año de fabricación
    std::cout << "Ingrese el año de fabricación: ";
    std::cin >> yearOfManufacture;

    // Solicitar al usuario que ingrese el color del vehículo
    std::cout << "Ingrese el color del vehículo: ";
    std::cin >> color;

    // Solicitar al usuario que ingrese la capacidad del motor
    std::cout << "Ingrese la capacidad del motor: ";
    std::cin >> engineCapacity;

    // Crear un objeto MotorVehicle con los datos proporcionados por el usuario
    MotorVehicle vehiculo(make, fuelType, yearOfManufacture, color, engineCapacity);

    // Mostrar los detalles del vehículo
    std::cout << "\nDetalles del vehículo:" << std::endl;
    vehiculo.displayCarDetails();

    return 0;
}
