#include "Cliente.h"
#include <iostream>

void Cliente::agregar() {
    std::cout << "Agregar nuevo cliente...\n";
    // Entrada de datos aquí
}

void Cliente::mostrar() const {
    std::cout << "Cliente: " << nombre << ", RFC: " << RFC << "\n";
}

bool Cliente::buscar(const std::string& rfcBuscar) const {
    return RFC == rfcBuscar;
}

void Cliente::modificar() {
    std::cout << "Modificar cliente...\n";
}