#ifndef ALVEOLESLIBRES_H
#define ALVEOLESLIBRES_H
#include <iostream>
#include <vector>
using namespace std;
/**
 * @brief La classe AlveolesLibres
 * @details Déclaration de la classe AlveolesLibres
 */
class AlveolesLibres:public vector<int>
{
private:
    int nbRangees;
    int nbColonnes;
public:
    AlveolesLibres(const unsigned int _nbRangees, const unsigned int _nbColonnes);
    bool Reserver(unsigned int &_rangee, unsigned int &_colonne);
    void Liberer(const int _rangee, const int _colonne);
    void Visualiser();
};

#endif // ALVEOLESLIBRES_H
