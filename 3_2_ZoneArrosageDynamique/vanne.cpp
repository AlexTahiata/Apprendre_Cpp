#include "vanne.h"
#include "iostream"

using namespace std;

Vanne::Vanne(gpio_num_t _impulsion, gpio_num_t _sensA, gpio_num_t _sensB):
    impulsion(_impulsion),
    sensA(_sensA),
    sensB(_sensB)
{
    cout << "Constructeur de la classe Vanne" << endl;

    cout << "Valeur impulsion : " << impulsion << endl;
    cout << "Valeur sensA : " << sensA << endl;
    cout << "Valeur sensB : " << sensB << endl;
}

void Vanne::Ouvrir()
{

}

void Vanne::Fermer()
{

}
