#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H
#include <iostream>
#include "element.h"

using namespace std;

class Trajectoire
{
private:
    Element **lElement; // crétion d'un tableau de pointeurs d'élements
    int nbEtapesMax; // nombre maxi de d'étapes du tableau ?
    int prochaineEtape; // index de la prochaine case libre du tableau ?
public:
    Trajectoire(const int _nbEtapesMaxi);
    ~Trajectoire();
    bool Ajouter(const Element *_pElement);
    void Afficher();
};

#endif // TRAJECTOIRE_H
