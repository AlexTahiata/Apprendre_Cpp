#include <iostream>
#include "fonctiontemplate.cpp"
using namespace std;

int main()
{
//RechercherPlusPetit
   double densiteAl(2.7);
   double densiteCu(8.9);

   cout<<RechercherPlusPetit<double>(densiteCu,densiteAl)<<endl;

   int parking(-1);
   int terrasse(5);

   cout<<RechercherPlusPetit<int>(parking,terrasse)<<endl;

   //CalculerMoyenne
   double temperature[5] = {12.5,25.2,14.4,18.3,20.1};
   int note[5]={11,10,13,15,14};

   cout<<CalculerMoyenne<double>(temperature,5)<<endl;
   cout<<CalculerMoyenneV2<int,double>(note,5)<<endl;

   return 0;
}
