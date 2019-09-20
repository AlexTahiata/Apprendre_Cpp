/**
  * @file       BarreCarreeCreuse.cpp
  * @brief      Implémentation de la classe BarreCarreeCreuse
  */

#include "barrecarreecreuse.h"
#include "barrecarree.h"
#include <iostream>

/**
 * @brief BarreCarreeCreuse::BarreCarreeCreuse
 * @details Constructeur de la classe BarreCarreeCreuse, affiche le côté intérieur de la classe BarreCarreeLongueur
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nom
 * @param _longueurCarree
 * @param _coteInterieur
 */
BarreCarreeCreuse::BarreCarreeCreuse(string _reference, int _longueur, double _densite, string _nom,
                                     int _longueurCarree,
                                     int _coteInterieur):
    BarreCarree (_reference, _longueur, _densite, _nom, _longueurCarree),
    coteInterieur(_coteInterieur)
{
    cout << "Constructeur de la classe BarreCarreeCreuse" << endl;
    cout << "\n";

    cout << "La côte intérieur du carrée est : " << coteInterieur << " mm" << endl;
    cout << "\n";
}

/**
 * @brief BarreCarreeCreuse::~BarreCarreeCreuse
 * @details Destructeur de la classe BarreCarreCreuse
 */
BarreCarreeCreuse::~BarreCarreeCreuse()
{
    cout << "\n";
    cout << "Destructeur de la classe BarreCarreeCreuse" << endl;
}

/**
 * @brief BarreCarreeCreuse::CalculSection
 * @details Fonction qui retourne le calcul de la section de la barre carree creuse
 * @return
 */
double BarreCarreeCreuse::CalculSection()
{
    return BarreCarree::CalculSection() - (coteInterieur * coteInterieur);
}

/**
 * @brief BarreCarreeCreuse::CalculerMasse
 * @details Fonction qui retourne le calcul de la masse de la barre carree creuse
 * @return
 */
double BarreCarreeCreuse::CalculerMasse()
{
    return (static_cast<double>(longueur)) * CalculSection() * densite;
}
