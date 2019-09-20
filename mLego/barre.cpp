#include "barre.h"
#include <iostream>

using namespace std;

Barre::Barre(string _reference, int _longueur, double _densite, string _nom):
    reference(_reference),
    longueur(_longueur),
    densite(_densite),
    nom(_nom)
{
    cout << "Constructeur de la classe Barre" << endl;
    cout << "\n";

    cout << "La référence est : " << reference << endl;
    cout << "La longueur est de : " << longueur << " m" << endl;
    cout << "La densité est de : " << densite << " g/cm3" << endl;
    cout << "Le nom du matériau est : " << nom << endl;
    cout << "\n";
}

Barre::~Barre()
{
    cout << "Destructeur de la classe Barre" << endl;
}

void Barre::AfficherCaracteristiques()
{
    cout << "Affichage des caractéristiques" << endl;
    cout << "La reference : " << reference << endl;
    cout << "La longueur : " << longueur << endl;
    cout << "La densité : " << densite << endl;
    cout << "Le nom : " << nom << endl;
}

