
#ifndef CONTRATO_H
#define CONTRATO_H

#include <string>
#include "Servicios.h"
#include "Cliente.h"
#include "IMostrar.h"

class Contrato : public IMostrar {
private:
    int folio;
    ServicioBase* tipoServicio;  // puntero a servicio seleccionado
    std::string especificaciones;
    std::string periodoServicio;

    Cliente cliente;  // dependencia directa
    std::string nombreReferencia;
    std::string telefonoReferencia;

public:
    Contrato();  // constructor
    ~Contrato(); // destructor para liberar memoria

    void crearContrato(const Servicios& disponibles);  // ahora con parámetro
    void mostrar() const override;
    bool buscar(int folioBuscar) const;
    void modificar();
};

#endif // CONTRATO_H
