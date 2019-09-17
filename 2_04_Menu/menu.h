/**
  * @file       menu.h
  * @brief      Définition de la classe Menu
  * @version    1.1
  * @author     alex TAHIATA
  * @date       13 sept 2019
  */

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
    static void AttendreAppuiTouche(); // déclarée statiquement, ce qui permet d'appeller la fonction même si la classe n'est pas instanciée
};

#endif // MENU_H

enum CHOIX_MENU
{
    OPTION_1 = 1,
    OPTION_2 = 2,
    OPTION_3 = 3,
    OPTION_4 = 4,
    QUITTER
};
