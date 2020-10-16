//
// Created by Håvard on 16.10.2020.
//

#ifndef CAESAR_CIPHER_MENUS_H
#define CAESAR_CIPHER_MENUS_H

#include "characterlimit.h"

void menu(char array[LIMIT]);
void menuSelectEncryptMethod(char array[LIMIT]);
void menuSelectDecryptMethod(char array[LIMIT]);
void setCharLimit(int* charLimit);

#endif //CAESAR_CIPHER_MENUS_H
