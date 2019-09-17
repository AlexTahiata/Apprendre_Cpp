#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>

using namespace std;

class Exception
{
private:
    int codeErreur;
    string message;
public:
    Exception(int _codeErreur, string _message);
    int ObtenirCodeErreur() const;
    string ObtenirDescription() const;
};

#endif // EXCEPTION_H

enum erreurs
{
    CREATION,
    INDICE
};
