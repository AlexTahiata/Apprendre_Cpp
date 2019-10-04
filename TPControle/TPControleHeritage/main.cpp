#include <iostream>
#include <string>
#include "compte.h"
#include "compteepargne.h"
#include "menuprincipal.h"

using namespace std;

/**
 * @brief main
 * @details Fonction principale qui ouvre le menu texte,
 *      appelle la fonction Afficher,
 *      propose les 4 cas des quatres options,
 *      pour finalement appeller la fonction AttendreAppuiTouche
 * @return
 */
/*int main()
{
    int choix;
    MenuPrincipal leMenuPrincipal("menuPrincipal.txt");
    MenuPrincipal leMenuCompteDepot("menuCompteDepot.txt");
    MenuPrincipal leMenuCompteEpargne("menuCompteEpargne.txt");

    Compte leCompte;

    //leMenu.Afficher();
    cout << "Menu principal" << endl;
    do
    {
        choix = leMenuPrincipal.Afficher();
        switch (choix)
        {
        case OPTION_1:
            cout << "Vous avez choisi le menu compte" << endl;
            MenuPrincipal::AttendreAppuiTouche();
            cout << "Menu compte depot" << endl;

            do
            {
                choix = leMenuCompteDepot.Afficher();
                switch (choix)
                {
                case OPTION_1_1:
                    cout << "Vous avez choisi de consulter le solde du compte" << endl;
                    leCompte.ConsulterSolde();
                    MenuPrincipal::AttendreAppuiTouche();
                    break;
                case OPTION_1_2:
                    cout << "Vous avez choisi de déposer de l'argent" << endl;
                    //leCompte.Deposer();
                    MenuPrincipal::AttendreAppuiTouche();
                    break;
                case OPTION_1_3:
                    cout << "Vous avez choisi de retirer de l'argent" << endl;
                    //leCompte.Retirer();
                    MenuPrincipal::AttendreAppuiTouche();
                    break;
                }
            }while(choix != QUITTER_2);
            break;
        case OPTION_2:
            cout << "Vous avez choisi le menu compte epargne" << endl;
            MenuPrincipal::AttendreAppuiTouche();
            cout << "Menu compte epargne" << endl;
            do
            {
                choix = leMenuCompteEpargne.Afficher();
                switch (choix)
                {
                case OPTION_2_1:
                    cout << "Vous avez choisi de consulter le solde du compte epargne" << endl;
                    leCompte.ConsulterSolde();
                    MenuPrincipal::AttendreAppuiTouche();
                    break;
                case OPTION_2_2:
                    cout << "Vous avez choisi de déposer de l'argent" << endl;
                    //leCompte.Deposer();
                    MenuPrincipal::AttendreAppuiTouche();
                    break;
                case OPTION_2_3:
                    cout << "Vous avez choisi de retirer de l'argent" << endl;
                    //leCompte.Retirer()
                    MenuPrincipal::AttendreAppuiTouche();
                    break;
                case OPTION_2_4:
                    cout << "Vous avez choisi de calculer les interets" << endl;
                    //leCompte.CalculerInterets();
                    MenuPrincipal::AttendreAppuiTouche();
                    break;
                }
            }while(choix != QUITTER_3);
            break;
        }
    }while(choix != QUITTER);

    return 0;
}*/

int main() {

    int choix;
    MenuPrincipal leMenuPrincipal("menuPrincipal.txt");
    MenuPrincipal leMenuCompteDepot("menuCompteDepot.txt");
    MenuPrincipal leMenuCompteEpargne("menuCompteEpargne.txt");

    Compte leCompte;

    do
    {
        choix = leMenuPrincipal.Afficher();
        switch (choix)
        {
        case OPTION_1:
            cout << "Vous avez choisi le menu compte" << endl;
            MenuPrincipal::AttendreAppuiTouche();
            break;
        case OPTION_2:
            cout << "Vous avez choisi le menu compte epargne" << endl;
            MenuPrincipal::AttendreAppuiTouche();
            break;
        }
    }while(choix != QUITTER);

    return 0;
}

/*void GestionCompteEpargne(CompteEpargne &c){

}*/
