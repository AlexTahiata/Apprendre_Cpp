/**
  * @file       Barre.h
  * @brief      Implémentation de la classe Barre
  * @version    1.1
  * @author     Alex TAHIATA
  * @date       20 septembre 2019
  */

#include "barre.h"
#include <iostream>

using namespace std;

/**
 * @brief Barre::Barre
 * @details Constructeur de la classe Barre, affectant tous les paramètres suivants
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nom
 */
Barre::Barre(string _reference, int _longueur, double _densite, string _nom):
    reference(_reference),
    longueur(_longueur),
    densite(_densite),
    nom(_nom)
{
    cout << "Constructeur de la classe Barre" << endl;
    cout << "\n";

    /*cout << "La référence est : " << reference << endl;
    cout << "La longueur est de : " << longueur << " m" << endl;
    cout << "La densité est de : " << densite << " g/cm3" << endl;
    cout << "Le nom du matériau est : " << nom << endl;
    cout << "\n";*/
}

/**
 * @brief Barre::~Barre
 * @details Destructeur de la classe Barre
 */
Barre::~Barre()
{
    cout << "Destructeur de la classe Barre" << endl;
}

/**
 * @brief Barre::AfficherCaracteristiques
 * @details Fonction qui affiche les caractéristiques de la classe Barre
 */
void Barre::AfficherCaracteristiques()
{
    cout << "Affichage des caractéristiques" << endl;
    cout << "La reference : " << reference << endl;
    cout << "La longueur : " << longueur << endl;
    cout << "La densité : " << densite << endl;
    cout << "Le nom : " << nom << endl;
    cout << "\n";
}

