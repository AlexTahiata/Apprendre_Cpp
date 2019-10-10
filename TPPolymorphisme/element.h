#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>

using namespace std;

class Element
{
protected:
    int numero;
    int vitesse;
public:
    Element(int _numero, int _vitesse);
    virtual ~Element(); // destructeur également virtuel si une fonction de la classe est virtuel
    virtual void Afficher() = 0; //fonction virtuelle pure

    virtual void ObtenirLongueur(); //retourne la longueur de l'élément
    virtual void ObtenirDuree(); //retourne le temps mis pour réaliser le mouvement de l'élément
    virtual void ObtenirVecteurArivee(); //retourne le vecteur résultant de l'élément
};

#endif // ELEMENT_H
