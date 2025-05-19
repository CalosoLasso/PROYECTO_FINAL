#ifndef SERVICIOS_H
#define SERVICIOS_H
#include <vector>
#include "ServicioBase.h"

class Servicios {
private:
    std::vector<ServicioBase*> listaServicios;
    

public:
    Servicios();
	const std::vector<ServicioBase*>& getLista() const;   
    void mostrarSeleccion() const;
    ~Servicios();
};

#endif