#include "barrerectangle.h"
#include <iostream>

using namespace std;

BarreRectangle::BarreRectangle(string _reference, int _longueur, float _densite, string _nom,
                               int _longueurCercle, int _largeurCercle):
    Barre(_reference, _longueur, _densite, _nom),
    longueurCercle(_longueurCercle),
    largeurCercle(_largeurCercle)
{
    cout << "Constructeur de la classe BarreRectangle" << endl;

    cout << "Longueur du cercle : " << longueurCercle << " mm" <<endl;
    cout << "Largeur du cercle : " << largeurCercle << " mm" << endl;
}

BarreRectangle::~BarreRectangle()
{
    cout << "Destructeur de la classe BarreRectangle" << endl;
}

double BarreRectangle::CalculSection()
{
    return longueurCercle * largeurCercle;
}
