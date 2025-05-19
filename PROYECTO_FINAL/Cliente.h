#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include "IMostrar.h"

class Cliente : public IMostrar {
private:
    std::string nombre, domicilio, RFC;
    std::string telefonoCasa, telefonoOficina, telefonoCelular;

public:
    void agregar();
    void mostrar() const override;
    bool buscar(const std::string& rfcBuscar) const;
    void modificar();
};

#endif
