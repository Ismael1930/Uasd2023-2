#include "Conjuntos.h"
#include <iostream>
#include <algorithm>

void Conjuntos::printConjunto(const std::vector<int> &conjunto)
{
    for (int x : conjunto)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

void Conjuntos::Alta(std::vector<int> &conjunto)
{
    int elemento;
    std::cout << "Ingresa el elemento a agregar: ";
    std::cin >> elemento;
    conjunto.push_back(elemento);
}

void Conjuntos::Baja(std::vector<int> &conjunto)
{
    int elemento;
    std::cout << "Ingresa el elemento a eliminar: ";
    std::cin >> elemento;
    auto it = std::find(conjunto.begin(), conjunto.end(), elemento);
    if (it != conjunto.end())
    {
        conjunto.erase(it);
    }
}

bool Conjuntos::Buscar(const std::vector<int> &conjunto, int elemento)
{
    auto it = std::find(conjunto.begin(), conjunto.end(), elemento);
    return it != conjunto.end();
}

void Conjuntos::unionConjunto()
{
    std::vector<int> unionVector;
    std::set_union(conjuntoA.begin(), conjuntoA.end(), conjuntoB.begin(), conjuntoB.end(), std::back_inserter(unionVector));
    conjuntoA = unionVector;
}

void Conjuntos::intersectionConjunto()
{
    std::vector<int> intersectionVector;
    std::set_intersection(conjuntoA.begin(), conjuntoA.end(), conjuntoB.begin(), conjuntoB.end(), std::back_inserter(intersectionVector));
    conjuntoA = intersectionVector;
}

void Conjuntos::differenceConjunto()
{
    std::vector<int> differenceVector;
    std::set_difference(conjuntoA.begin(), conjuntoA.end(), conjuntoB.begin(), conjuntoB.end(), std::back_inserter(differenceVector));
    conjuntoA = differenceVector;
}

std::vector<std::pair<int, int>> Conjuntos::productoCartesiano(const std::vector<int> &conjuntoA, const std::vector<int> &conjuntoB)
{
    std::vector<std::pair<int, int>> productoCartesiano;

    for (int a : conjuntoA)
    {
        for (int b : conjuntoB)
        {
            productoCartesiano.push_back(std::make_pair(a, b));
        }
    }

    return productoCartesiano;
}

std::vector<std::vector<int>> Conjuntos::productoNatural(const std::vector<int> &conjuntoA, const std::vector<int> &conjuntoB)
{
    if (conjuntoA.empty() || conjuntoB.empty())
    {
        return {};
    }

    if (conjuntoA.size() == 1 && conjuntoB.size() == 1)
    {
        return {{conjuntoA[0], conjuntoB[0]}};
    }

    auto subproducto = productoNatural(conjuntoA, {conjuntoB.begin() + 1, conjuntoB.end()});

    for (auto &subconjunto : subproducto)
    {
        subconjunto.insert(subconjunto.begin(), *conjuntoB.begin());
        subconjunto.insert(subconjunto.begin(), *conjuntoA.begin());
    }

    auto restoSubproducto = productoNatural({conjuntoA.begin() + 1, conjuntoA.end()}, {conjuntoB.begin(), conjuntoB.end()});

    subproducto.insert(subproducto.end(), restoSubproducto.begin(), restoSubproducto.end());

    return subproducto;
}