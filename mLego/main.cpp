#include <iostream>
#include "barre.h"
#include "barreronde.h"
#include "barrerectangle.h"
#include "barrecarree.h"

#include "math.h"

using namespace std;

int main()
{
    /*Barre laBarre("reference",2,3,"nom");
    /laBarre.AfficherCaracteristiques();*/

    BarreRonde laBarreRonde("Ref", 5, 5, "NomAlliage", 5, M_PI);
    //BarreRectangle laBarreRectangle("Ref", 5, 5, "NomAlliage", 5, 5);
    //BarreCarree laBarreCarree("Ref", 5, 5, "NomAlliage", 5);

    cout << "La section de la barre ronde est de : " << laBarreRonde.CalculSection() << " mm2" << endl;
    //cout << "La section de la barre rectangle est de : " << laBarreRectangle.CalculSection() << " mm2" << endl;
    //cout << "La section de la barre carree est de : " << laBarreCarree.CalculSection() << " mm2" << endl;

    return 0;
}
