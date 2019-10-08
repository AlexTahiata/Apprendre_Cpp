#include "catalogue.h"
#include <iostream>

using namespace std;

Catalogue::Catalogue(const int _nbBarres):
    nbBarres(_nbBarres)
{
    lesBarres = new Barre *[nbBarres];
    index = 0;
}

Catalogue::~Catalogue()
{
    delete[] lesBarres;
}

bool Catalogue::AjouterBarre(Barre *ptrBarre)
{
    bool retour = true;
    if (index < nbBarres)
        lesBarres[index++] = ptrBarre;
    else
        retour = false;
        return retour;
}

void Catalogue::AfficherCatalogue()
{
    for (int indice = 0; indice < nbBarres ; indice++)
    {
        lesBarres[indice]->AfficherCaracteristiques();
        //cout << lesBarres[indice]->CalculerMasse() << endl;
    }
}
