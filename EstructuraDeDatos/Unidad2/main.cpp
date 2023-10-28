#include <iostream>
#include "ListaCircularDoble.h"

int main() {
    ListaCircularDoble lista_libros;

    int opcion = 0;

    while (opcion < 6) {


        std::cout << "Seleccione una opcion:" << std::endl;
        std::cout << "1. Insertar" << std::endl;
        std::cout << "2. Eliminar" << std::endl;
        std::cout << "3. Vaciar" << std::endl;
        std::cout << "4. Obtener primero" << std::endl;
        std::cout << "5. Obtener ultimo" << std::endl;
        std::cout << "6. Salir" << std::endl;

        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                Libro nuevo_libro;
                std::cout << "Ingrese el titulo del libro: ";
                std::cin >> nuevo_libro.titulo;
                std::cout << "Ingrese el autor del libro: ";
                std::cin >> nuevo_libro.autor;
                std::cout << "Ingrese el año de publicacion del libro: ";
                std::cin >> nuevo_libro.anio_publicacion;

                lista_libros.insertar(nuevo_libro);

                lista_libros.imprimir();

                break;
            }
            case 2: {
                Libro libro_a_eliminar;
                std::cout << "Ingrese el titulo del libro a eliminar: ";
                std::cin >> libro_a_eliminar.titulo;
                std::cout << "Ingrese el autor del libro a eliminar: ";
                std::cin >> libro_a_eliminar.autor;
                std::cout << "Ingrese el año de publicacion del libro a eliminar: ";
                std::cin >> libro_a_eliminar.anio_publicacion;

                lista_libros.eliminar(libro_a_eliminar);

                lista_libros.imprimir();

                break;
            }
            case 3: {
                lista_libros.vaciar();

                lista_libros.imprimir();

                break;
            }
            case 4: {
                Libro primer_libro = lista_libros.obtenerPrimero();

                std::cout << "El primer libro en la lista es:" << std::endl;
                std::cout << "Titulo: " << primer_libro.titulo << ", Autor: " << primer_libro.autor << ", Año de publicacion: " << primer_libro.anio_publicacion << "." << std::endl;

                break;
            }
            case 5: {
                Libro ultimo_libro = lista_libros.obtenerUltimo();

                std::cout << "El ultimo libro en la lista es:" << std::endl;
                std::cout << "Titulo: " << ultimo_libro.titulo << ", Autor: " << ultimo_libro.autor << ", Año de publicacion: " << ultimo_libro.anio_publicacion << "." << std::endl;

                break;
            }
            case 6:
                break;
            default:
                std::cout << "Opcion invalida." << std::endl;

                break;
        }

    }

    return 0;
}