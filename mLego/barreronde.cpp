/**
  * @file       BarreRonde.cpp
  * @brief      Implémentation de la classe BarreRonde
  */

#include "barreronde.h"
#include <iostream>

using namespace std;

/**
 * @brief BarreRonde::BarreRonde
 * @details Constructeur de la classe BarreRonde, affiche le diamètre de la barre ronde et pi
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nom
 * @param _diametre
 * @param _pi
 */
BarreRonde::BarreRonde(string _reference, int _longueur, double _densite, string _nom,
                       int _diametre, double _pi):
    Barre(_reference, _longueur, _densite, _nom),
    diametre(_diametre),
    pi(_pi)
{
    cout << "Constructeur de la classe BarreRonde" << endl;
    cout << "\n";

    cout << "Le diamètre                         : " << diametre << "mm" << endl;
    cout << "Pi                                  : " << pi << endl;
    cout << "\n";
}

/**
 * @brief BarreRonde::~BarreRonde
 * @details Destructeur de la classe BarreRonde
 */
BarreRonde::~BarreRonde()
{
    cout << "\n";
    cout << "Destructeur de la classe BarreRonde" << endl;
}

/**
 * @brief BarreRonde::CalculSection
 * @details Fonction qui retourne le calcul de la section de la barre ronde
 * @return
 */
double BarreRonde::CalculSection()
{
    return pi * (diametre * diametre) / 4;

}

/**
 * @brief BarreRonde::CalculerMasse
 * @details Fonction qui retourne le calcul de la masse de la barre ronde
 * @return
 */
double BarreRonde::CalculerMasse()
{
    return (static_cast<double>(longueur)) * CalculSection() * densite;
}
