#include <iostream>
#include "barre.h"
#include "barreronde.h"
#include "barrerectangle.h"
#include "barrecarree.h"

#include "math.h"

using namespace std;

int main()
{
    //AFFICHAGE DES CARACTERISTIQUES :
    //BarreRonde laBarreRonde("Ref", 5, 7.86, "Acier", 5, M_PI);
    //BarreRectangle laBarreRectangle("Ref", 5, 7.86, "Acier", 10, 5);
    BarreCarree laBarreCarree("Ref", 5, 7.86, "Acier", 5);

    //AFFICHAGE DES SECTIONS :
    //cout << "La section de la barre ronde est de : " << laBarreRonde.CalculSection() << " mm2" << endl;
    //cout << "La section de la barre rectangle est de : " << laBarreRectangle.CalculSection() << " mm2" << endl;
    cout << "La section de la barre carree est de : " << laBarreCarree.CalculSection() << " mm2" << endl;

    //AFFICHAGE DES MASSES :
    //cout << "La masse de la barre ronde est de   : " << laBarreRonde.CalculerMasse() << "g" << endl;
    //cout << "La masse de la barre rectangle est de   : " << laBarreRectangle.CalculerMasse() << "g" << endl;
    cout << "La masse de la barre carree est de   : " << laBarreCarree.CalculerMasse() << "g" << endl;
    return 0;
}
