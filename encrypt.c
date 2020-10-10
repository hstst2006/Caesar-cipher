//
// Created by Håvard on 10.10.2020.
//
#include "encrypt.h"
#include <stdio.h>
#include <string.h>

//Asks for user input and encrypts the message by shifting the array value by the cipher value
void encryptString (char array[LIMIT], int value){
    printf("Enter message to encrypt: ");
    fflush(stdin); //Removes newline from the buffer
    fgets(array, LIMIT, stdin);
    array[strlen(array)-1] = 0;
    for(int i = 0; i <= strlen(array)-1; i++){
        array[i] += value;
        if (array[i] > 126 && value > 0){
            array[i] -= 94;
        }
        else if (array[i] < 32 && value < 0){
            array[i] += 94;
        }
    }
    printf("The encrypted string is: %s\n", array);
}

void decryptString (char array[LIMIT], int value){
    value = value * -1;
    printf("Enter message to decrypt: ");
    fflush(stdin); //Removes newline from the buffer
    fgets(array, LIMIT, stdin);
    array[strlen(array)-1] = 0;
    for(int i = 0; i <= strlen(array)-1; i++){
        array[i] += value;
        if (array[i] > 126 && value > 0){
            array[i] -= 94;
        }
        else if (array[i] < 32 && value < 0){
            array[i] += 94;
        }
    }
    printf("The encrypted string is: %s\n", array);
}

int cipherKey(){
    int value = 0;
    printf("Please enter a cipher key: ");
    scanf("%i", &value);
    printf("\n");
    return value;
}