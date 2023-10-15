#include <iostream>
#include "ListaCircularDoble.h"

int main() {
    ListaCircularDoble lista_libros;

    Libro libro1 = {"El gran Gatsby", "F. Scott Fitzgerald", 1925};
    Libro libro2 = {"Cien años de soledad", "Gabriel García Márquez", 1967};
    Libro libro3 = {"Alicia en el pais de las maravillas", "George Orwell", 1949};

    lista_libros.insertar(libro1);
    lista_libros.insertar(libro2);
    lista_libros.insertar(libro3);

    std::cout << "Lista original:" << std::endl << std::endl;

    lista_libros.imprimir();

    std::cout << "Primer libro: " << lista_libros.obtenerPrimero().titulo << std::endl << std::endl;

    std::cout << "Último libro: " << lista_libros.obtenerUltimo().titulo << std::endl << std::endl;

    Libro libro_a_eliminar = {"1984", "George Orwell", 1949};

    lista_libros.eliminar(libro_a_eliminar);

    std::cout << "Lista después de eliminar un libro:" << std::endl << std::endl;

    lista_libros.imprimir();

    lista_libros.vaciar();

    std::cout << "Lista después de vaciarla:" << std::endl << std::endl;

    lista_libros.imprimir();
}