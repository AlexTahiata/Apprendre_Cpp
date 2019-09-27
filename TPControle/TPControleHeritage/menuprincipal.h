#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H

#include <string>

using namespace std;


class MenuPrincipal
{
private:
    const string nom; //nom du fichier du menu
    string * options; //tableau des options du menu
    int nbOptions; //nb d'options du menu
    int longueurMax; //taille max de la chaîne de caractère du tableau
public:
    MenuPrincipal(const string &_nom);
    ~MenuPrincipal();
    int Afficher();
    static void AttendreAppuiTouche(); // déclarée statiquement, ce qui permet d'appeller la fonction même si la classe n'est pas instanciée
};

#endif // MENUPRINCIPAL_H

enum CHOIX_MENU
{
    OPTION_1 = 1,
    OPTION_2 = 2,
    QUITTER
};

enum CHOIX_SOUS_MENU_COMPTE_DEPOT
{
    OPTION_1_1 = 1,
    OPTION_1_2 = 2,
    OPTION_1_3 = 3,
    QUITTER_2
};

enum CHOIX_SOUS_MENU_COMPTE_EPARGNE
{
    OPTION_2_1 = 1,
    OPTION_2_2 = 2,
    OPTION_2_3 = 3,
    OPTION_2_4 = 4,
    QUITTER_3
};
