#ifndef MENU_H
#define MENU_H
#include <string>
#include <algorithm>

/**
 * @file menu.h
 * @brief Définition de la classe Menu
 * @author lvilet
 * @date 13 septembre 2019
 */

using namespace std;

class Menu{
    private:
        int *ptr;

        ///Désigne le nom du fichier
        string nom;

        ///Représente un tableau de chaînes de caractères implémentées sous la forme de string.
        ///Ce tableau sera alloué dynamiquement en fonction du nombre de lignes du fichier.
        string * options;

        ///Contient le nombre d'options du Menu
        int nbOptions;

        ///Taille de la plus grande chaîne contenue dans le tableau
        int longueurMax;
    public:
        Menu(const string _nom);
        ~Menu();
        int Afficher();
        static void AttendreAppuiTouche();
};

class ErreurFichier{
    private:
        int codeErreur;
        string message;
    public:
        ErreurFichier(int _codeErreur,string _message);
        int ObtenirCodeErreur() const;
        string ObtenirDescription() const;
};

class ErreurVide{
    private:
        int codeErreur;
        string message;
    public:
        ErreurVide(int _codeErreur,string _message);
        int ObtenirCodeErreur() const;
        string ObtenirDescription() const;
};

#endif // MENU_H
