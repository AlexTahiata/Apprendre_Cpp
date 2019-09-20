#include <iostream>
#include "barre.h"
#include "barreronde.h"
#include "barrerectangle.h"
#include "barrecarree.h"
#include "barrerondecreuse.h"
#include "barrecarreecreuse.h"

#include "math.h"

using namespace std;

int main()
{
    //AFFICHAGE DES CARACTERISTIQUES :
    //BarreRonde laBarreRonde("1", 5, 7.86, "Acier", 5, M_PI);
    //BarreRectangle laBarreRectangle("2", 5, 7.86, "Acier", 10, 5);
    //BarreCarree laBarreCarree("3", 5, 7.86, "Acier", 5);

    //BarreRondeCreuse laBarreRondeCreuse("11", 5, 7.86, "Acier", 5, M_PI, 2);
    BarreCarreeCreuse laBarreCarreeCreuse("33", 5, 7.86, "Acier", 5, 2);

    laBarreCarreeCreuse.AfficherCaracteristiques();

    //AFFICHAGE DES SECTIONS :
    //cout << "La section de la barre ronde est de : " << laBarreRonde.CalculSection() << " mm2" << endl;
    //cout << "La section de la barre rectangle est de : " << laBarreRectangle.CalculSection() << " mm2" << endl;
    //cout << "La section de la barre carree est de : " << laBarreCarree.CalculSection() << " mm2" << endl;

    //cout << "La section de la barre ronde creuse est de : " << laBarreRondeCreuse.CalculSection() << " mm2" << endl;
    cout << "La section de la barre carree creuse est de : " << laBarreCarreeCreuse.CalculSection() << " mm2" << endl;

    //AFFICHAGE DES MASSES :
    //cout << "La masse de la barre ronde est de   : " << laBarreRonde.CalculerMasse() << "g" << endl;
    //cout << "La masse de la barre rectangle est de   : " << laBarreRectangle.CalculerMasse() << "g" << endl;
    //cout << "La masse de la barre carree est de   : " << laBarreCarree.CalculerMasse() << "g" << endl;

    //cout << "La masse de la barre ronde creuse est de : " << laBarreRondeCreuse.CalculerMasse() << "g" << endl;
    cout << "La masse de la barre carree creuse est de : " << laBarreCarreeCreuse.CalculerMasse() << "g" << endl;
    return 0;
}
