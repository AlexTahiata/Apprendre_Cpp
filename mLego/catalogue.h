#ifndef CATALOGUE_H
#define CATALOGUE_H

#include "barre.h"

class Catalogue
{
public:
    Catalogue(const int _nbBarres);
    ~Catalogue();
    bool AjouterBarre(Barre *ptrBarre);
    void AfficherCatalogue();
private:
    const int nbBarres; //nombre maxi de barres dans le tableau
    Barre **lesBarres; // index de la prochaine case libre du tableau
    int index; //index de la prochaine case libre du tableau
};

#endif // CATALOGUE_H
