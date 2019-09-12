#ifndef MENU_H
#define MENU_H

#include <string>

using namespace std;

class menu
{
private:
    const string nom; //nom du fichier du menu
    string * options; //tableau des options du menu
    int nbOptions; //nb d'options du menu
    int longueurMax; //taille max de la chaîne de caractère du tableau

public:
    menu(const string &_nom);
    ~menu();
    int Afficher();
    void AttendreAppuiTouche();
};

#endif // MENU_H

enum CHOIX_MENU
{
    OPTION_1 = 1,
    OPTION_2,
    OPTION_3,
    OPTION_4,
    QUITTER
};
