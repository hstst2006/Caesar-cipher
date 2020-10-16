//
// Created by Håvard on 10.10.2020.
//

#ifndef CAESAR_CIPHER_ENCRYPT_H
#define CAESAR_CIPHER_ENCRYPT_H

#include "characterlimit.h"

void encryptString (char* array, int key, int charLimit);
void decryptString (char* array, int key, int charLimit);
void encryptFile(int key);
void decryptFile(int key);
int getCipherKey();
int setCharLimit(int* charLimit);

#endif //CAESAR_CIPHER_ENCRYPT_H
