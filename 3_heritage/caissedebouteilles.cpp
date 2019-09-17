#include "caissedebouteilles.h"
#include <iostream>

using namespace std;

CaisseDeBouteilles::CaisseDeBouteilles(const int _largeur, const int _hauteur, const int _profondeur,
                                       const int _nbBouteilles, const int _contenance):
    Contenant(_largeur, _hauteur, _profondeur),
    nbBouteilles(_nbBouteilles),
    contenance(_contenance)

{
    cout << "Constructeur de la classe CaisseDeBouteilles" << endl;

    /*cout << "Largeur : " << largeur << endl;
    cout << "Hauteur : " << hauteur << endl;
    cout << "Profondeur : " << profondeur << endl;

    cout << "Nombre de bouteilles : " << nbBouteilles << endl;
    cout << "La contenance : " << contenance << "cl" << endl;*/
}

CaisseDeBouteilles::~CaisseDeBouteilles()
{
    cout << "Destructeur de la classe CaisseDeBouteilles" << endl;
}

int CaisseDeBouteilles::CalculerVolume2()
{
    return nbBouteilles * contenance;
}
