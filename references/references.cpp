#include <iostream>

using namespace std;

void Ajouter(int a, int b, int c)
{
    c =a+b;
}

void Ajouter2(int a, int b, int *c)
{
    *c =a+b;
}

void Ajouter3(int a, int b, int &c)
{
    c =a+b;
}

int main()
{
    int a = 1;
    int b = -2;
    int c = 0;

    cout<<"avant l'appel de Ajouter"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;

    //Ajouter(a,b,c);
    //Ajouter2(a,b,c);
    Ajouter3(a,b,c);

    cout<<"après l'appel de Ajouter"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;

    return 0;

    /* int *ptr;
    ptr = new int;
    //delete ptr;
    cout<<ptr<<endl;*/

}
