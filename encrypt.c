//
// Created by Håvard on 10.10.2020.
//
#include "encrypt.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Asks for user input and encrypts the message by shifting the array value by the cipher value
void encryptString (char array[LIMIT], int value){
    printf("Enter message to encrypt: ");
    fflush(stdin); //Removes newline from the buffer
    fgets(array, LIMIT, stdin);
    array[strlen(array)-1] = 0;
    for(int i = 0; i <= strlen(array)-1; i++){
        unsigned char n = array[i];
        n += value;
        if (n >= 127){
            n -= 94;

        }
        else if (n <= 31){
            n += 94;
        }
        array[i] = n;
    }
    printf("The encrypted string is: %s\n\nPress any key to return to the main menu", array);
    scanf("%c");
    system("cls");
}

void decryptString (char array[LIMIT], int value){
    value = value * -1;
    printf("Enter message to decrypt: ");
    fflush(stdin); //Removes newline from the buffer
    fgets(array, LIMIT, stdin);
    array[strlen(array)-1] = 0;
    for(int i = 0; i <= strlen(array)-1; i++){
        unsigned char n = array[i];
        n += value;
        if (n >= 127){
            n -= 94;
        }
        else if (n <= 31){
            n += 94;
        }
        array[i] = n;
    }
    printf("The encrypted string is: %s\n\nPress any key to return to the main menu", array);
    scanf("%c");
    system("cls");
}

int cipherKey(){
    int value = 0;
    printf("Please enter a cipher key: ");
    scanf("%i", &value);
    printf("\n");
    return value;
}