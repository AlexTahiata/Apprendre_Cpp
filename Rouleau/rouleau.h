#ifndef ROULEAU_H
#define ROULEAU_H

#include <iostream>

using namespace std;
/**
 * @brief Déclaration de la classe Rouleau
 */
class Rouleau
{
private:
    string reference; //Code fournisseur
    int diametre; //Diamètre du rouleau exprimé en millimètre [100 à 300]
    int rangee; //Numéro de la rangée où est stocké le rouleau [1 à 10]
    int colonne; //Numéro de la colonne où est stocké le rouleau [1 à 20]
public:
    Rouleau(const string _reference, const int _diametre); //Initialise la réference et le diametre du rouleau
    void AffecterAlveole(const int _rangee, const int _colonne); //Attribue une alvéole à un rouleau entrant dans le magasin
    void ObtenirLocalisation(int &_rangee, int &_colonne); //Restitue le numéro de rangée et de colonne où est stocké le rouleau dans le magasin
    bool operator<(Rouleau _autreRouleau); //Vrai si rouleau1 < rouleau2, faux sinon
    int operator-(Rouleau _autreRouleau); //Retourne la différence entre les diamètres du rouleau2 et du rouleau1
    void Visualiser();
};

#endif // ROULEAU_H*
