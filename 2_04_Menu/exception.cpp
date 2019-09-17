#include "exception.h"

Exception::Exception(int _codeErreur, string _message):
    codeErreur(_codeErreur),
    message(_message)
{

}

int Exception::ObtenirCodeErreur() const
{
    return codeErreur;
}

string Exception::ObtenirDescription() const
{
    return message;
}
