/**
  * @file       BarreCarree.cpp
  * @brief      Implémentation de la classe BarreCarree
  */


#include "barrecarree.h"
#include <iostream>

using namespace std;

/**
 * @brief BarreCarree::BarreCarree
 * @details Constructeur de la classe BarreCarree, affiche la longueur du carrée en mm
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nom
 * @param _longueurCarree
 */
BarreCarree::BarreCarree(string _reference, int _longueur, double _densite, string _nom,
                         int _longueurCarree):
    Barre(_reference, _longueur, _densite, _nom),
    longueurCarree(_longueurCarree)
{
    cout << "Constructeur de la classe BarreCarree" << endl;
    cout << "\n";

    cout << "Longueur du carrée : " << longueurCarree << " mm" << endl;
}

/**
 * @brief BarreCarree::~BarreCarree
 * @details Destructeur de la classe BarreCarree
 */
BarreCarree::~BarreCarree()
{
    cout << "\n";
    cout << "Destructeur de la classe BarreCarree" << endl;
}

/**
 * @brief BarreCarree::CalculSection
 * @details Fonction qui retourne le calcul de la longueur du carree par lui même
 * @return
 */
double BarreCarree::CalculSection()
{
    return longueurCarree * longueurCarree;
}

/**
 * @brief BarreCarree::CalculerMasse
 * @details Fonction qui retourne le calcul de la masse de la barre carree
 * @return
 */
double BarreCarree::CalculerMasse()
{
    return (static_cast<double>(longueur)) * CalculSection() * densite;
}
