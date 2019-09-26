#ifndef ZONEARROSAGE_H
#define ZONEARROSAGE_H

#include <string>

#include "vanne.h"
#include "capteurhumidite.h"

using namespace std;

class ZoneArrosage
{
public:
    ZoneArrosage(string _initialisationZone); // méthode qui passe les paramètres sous forme d'un char(string)
    ~ZoneArrosage();
    void Piloter();
private:
    Vanne *laVanne; // méthode dynamique
    CapteurHumidite *leCapteurHumidite;
    int numZone;
};

#endif // ZONEARROSAGE_H
