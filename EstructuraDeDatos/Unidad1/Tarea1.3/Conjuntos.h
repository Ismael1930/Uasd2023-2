#ifndef CONJUNTOS_H
#define CONJUNTOS_H

#include <vector>

class Conjuntos {
public:

    std::vector<int> conjuntoA = {1,2,3,3,4,5};
    std::vector<int> conjuntoB = {4,5,6,7,8,9};

    void printConjunto(const std::vector<int>& conjunto);
    void unionConjunto();
    void intersectionConjunto();
    void differenceConjunto();
    void Alta(std::vector<int>& conjunto);
    void Baja(std::vector<int>& conjunto);
    bool Buscar(const std::vector<int>& conjunto, int elemento);
    std::vector<std::pair<int, int>> productoCartesiano(const std::vector<int>& conjuntoA, const std::vector<int>& conjuntoB);
    std::vector<std::vector<int>> productoNatural(const std::vector<int>& conjuntoA, const std::vector<int>& conjuntoB);
};

#endif