#include "moteur.h"
#include "microdacqlite.h"
#include <iostream>

using namespace std;

Moteur::Moteur(MicroDacqLite & _laCarte):
    laCarte(_laCarte) // initialisation de la relation d'agrégation
{
    cout << "Constructeur de la classe Moteur" << endl;
    consigneVitesse = 0;
}
