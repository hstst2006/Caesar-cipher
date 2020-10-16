//
// Created by Håvard on 10.10.2020.
//
#include "encrypt.h"
#include <stdio.h>
#include <string.h>

int setCharLimit(int* charLimit){
    printf("Please enter a character limit: ");
    scanf("%i", charLimit);
    return *charLimit;
}

//Asks for user input and encrypts the message by shifting the array value by the cipher value
void encryptString (char* array, int key, int charLimit){
    printf("Enter message to encrypt: ");
    fflush(stdin); //Removes newline from the buffer
    fgets(array, charLimit, stdin);
    fflush(stdin); //Removes any input that is outside fgets character limit.
    array[strlen(array)-1] = 0;
    for(int i = 0; i <= strlen(array)-1; i++){
        unsigned char n = array[i];
        n += key;
        if (n >= 127){
            n -= 94;

        }
        else if (n <= 31){
            n += 94;
        }
        array[i] = n;
    }
    printf("The encrypted string is: %s\n\nPress enter to return to the main menu", array);
    scanf("%c");
}

void encryptFile(int key){
    FILE* encryptme = fopen("encryptme.txt", "r");
    FILE* encrypted = fopen("encrypted.txt", "w");
    unsigned char symbol = 0;
    while(!feof(encryptme)){
    symbol = fgetc(encryptme);
    if (symbol == '\n'){
        fputc(symbol, encrypted);
    }
    else{
        symbol += key;
        if (symbol >= 127){
            symbol -= 94;
        }
        else if (symbol <= 31){
            symbol += 94;
        }
        //FIXME: EOF is an unsigned char of value -1, and is always included as the last character in the encrypted file!
        fputc(symbol, encrypted);
    }

        }
    fclose(encryptme);
    fclose(encrypted);
    printf("The encrypted file can be found as \"encrypted.txt\" in the working directory of Caesar cipher\nPress enter to return to the main menu.");
    scanf("%c");
}

void decryptString (char* array, int key, int charLimit){
    key = key * -1;
    printf("Enter message to decrypt: ");
    fflush(stdin); //Removes newline from the buffer
    fgets(array, charLimit, stdin);
    fflush(stdin); //Removes any input that is outside fgets character limit.
    array[strlen(array)-1] = 0;
    for(int i = 0; i <= strlen(array)-1; i++){
        unsigned char symbol = array[i];
        symbol += key;
        if (symbol >= 127){
            symbol -= 94;
        }
        else if (symbol <= 31){
            symbol += 94;
        }
        array[i] = symbol;
    }
    printf("The encrypted string is: %s\n\nPress enter to return to the main menu", array);
    scanf("%c");
    fflush(stdin);
}

void decryptFile(int key){
    key = key * -1;
    FILE* decryptme = fopen("decryptme.txt", "r");
    FILE* decrypted = fopen("decrypted.txt", "w");
    unsigned char symbol = 0;
    while(!feof(decryptme)){
        symbol = fgetc(decryptme);
        if (symbol == '\n'){
            fputc(symbol, decrypted);
        }
        else{
            symbol += key;
            if (symbol >= 127){
                symbol -= 94;
            }
            else if (symbol <= 31){
                symbol += 94;
            }
            //FIXME: EOF is an unsigned char of value -1, and is always included as the last character in the encrypted file!
            fputc(symbol, decrypted);
        }

    }
    fclose(decryptme);
    fclose(decrypted);
    printf("The encrypted file can be found as \"encrypted.txt\" in the working directory of Caesar cipher\nPress enter to return to the main menu.");
    scanf("%c");
}

int getCipherKey(){
    int key = 0;
    printf("Please enter a cipher key: ");
    scanf("%i", &key);
    printf("\n");
    return key;
}