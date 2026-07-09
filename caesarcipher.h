#ifndef CAESARCIPHER_H
#define CAESARCIPHER_H
#include <QString>
using namespace std;

class CaesarCipher
{

private:
    QString message;
    int shft_num;

public:
    CaesarCipher();

    CaesarCipher (QString m, int num);

    QString encryptMessage (QString m );

    QString decryptMessage (QString m );

    char encryptChar (char c);

    char decryptChar(char c);

};

#endif // CAESARCIPHER_H
