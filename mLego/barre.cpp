#include "barre.h"
#include <iostream>

using namespace std;

Barre::Barre(string _reference, int _longueur, float _densite, string _nom):
    reference(_reference),
    longueur(_longueur),
    densite(_densite),
    nom(_nom)
{
    cout << "Constructeur de la classe Barre" << endl;
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

