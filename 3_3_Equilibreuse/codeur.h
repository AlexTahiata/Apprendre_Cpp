#ifndef CODEUR_H
#define CODEUR_H

class MicroDacqLite;

class Codeur
{
public:
    Codeur(MicroDacqLite & _laCarte);
    int ObtenirVitesse();
private:
    MicroDacqLite & laCarte;
};

#endif // CODEUR_H
