#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>

using namespace std;

class Element
{
public:
    Element();
    virtual ~Element(); // destructeur également virtuel si une fonction de la classe est virtuel
    virtual void Afficher() = 0; //fonction virtuelle pure
};

#endif // ELEMENT_H
