#include "caesarcipher.h"
#include <QString>
using namespace std;


CaesarCipher::CaesarCipher (){
    message = " ";
    shft_num = 1;

}



CaesarCipher:: CaesarCipher(QString m, int num){
    message = m;
    shft_num = num;
}

QString CaesarCipher::encryptMessage (QString m){
    QString result = "";

    for (int i= 0; i< m.length(); i++){
        result += encryptChar(m.at(i).toLatin1());
    }

    return result;
}

QString CaesarCipher::decryptMessage (QString m){
    QString result = "";

    for (int i= 0; i< m.length(); i++){
        result += decryptChar(m.at(i).toLatin1());
    }

    return result;

}
char CaesarCipher::encryptChar (char c){

    if (isupper(c)){
        int position = c - 'A';
        int newposition = (position + shft_num) % 26;
        return newposition + 'A';

    }
    else if (islower(c)){
        int position = c - 'a';
        int newposition = (position + shft_num) % 26;
        return newposition + 'a';
    }
    else{
        return c;
    }

}

char CaesarCipher::decryptChar(char c){
    if (isupper(c)){
        int position = c - 'A';
        int newposition = (position - shft_num +26) % 26;
        return newposition + 'A';

    }
    else if (islower(c)){
        int position = c - 'a';
        int newposition = (position - shft_num +26 ) % 26;
        return newposition + 'a';
    }
    else{
        return c;
    }


}

