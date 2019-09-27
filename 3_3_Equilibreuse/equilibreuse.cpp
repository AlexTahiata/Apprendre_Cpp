#include "equilibreuse.h"
#include <iostream>

using namespace std;

Equilibreuse::Equilibreuse()
{
    cout << "Constructeur de la classe Equilibreuse" << endl;
    leMoteur = new Moteur(laCarte);
    leCodeur = new Codeur(laCarte);
}

Equilibreuse::~Equilibreuse() // Destructeur nécessaire pour détruire la mémoire allouée dynamiquement
{
    cout << "Destructeur de la classe Equilibreuse" << endl;
    delete leMoteur;
    delete leCodeur;
}
