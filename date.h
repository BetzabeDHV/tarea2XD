#include <iostream>


class Date {
public:
    // Constructor con tres parámetros para inicializar los miembros de datos
    Date(int mes, int dia, int año) {
        setMes(mes);
        setDia(dia);
        setAño(año);
    }

    // Funciones getter y setter para el mes
    int getMes() const {
        return mes;
    }

    void setMes(int mes) {
        if (mes >= 1 && mes <= 12) {
            this->mes = mes;
        } else {
            this->mes = 1; // Establecer el mes en 1 si está fuera de rango
        }
    }

    // Funciones getter y setter para el día
    int getDia() const {
        return dia;
    }

    void setDia(int dia) {
        this->dia = dia;
    }

    // Funciones getter y setter para el año
    int getAño() const {
        return año;
    }

    void setAño(int año) {
        this->año = año;
    }

    // Función miembro para mostrar la fecha en el formato "mes/día/año"
    void mostrarFecha() const {
        std::cout << getMes() << "/" << getDia() << "/" << getAño() << std::endl;
    }

private:
    int mes;
    int dia;
    int año;
};

int main() {
    // Crear un objeto Fecha y inicializarlo con valores
    Date miFecha(9, 11, 2023);

    // Mostrar la fecha usando la función mostrarFecha
    std::cout << "Fecha: ";
    miFecha.mostrarFecha();

    // Modificar la fecha usando las funciones setter
    miFecha.setMes(12);
    miFecha.setDia(25);
    miFecha.setAño(2024);

    // Mostrar la fecha actualizada
    std::cout << "Fecha Actualizada: ";
    miFecha.mostrarFecha();

    return 0;
}
