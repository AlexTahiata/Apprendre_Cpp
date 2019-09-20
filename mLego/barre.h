#ifndef BARRE_H
#define BARRE_H
#include <string>

using namespace std;

class Barre
{
public:
    Barre(string _reference, int _longueur, float _densite, string _nom);
    ~Barre();
    void AfficherCaracteristiques();
protected:
    string reference;
    int longueur;
    float densite;
    string nom;
};

#endif // BARRE_H
