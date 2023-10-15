#ifndef LISTACIRCULARDOBLE_H
#define LISTACIRCULARDOBLE_H

#include "Nodo.h"

class ListaCircularDoble {
public:
    Nodo* cabeza;
    ListaCircularDoble();
    void insertar(Libro nuevo_libro);
    void eliminar(Libro libro_a_eliminar);
    void vaciar();
    Libro obtenerPrimero();
    Libro obtenerUltimo();
    void imprimir();
};

#endif