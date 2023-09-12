#include <iostream>
#include <string>

class MotorVehicle {
public:
    // Constructor que inicializa los miembros de datos
    MotorVehicle(std::string make, std::string fuelType, int yearOfManufacture, std::string color, int engineCapacity) {
        this->make = make;
        this->fuelType = fuelType;
        this->yearOfManufacture = yearOfManufacture;
        this->color = color;
        this->engineCapacity = engineCapacity;
    }

    // Funciones getter
    std::string getMake() {
        return make;
    }

    std::string getFuelType() {
        return fuelType;
    }

    int getYearOfManufacture() {
        return yearOfManufacture;
    }

    std::string getColor() {
        return color;
    }

    int getEngineCapacity() {
        return engineCapacity;
    }

    // Funciones setter
    void setMake(std::string make) {
        this->make = make;
    }

    void setFuelType(std::string fuelType) {
        this->fuelType = fuelType;
    }

    void setYearOfManufacture(int yearOfManufacture) {
        this->yearOfManufacture = yearOfManufacture;
    }

    void setColor(std::string color) {
        this->color = color;
    }

    void setEngineCapacity(int engineCapacity) {
        this->engineCapacity = engineCapacity;
    }

    // Función para mostrar los detalles del vehículo
    void displayCarDetails() {
        std::cout << "Make: " << make << std::endl;
        std::cout << "Fuel Type: " << fuelType << std::endl;
        std::cout << "Year of Manufacture: " << yearOfManufacture << std::endl;
        std::cout << "Color: " << color << std::endl;
        std::cout << "Engine Capacity: " << engineCapacity << std::endl;
    }

private:
    std::string make;
    std::string fuelType;
    int yearOfManufacture;
    std::string color;
    int engineCapacity;
};

int main() {
    // Crear dos objetos de la clase MotorVehicle
    MotorVehicle car1("Toyota", "Gasoline", 2020, "Blue", 2000);
    MotorVehicle car2("Honda", "Hybrid", 2022, "Silver", 1800);

    std::cout << "Detalles del coche 1:" << std::endl;
    car1.displayCarDetails();

    std::cout << "\nDetalles del coche 2:" << std::endl;
    car2.displayCarDetails();

    // Modificar algunos detalles del coche 1
    car1.setFuelType("Diesel");
    car1.setColor("Red");

    std::cout << "\nDetalles actualizados del coche 1:" << std::endl;
    car1.displayCarDetails();

    return 0;
}
