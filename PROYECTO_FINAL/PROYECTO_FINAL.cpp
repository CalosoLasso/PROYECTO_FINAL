#include <iostream>
#include <vector>
#include "Sucursal.h"
#include "Contrato.h"
#include "Servicios.h"

void menu();

int main() {
    std::vector<Sucursal> sucursales;
    std::vector<Contrato> contratos;
    Servicios servicios;

    int opcion;

    do {
        menu();
        std::cin >> opcion;
        std::cin.ignore();

        switch (opcion) {
        case 1: {
            Sucursal nueva;
            nueva.agregar();
            sucursales.push_back(nueva);
            break;
        }
        case 2: {
            std::cout << "=========Lista de sucursales=========" << std::endl;
            for (const auto& suc : sucursales)
                suc.mostrar();
                std::cout<<"============="<<std::endl;
            break;
        }
        case 3: {
            Empleado emp;
            emp.agregar();

            if (sucursales.empty()) {
                std::cout << "No hay sucursales registradas.\n";
                break;
            }

            std::cout << "Seleccione la sucursal a la que desea agregar el empleado:\n";
            for (size_t i = 0; i < sucursales.size(); ++i) {
                std::cout << i << ". Sucursal con número: " << sucursales[i].buscar(i + 1) << "\n";
            }

            for (size_t i = 0; i < sucursales.size(); ++i) {
                std::cout << i << ". Sucursal #" << sucursales[i].buscar(i + 1) << "\n";
            }

            for (size_t i = 0; i < sucursales.size(); ++i) {
                std::cout << i << ". Sucursal #" << sucursales[i].getNoSucursal() << "\n";
            }

            int index;
            std::cout << "Ingrese el índice de la sucursal: ";
            std::cin >> index;

            if (index >= 0 && static_cast<size_t>(index) < sucursales.size()) {
                sucursales[index].agregarEmpleado(emp);
                std::cout << "Empleado agregado a la sucursal #" << sucursales[index].getNoSucursal() << ".\n";
            }
            else {
                std::cout << "Índice inválido.\n";
            }

            break;


        }
        case 4: {
            Contrato nuevoContrato;
            nuevoContrato.crearContrato(servicios);
            contratos.push_back(nuevoContrato);
            break;
        }
        case 5: {
            for (const auto& c : contratos)
                c.mostrar();
            break;
        }
        case 6: {
            servicios.mostrarSeleccion();
            break;
        }
        case 0:
            std::cout << "Saliendo del sistema...\n";
            break;
        default:
            std::cout << "Opción inválida.\n";
        }

        std::cout << "\nPresiona Enter para continuar...\n";
        std::cin.get();

    } while (opcion != 0);

    return 0;
}

void menu() {
    std::cout << "========= SISTEMA POO =========\n";
    std::cout << "1. Agregar Sucursal\n";
    std::cout << "2. Mostrar Sucursales y Empleados\n";
    std::cout << "3. Agregar Empleado a una Sucursal\n";
    std::cout << "4. Crear Contrato\n";
    std::cout << "5. Mostrar Contratos\n";
    std::cout << "6. Mostrar Tipos de Servicio\n";
    std::cout << "0. Salir\n";
    std::cout << "Seleccione una opción: ";
}
