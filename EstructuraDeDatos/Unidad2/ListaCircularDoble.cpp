#include "ListaCircularDoble.h"

#include <iostream>

ListaCircularDoble::ListaCircularDoble() {
    cabeza = NULL;

    Libro libro1 = {"El gran Gatsby", "F. Scott Fitzgerald", 1925};
    Libro libro2 = {"Cien años de soledad", "Gabriel García Márquez", 1967};
    Libro libro3 = {"1984", "George Orwell", 1949};

    insertar(libro1);
    insertar(libro2);
    insertar(libro3);
}

void ListaCircularDoble::insertar(Libro nuevo_libro) {
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->libro = nuevo_libro;
    nuevo_nodo->siguiente = cabeza;
    nuevo_nodo->anterior = NULL;

    if (cabeza != NULL) {
        cabeza->anterior = nuevo_nodo;
        Nodo* ultimo_nodo = cabeza->anterior;
        ultimo_nodo->siguiente = nuevo_nodo;
    } else {
        nuevo_nodo->anterior = nuevo_nodo;
    }

    cabeza = nuevo_nodo;
}

void ListaCircularDoble::eliminar(Libro libro_a_eliminar) {
    Nodo* nodo_actual = cabeza;

    do {
        if (nodo_actual->libro.titulo == libro_a_eliminar.titulo && nodo_actual->libro.autor == libro_a_eliminar.autor && nodo_actual->libro.anio_publicacion == libro_a_eliminar.anio_publicacion) {
            if (nodo_actual == cabeza) {
                cabeza = nodo_actual->siguiente;
            }

            if (nodo_actual->anterior != NULL) {
                nodo_actual->anterior->siguiente = nodo_actual->siguiente;
            }

            if (nodo_actual->siguiente != NULL) {
                nodo_actual->siguiente->anterior = nodo_actual->anterior;
            }

            delete nodo_actual;

            return;
        }

        nodo_actual = nodo_actual->siguiente;
    } while (nodo_actual != cabeza);
}

void ListaCircularDoble::vaciar() {
    Nodo* nodo_actual = cabeza;

    while (nodo_actual != NULL) {
        Nodo* siguiente_nodo = nodo_actual->siguiente;

        delete nodo_actual;

        nodo_actual = siguiente_nodo;

        if (nodo_actual == cabeza) {
            break;
        }
    }

    cabeza = NULL;
}

Libro ListaCircularDoble::obtenerPrimero() {
    return cabeza->libro;
}

Libro ListaCircularDoble::obtenerUltimo() {
    return cabeza->anterior->libro;
}

void ListaCircularDoble::imprimir() {
    Nodo* nodo_actual = cabeza;

    if (cabeza != NULL) {
        std::cout << "Lista de libros:" << std::endl << std::endl;

        do {
            std::cout << "Titulo: " << nodo_actual->libro.titulo << std::endl;
            std::cout << "Autor: " << nodo_actual->libro.autor << std::endl;
            std::cout << "Ano de publicacion: " << nodo_actual->libro.anio_publicacion << std::endl << std::endl;

            nodo_actual = nodo_actual->siguiente;
        } while (nodo_actual != cabeza);
        
        std::cout << std::endl;
    } else {
        std::cout << "La lista está vacía." << std::endl << std::endl;
    }
}