#include "capteurhumidite.h"
#include "iostream"

using namespace std;

CapteurHumidite::CapteurHumidite(int _capteur):
    capteur(_capteur)
{
    cout << "Constructeur de la classe CapteurHumidite" << endl;

    cout << "Valeur capteur : " << capteur << endl;
}

int CapteurHumidite::MesurerHumiditeDuSol()
{
    return 0;
}
