#ifndef BARRE_H
#define BARRE_H
#include <string>

using namespace std;

class Barre
{
public:
    Barre(string _reference, int _longueur, double _densite, string _nom);
    ~Barre();
    void AfficherCaracteristiques();
protected: // Necéssaire quant à l'accessibilité des classes dérivées pour les attributs de la classe de base, Barre.
    string reference;
    int longueur;
    double densite;
    string nom;
};

#endif // BARRE_H
