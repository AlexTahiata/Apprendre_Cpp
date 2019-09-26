#include <iostream>
#include "zonearrosage.h"

using namespace std;

int main()
{
    ZoneArrosage zone1("1 25 15 5 20"); // zone 1, impulsion sur 25, sens A=15, B=5 et capteurHumidite sur 20
    zone1.Piloter();
    return 0;
}
