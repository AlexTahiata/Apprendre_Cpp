#include "element.h"

Element::Element(int _numero, int _vitesse):
    numero(_numero),
    vitesse(_vitesse)
{
    numero = 0;
}

Element::~Element()
{

}

void Element::ObtenirLongueur()
{
    /*int longueurTotale;
    longueurTotale = leSegment.longueur + leSegment2.longueur;
    cout << "\nLongueur totale du parcours = " << longueurTotale << endl;*/
}

void Element::ObtenirDuree()
{
    /*int duree;
    int vitesseTotale;
    vitesseTotale = leSegment.vitesse + leSegment2.vitesse;
    duree = (longueurTotale / vitesseTotale);
    cout << "Durée totale du parcours = " << duree << endl;*/
}

void Element::ObtenirVecteurArivee()
{
    /*x = longueur * cos(angle);
    y = longueur * sin(angle);*/
}

void Element::Afficher()
{

}
