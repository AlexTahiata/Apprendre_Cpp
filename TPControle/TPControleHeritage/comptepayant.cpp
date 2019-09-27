#include "comptepayant.h"
#include <iostream>

using namespace std;

void ComptePayant::ConsulterSolde()
{
    cout << "Le solde est actuellement de : " << solde << endl;
}

void ComptePayant::Deposer(const float montant)
{
    cout << "Vous souhaitez déposer : " << montant << endl;
    solde = solde + montant - operationPayante;
    cout << "Votre solde est de : " << solde << endl;
}

void ComptePayant::Retirer(const float montant)
{
    cout << "Vous souhaitez retirer : " << montant << endl;
    solde = solde - montant - operationPayante;
    cout << "Votre solde est de : " << solde << endl;
}

ComptePayant::ComptePayant()
{
    cout << "Constructeur de la classe ComptePayant" << endl;
    operationPayante = 1;
    solde = 0;
}

ComptePayant::~ComptePayant()
{
    cout << "Destructeur de la classe ComptePayant" << endl;
}

ComptePayant::ComptePayant(const float montant_initial):
    Compte(montant_initial)
{
    cout << "Constructeur de la classe ComptePayant avec montant_initial" << endl;

    cout << "Veuillez préciser le montant initial de votre solde : " << montant_initial << endl;
    solde = montant_initial;
    cout << "Votre solde initial est de : " << solde << endl;
}
