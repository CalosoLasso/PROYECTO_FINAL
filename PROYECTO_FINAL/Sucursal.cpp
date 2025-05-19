#include "Sucursal.h"
#include <iostream>

Sucursal::Sucursal() : noSucursal(0) {}

void Sucursal::agregar() {
    std::cout << "Agregar nueva sucursal...\n";
    std::cout << "Ingrese número de sucursal: ";
    std::cin >> noSucursal;
    std::cin.ignore();
    std::cout << "Ingrese ciudad: ";
    std::getline(std::cin, ciudad);
    // Otros campos omitidos por brevedad

    int cantidadEmpleados;
    std::cout << "¿Cuántos empleados desea agregar?: ";
    std::cin >> cantidadEmpleados;
    for (int i = 0; i < cantidadEmpleados; ++i) {
        Empleado e;
        e.agregar();
        empleados.push_back(e);
    }
}

void Sucursal::mostrar() const {
    std::cout << "=============================="
    std::cout << "Sucursal No." << noSucursal << ", Ciudad: " << ciudad << "\n";
    for (const auto& emp : empleados) emp.mostrar();
}

bool Sucursal::buscar(int numero) const {
    return noSucursal == numero;
}

void Sucursal::modificar() {
    std::cout << "Modificar datos de sucursal...\n";
}

void Sucursal::agregarEmpleado(const Empleado& emp) {
    empleados.push_back(emp);
}

int Sucursal::getNoSucursal() const {
    return noSucursal;
}