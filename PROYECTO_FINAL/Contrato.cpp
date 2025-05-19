#include "Contrato.h"
#include "ServicioBase.h"
#include <iostream>

Contrato::Contrato() : folio(0), tipoServicio(nullptr) {}

Contrato::~Contrato() {
    delete tipoServicio;
}

void Contrato::crearContrato(const Servicios& disponibles) {
    std::cout << "=== Crear Contrato ===\n";
    std::cout << "Ingrese folio del contrato: ";
    std::cin >> folio;
    std::cin.ignore();

    std::cout << "\n== Datos del Cliente ==\n";
    cliente.agregar();

    std::cout << "\n== Datos del Contrato ==\n";
    std::cout << "Ingrese especificaciones: ";
    std::getline(std::cin, especificaciones);

    std::cout << "Ingrese periodo de servicio: ";
    std::getline(std::cin, periodoServicio);

    std::cout << "Ingrese nombre de referencia: ";
    std::getline(std::cin, nombreReferencia);

    std::cout << "Ingrese teléfono de referencia: ";
    std::getline(std::cin, telefonoReferencia);

    std::cout << "\n== Servicios Disponibles ==\n";
    disponibles.mostrarSeleccion();

    std::string nombreServicio;
    std::cout << "Nombre del servicio elegido: ";
    std::getline(std::cin, nombreServicio);

    for (auto* s : disponibles.getLista()) {
        if (s->getNombre() == nombreServicio) {
            tipoServicio = new ServicioBase(*s);  // Clona el servicio
            break;
        }
    }

    if (!tipoServicio)
        std::cout << "Servicio no válido. Contrato creado sin servicio.\n";
    else
        std::cout << "Contrato creado exitosamente.\n";
}

void Contrato::mostrar() const {
    std::cout << "\n=== Contrato Folio #" << folio << " ===\n";
    cliente.mostrar();
    std::cout << "Periodo: " << periodoServicio << "\n";
    std::cout << "Especificaciones: " << especificaciones << "\n";
    std::cout << "Referencia: " << nombreReferencia << " | Tel: " << telefonoReferencia << "\n";

    if (tipoServicio) {
        std::cout << "Servicio Contratado:\n";
        tipoServicio->mostrar();
    }
    else {
        std::cout << "No se seleccionó ningún servicio.\n";
    }
}

bool Contrato::buscar(int folioBuscar) const {
    return folio == folioBuscar;
}

void Contrato::modificar() {
    std::cout << "Modificar contrato... (puedes implementar campos editables aquí)\n";
}
