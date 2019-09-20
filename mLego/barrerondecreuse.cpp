/**
  * @file       BarreRondeCreuse.cpp
  * @brief      Implémentation de la classe BarreRondeCreuse
  */

#include "barrerondecreuse.h"
#include "barreronde.h"
#include <iostream>

using namespace std;

/**
 * @brief BarreRondeCreuse::BarreRondeCreuse
 * @details Constructeur de la classe BarreRondeCreuse, affiche le diamètre intérieur de la barre ronde creuse
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nom
 * @param _diametre
 * @param _pi
 * @param _diametreInterieur
 */
BarreRondeCreuse::BarreRondeCreuse(string _reference, int _longueur, double _densite, string _nom,
                                   int _diametre, double _pi,
                                   int _diametreInterieur):
    BarreRonde(_reference, _longueur, _densite, _nom, _diametre, _pi),
    diametreInterieur(_diametreInterieur)
{
    cout << "Constructeur de la classe BarreRondeCreuse" << endl;
    cout << "\n";

    cout << "Le diamètre intérieur est de : " << diametreInterieur << " mm2" << endl;
    cout << "\n";
}

/**
 * @brief BarreRondeCreuse::~BarreRondeCreuse
 * @details Destructeur de la classe BarreRondeCreuse
 */
BarreRondeCreuse::~BarreRondeCreuse()
{
    cout << "\n";
    cout << "Destructeur de la classe BarreRondeCreuse" << endl;
}

/**
 * @brief BarreRondeCreuse::CalculSection
 * @details Fonction qui retourne le calcul de la section de la barre ronde creuse
 * @return
 */
double BarreRondeCreuse::CalculSection()
{
    return BarreRonde::CalculSection() - (pi * (diametreInterieur * diametreInterieur) / 4);
}

/**
 * @brief BarreRondeCreuse::CalculerMasse
 * @details Fonction qui retourne le calcul de la masse de la barre ronde creuse
 * @return
 */
double BarreRondeCreuse::CalculerMasse()
{
    return (static_cast<double>(longueur)) * CalculSection() * densite;
}
