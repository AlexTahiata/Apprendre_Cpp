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
    if (prochaineEtape < nbEtapesMax) {
        parcours[prochaineEtape++] = pElement;
        parcours[prochaineEtape-1]->setNumero(prochaineEtape);
        //pElement->setNumero();
    } else {
        retour = false;
    }
    return retour;
}

void Trajectoire::Afficher()
{
    cout << "Trajectoire : \n" << endl;

    double longueurTotale = 0;

    for (int indice = 0; indice < nbEtapesMax; indice++)
    {
        longueurTotale += parcours[indice]->ObtenirLongueur();
        cout << "(" << parcours[indice]->getNumero() << ") " ;
        parcours[indice]->Afficher();
    }

    cout << "Logueur totale: " << longueurTotale << endl;

}
