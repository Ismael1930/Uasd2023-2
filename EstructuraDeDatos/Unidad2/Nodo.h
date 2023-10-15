#ifndef NODO_H
#define NODO_H

#include "Libro.h"

class Nodo {
public:
    Libro libro;
    Nodo* siguiente;
    Nodo* anterior;
};

#endif