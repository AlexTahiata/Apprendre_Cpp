#ifndef MOTEUR_H
#define MOTEUR_H

class MicroDacqLite;

class Moteur
{
public:
    Moteur(MicroDacqLite & _laCarte);
    void Demarrer();
    void Arreter();
    void FixerConsigne(int _laConsigne);
private:
    int consigneVitesse;
    MicroDacqLite & laCarte; // Pour la relation d'agréagation
};

#endif // MOTEUR_H
