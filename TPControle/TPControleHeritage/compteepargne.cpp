#include "compteepargne.h"
#include <iostream>

using namespace std;

CompteEpargne::CompteEpargne()
{
    cout << "Constructeur de la classe CompteEpargne" << endl;

    solde = 0;
}

CompteEpargne::~CompteEpargne()
{
    cout << "Destructeur de la classe CompteEpargne" << endl;
}

CompteEpargne::CompteEpargne(const float montant_initial):
    Compte (montant_initial)
{
    cout << "Constructeur de la classe CompteEpargne avec montant_initial" << endl;

    cout << "Veuillez préciser le montant initial de votre solde : " << montant_initial << endl;
    solde = montant_initial;
    cout << "Votre solde initial est de : " << solde << endl;
}

void CompteEpargne::CalculerInterets(float tauxInteret)
{
    tauxInteret = 1.5;
    solde = solde * tauxInteret;
}
