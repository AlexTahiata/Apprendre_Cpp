#include "trajectoire.h"

Trajectoire::Trajectoire(const int _nbEtapesMax):
    nbEtapesMax(_nbEtapesMax)
{
    parcours = new Element *[nbEtapesMax];
    prochaineEtape = 0;
}

Trajectoire::~Trajectoire()
{
    delete[] parcours;
}

bool Trajectoire::Ajouter(Element *pElement)
{
    bool retour = true;
    int numero = 0;
    if (prochaineEtape < nbEtapesMax){
        parcours[prochaineEtape++] = pElement;
        numero += 1;
        cout << "(" << numero << ")";
    } else {
        retour = false;
    }
    return retour;
}

void Trajectoire::Afficher()
{
    cout << "Trajectoire : \n" << endl;

    for (int indice = 0; indice < nbEtapesMax; indice++)
    {
        parcours[indice]->Afficher();
    }
}
