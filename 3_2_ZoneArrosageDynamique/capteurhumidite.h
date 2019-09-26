#ifndef CAPTEURHUMIDITE_H
#define CAPTEURHUMIDITE_H

#define gpio_num_t int

class CapteurHumidite
{
public:
    CapteurHumidite(gpio_num_t _capteur);
    int MesurerHumiditeDuSol();
private:
    gpio_num_t capteur;
};

#endif // CAPTEURHUMIDITE_H
