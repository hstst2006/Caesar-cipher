//
// Created by Håvard on 10.10.2020.
//

#ifndef CAESAR_CIPHER_ENCRYPT_H
#define CAESAR_CIPHER_ENCRYPT_H

#include "characterlimit.h"

//void checkCharacterInBounds (char array[LIMIT], int value, int position);
void encryptString (char array[LIMIT], int value);
void decryptString (char array[LIMIT], int value);
int getCipherKey();
#endif //CAESAR_CIPHER_ENCRYPT_H
