#ifndef VANNE_H
#define VANNE_H

#define gpio_num_t int

class Vanne
{
public:
    Vanne(gpio_num_t _impulsion, gpio_num_t _sensA, gpio_num_t _sensB);
    void Ouvrir();
    void Fermer();
private:
    gpio_num_t impulsion;
    gpio_num_t sensA;
    gpio_num_t sensB;
};

#endif // VANNE_H
