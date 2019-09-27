#include "zonearrosage.h"
#include "capteurhumidite.h"
#include "iostream"

using namespace std;

ZoneArrosage::ZoneArrosage(string _initialisation)
{
    cout << "Constructeur de la classe ZoneArrosage" << endl;

    cout << "Valeur numZone : " << numZone << endl;

    numZone = 0;
    int parametres[5];
    size_t prec = 0;
    size_t pos = 0;
    for(int indice = 0; indice < 5; indice++)
    {
        pos = _initialisation.find(' ',prec);
        parametres[indice]=atoi(_initialisation.substr(prec,pos).c_str());
        prec = pos + 1;// on incrémente pos pour le tour d'après.
    }
    numZone = parametres[0];
    laVanne = new Vanne(parametres[1],parametres[2],parametres[3]);
    leCapteurHumidite = new CapteurHumidite(parametres[4]);
}


void ZoneArrosage::Piloter()
{
    laVanne->Ouvrir();
    if (leCapteurHumidite->MesurerHumiditeDuSol()> 100)
    {
        laVanne->Fermer();
    }

}

ZoneArrosage::~ZoneArrosage()
{
    cout << "Destructeur de la classe ZoneArrosage" << endl;
    delete laVanne; // libérer l'espace alloué lors de la création du pointeur laVanne
}
