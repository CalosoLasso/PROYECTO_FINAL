#ifndef SERVICIOBASE_H
#define SERVICIOBASE_H
#include <string>
#include <iostream>

class ServicioBase {
protected:
    float costo;
    float comision;
    std::string nombre;

public:
    ServicioBase(const std::string& n, float c, float com) : nombre(n), costo(c), comision(com) {}
    virtual void mostrar() const {
        std::cout << nombre << " - Costo: $" << costo << ", Comisión: $" << comision << "\n";
    }
    std::string getNombre() const { return nombre; }
    float getCosto() const { return costo; }
    float getComision() const { return comision; }
};

#endif

