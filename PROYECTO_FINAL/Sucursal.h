#ifndef SUCURSAL_H
#define SUCURSAL_H
#include <string>
#include <vector>
#include "Empleado.h"
#include "IMostrar.h"

class Sucursal : public IMostrar {
private:
    int noSucursal;
    std::string domicilio, ciudad, estado, telefono, nombreGerente;
    std::vector<Empleado> empleados;

public:
    Sucursal();
    void agregar();
    void mostrar() const override;
    int getNoSucursal() const;
    bool buscar(int numero) const;
    void modificar();
    void agregarEmpleado(const Empleado& emp);
};

#endif // SUCURSAL_H
