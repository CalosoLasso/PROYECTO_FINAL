#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>
#include "IMostrar.h"

class Empleado : public IMostrar {
private:
    int noEmpleado;
    std::string codigoEmpleado;
    std::string nombre;
    std::string RFC;
    std::string fechaIngreso;

public:
    Empleado();
    Empleado(int noEmp, const std::string& codEmp, const std::string& nom,
        const std::string& rfc, const std::string& fecha);

    void agregar();
    void mostrar() const override;
    bool buscar(const std::string& codEmp) const;
    void modificar();
};

#endif