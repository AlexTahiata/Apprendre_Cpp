#include <iostream>
#include <string>
#include "menu.h"

using namespace std;

int main()
{
    //int choix;
    menu leMenu("menu.txt");
    leMenu.Afficher();
    /*do
    {
        choix = leMenu.Afficher();
        switch (choix)
        {
        case OPTION_1:
            cout << "Vous avez choisi l'option n°1" << endl;
            menu::AttendreAppuiTouche();
            break;
        case OPTION_2:
            cout << "Vous avez choisi l'option n°1" << endl;
            menu::AttendreAppuiTouche();
            break;
        case OPTION_3:
            cout << "Vous avez choisi l'option n°1" << endl;
            menu::AttendreAppuiTouche();
            break;
        case OPTION_4:
            cout << "Vous avez choisi l'option n°1" << endl;
            menu::AttendreAppuiTouche();
            break;
        }
    }while(choix != QUITTER);*/

    return 0;
}
