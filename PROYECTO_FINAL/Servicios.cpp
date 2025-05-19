#include "Servicios.h"
#include <iostream>

Servicios::Servicios() {
    listaServicios.push_back(new ServicioBase("CableBásico", 200, 20));
    listaServicios.push_back(new ServicioBase("CableTotal", 300, 30));
    listaServicios.push_back(new ServicioBase("CableTotalPlus", 400, 40));
    listaServicios.push_back(new ServicioBase("InternetCable", 350, 35));
    listaServicios.push_back(new ServicioBase("CableTeléfono", 250, 25));
    listaServicios.push_back(new ServicioBase("CableInternetTeléfono", 500, 50));
}

void Servicios::mostrarSeleccion() const {
    for (auto* servicio : listaServicios)
        servicio->mostrar();
}

const std::vector<ServicioBase*>& Servicios::getLista() const {
    return listaServicios;
}

Servicios::~Servicios() {
    for (auto* s : listaServicios) delete s;
}
