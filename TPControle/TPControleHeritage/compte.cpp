#include "compte.h"
#include <iostream>

using namespace std;

void Compte::ConsulterSolde()
{
    cout << "Le solde est actuellement de : " << solde << endl;
}

void Compte::Deposer(const float montant)
{
    cout << "Vous souhaitez déposer : " << montant << endl;
    solde = solde + montant;
    cout << "Votre solde est de : " << solde << endl;
}

void Compte::Retirer(const float montant)
{
    cout << "Vous souhaitez retirer : " << montant << endl;
    solde = solde - montant;
    cout << "Votre solde est de : " << solde << endl;
}

Compte::Compte()
{
    cout << "Constructeur de la classe Compte" << endl;

    solde = 0;
}

Compte::~Compte()
{
    cout << "Destructeur de la classe Compte" << endl;
}

Compte::Compte(const float montant_initial)
{
    cout << "Constructeur de la classe CompteEpargne avec montant_initial" << endl;

    cout << "Veuillez préciser le montant initial de votre solde : " << montant_initial << endl;
    solde = montant_initial;
    cout << "Votre solde initial est de : " << solde << endl;
}
