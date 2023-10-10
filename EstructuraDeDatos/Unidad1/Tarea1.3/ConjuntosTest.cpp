#include "Conjuntos.h"
#include <iostream>

int main()
{

    int opcion = 0;
    while (opcion <= 7)
    {
        Conjuntos conjuntos;

        std::cout << "------------------------------------\n";
        std::cout << "Conjuntos Originales\n";
        std::cout << "Conjunto A: ";
        conjuntos.printConjunto(conjuntos.conjuntoA);
        std::cout << "Conjunto B: ";
        conjuntos.printConjunto(conjuntos.conjuntoB);

        std::cout << "--------------MENU-------------\n";
        std::cout << "Elige una opcion:\n";
        std::cout << "1. Agregar o eliminar elemento\n";
        std::cout << "2. Buscar elemento\n";
        std::cout << "3. Union\n";
        std::cout << "4. Interseccion\n";
        std::cout << "5. Diferencia\n";
        std::cout << "6. Producto Natural\n";
        std::cout << "7. Producto Carteciano\n";
        std::cout << "Opcion:";
        std::cin >> opcion;
        std::cout << "------------------------------------\n";

        switch (opcion)
        {
            case 1:
                int opcionAgregarEliminar;
                int opcionConjunto;

                std::cout << "Elige una opcion:\n";
                std::cout << "1. Agregar elemento\n";
                std::cout << "2. Eliminar elemento\n";
                std::cin >> opcionAgregarEliminar;

                if (opcionAgregarEliminar == 1 || opcionAgregarEliminar == 2)
                {
                    std::cout << "Elige el conjunto:\n";
                    std::cout << "1. Conjunto A\n";
                    std::cout << "2. Conjunto B\n";
                    std::cin >> opcionConjunto;

                    if (opcionConjunto == 1)
                    {
                        if (opcionAgregarEliminar == 1)
                        {
                            conjuntos.Alta(conjuntos.conjuntoA);
                        }
                        else if (opcionAgregarEliminar == 2)
                        {
                            conjuntos.Baja(conjuntos.conjuntoA);
                        }
                        std::cout << "Nuevo Conjunto:";
                        conjuntos.printConjunto(conjuntos.conjuntoA);
                        std::cout << "------------------------------------\n";
                    }
                    else if (opcionConjunto == 2)
                    {
                        if (opcionAgregarEliminar == 1)
                        {
                            conjuntos.Alta(conjuntos.conjuntoB);
                        }
                        else if (opcionAgregarEliminar == 2)
                        {
                            conjuntos.Baja(conjuntos.conjuntoB);
                        }
                        std::cout << "Nuevo Conjunto:";
                        conjuntos.printConjunto(conjuntos.conjuntoB);
                        std::cout << "------------------------------------\n";
                    }
                }
                break;
            case 2:
                int elementoBuscar;
                std::cout << "Ingresa el elemento a buscar: ";
                std::cin >> elementoBuscar;
                if (conjuntos.Buscar(conjuntos.conjuntoA, elementoBuscar))
                {
                    std::cout << "El elemento esta en el conjunto\n";
                    std::cout << "------------------------------------\n";
                }
                else
                {
                    std::cout << "El elemento no esta en el conjunto\n";
                    std::cout << "------------------------------------\n";
                }
                break;
            case 3:
                conjuntos.unionConjunto();
                std::cout << "Union de A y B: ";
                conjuntos.printConjunto(conjuntos.conjuntoA);
                std::cout << "------------------------------------\n";
                break;
            case 4:
                conjuntos.intersectionConjunto();
                std::cout << "Interseccion de A y B: ";
                conjuntos.printConjunto(conjuntos.conjuntoA);
                std::cout << "------------------------------------\n";
                break;
            case 5:
                conjuntos.differenceConjunto();
                std::cout << "Diferencia de A y B: ";
                conjuntos.printConjunto(conjuntos.conjuntoA);
                std::cout << "------------------------------------\n";
                break;
            case 6:
            {

                std::vector<std::vector<int>> resultadoProductoNatural = conjuntos.productoNatural(conjuntos.conjuntoA, conjuntos.conjuntoB);
                std::cout << "El Producto Natural es: ";
                for (const auto &subconjunto : resultadoProductoNatural)
                {
                    conjuntos.printConjunto(subconjunto);
                }
                std::cout << "------------------------------------\n";
                break;
            }
            case 7:
            {

                std::vector<std::pair<int, int>> resultadoProductoCartesiano = conjuntos.productoCartesiano(conjuntos.conjuntoA, conjuntos.conjuntoB);
                std::cout << "El Producto Carteciano es: ";
                for (const auto &par : resultadoProductoCartesiano)
                {
                    std::vector<int> subconjunto = {par.first, par.second};
                    conjuntos.printConjunto(subconjunto);
                }
                std::cout << "------------------------------------\n";
                break;
            }
            default:
                std::cout << "Opcion invalida\n";
            break;
        }
    }

    return 0;
}