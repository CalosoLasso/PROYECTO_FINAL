#include "Empleado.h"
#include <iostream>

Empleado::Empleado() : noEmpleado(0) {}

Empleado::Empleado(int noEmp, const std::string& codEmp, const std::string& nom,
    const std::string& rfc, const std::string& fecha)
    : noEmpleado(noEmp), codigoEmpleado(codEmp), nombre(nom), RFC(rfc), fechaIngreso(fecha) {
}

void Empleado::agregar() {
	std::cout << "Agregar nuevo empleado...\n";
	std::cout << "Ingrese el número de empleado: ";
	std::cin >> noEmpleado;
	std::cout << "Ingrese el código de empleado: ";
	std::cin >> codigoEmpleado;
	std::cout << "Ingrese el nombre: ";
	std::cin.ignore();
	std::getline(std::cin, nombre);
	std::cout << "Ingrese el RFC: ";
	std::getline(std::cin, RFC);
	std::cout << "Ingrese la fecha de ingreso: ";
	std::getline(std::cin, fechaIngreso);
    
}

void Empleado::mostrar() const {
	std::cout << "Empleado No: " << noEmpleado << "\n";
	std::cout << "Código: " << codigoEmpleado << "\n";
	std::cout << "Nombre: " << nombre << "\n";
	std::cout << "RFC: " << RFC << "\n";
	std::cout << "Fecha de Ingreso: " << fechaIngreso << "\n";
    
}

bool Empleado::buscar(const std::string& codEmp) const {
    return codigoEmpleado == codEmp;
}

void Empleado::modificar() {
	std::cout << "Modificar empleado...\n";
	std::cout << "Ingrese el nuevo nombre: ";
	std::cin.ignore();
	std::getline(std::cin, nombre);
	std::cout << "Ingrese el nuevo RFC: ";
	std::getline(std::cin, RFC);
	std::cout << "Ingrese la nueva fecha de ingreso: ";
	std::getline(std::cin, fechaIngreso);
    
}