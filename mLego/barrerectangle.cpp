/**
  * @file       BarreRectangle.cpp
  * @brief      Implémentation de la classe BarreRectangle
  */

#include "barrerectangle.h"
#include <iostream>

using namespace std;

/**
 * @brief BarreRectangle::BarreRectangle
 * @details Constructeur de la classe BarreRectangle, affiche la longueur et la largeur du rectangle
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nom
 * @param _longueurCercle
 * @param _largeurCercle
 */
BarreRectangle::BarreRectangle(string _reference, int _longueur, double _densite, string _nom,
                               int _longueurCercle, int _largeurCercle):
    Barre(_reference, _longueur, _densite, _nom),
    longueurCercle(_longueurCercle),
    largeurCercle(_largeurCercle)
{
    cout << "Constructeur de la classe BarreRectangle" << endl;
    cout << "\n";

    cout << "Longueur du rectangle : " << longueurCercle << " mm" <<endl;
    cout << "Largeur du rectangle : " << largeurCercle << " mm" << endl;
}

/**
 * @brief BarreRectangle::~BarreRectangle
 * @details Destructeur de la classe BarreRectangle
 */
BarreRectangle::~BarreRectangle()
{
    cout << "\n";
    cout << "Destructeur de la classe BarreRectangle" << endl;
}

/**
 * @brief BarreRectangle::CalculSection
 * @details Fonction qui retourne le calcul de la section du cercle
 * @return
 */
double BarreRectangle::CalculSection()
{
    return longueurCercle * largeurCercle;
}

/**
 * @brief BarreRectangle::CalculerMasse
 * @details Fonction qui retourne le calcul de la masse du cercle
 * @return
 */
double BarreRectangle::CalculerMasse()
{
    return (static_cast<double>(longueur)) * CalculSection() * densite;
}
