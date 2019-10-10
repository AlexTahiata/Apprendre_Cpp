#include "trajectoire.h"

Trajectoire::Trajectoire(const int _nbEtapesMaxi):
    nbEtapesMax(_nbEtapesMaxi)
{
    lElement = new Element *[nbEtapesMax];
    prochaineEtape = 0;
}

Trajectoire::~Trajectoire()
{
    delete[] lElement;
}

bool Trajectoire::Ajouter(const Element *_pElement)
{
    bool retour = true;
    if (prochaineEtape < nbEtapesMax)
        lElement[prochaineEtape++] /*= pElement*/;
    else
        retour = false;
    return retour;
}

void Trajectoire::Afficher()
{
    /*for (int indice = 0; indice < nbEtapesMax; indice++)
    {
        lElement[indice]->Afficher();
    }*/
    cout << "Trajectoire" << endl;
}
