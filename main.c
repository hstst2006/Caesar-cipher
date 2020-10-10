//This program encrypts your input using the Caesar cipher method of shifting the letter number by a predefined number.
//Input a number for the cipher and a message to encrypt
//Input a number for the cipher and a message to decrypt
//Ascii numbers for uppercase letters: 65-90
//Ascii numbers for lowercase letters: 97-122
//If a letter is shifted outside the number range (ex 122 + 5 = 127) subtract 57.
//If number is from 91 - 96 shift up to 97 (if using a positive number) or down to 90 (if using a negative number)

#include <stdio.h>
#include <stdlib.h>

#include "encrypt.h"


void menu(char array[LIMIT]){
    int userInput = 0;
    while (userInput != 3) {
        printf("Welcome to the... \n\n");
        printf("CAESAR CIPHER!\n\n");
        printf("Would you like to... \n1. Encrypt a message?\n2. Decrypt a message?\n3. Quit?\n");
        scanf("%i", &userInput);

        switch (userInput) {
            case 1:
                system("cls"); //Clears the system terminal (in windows)
                encryptString(array, cipherKey());
                break;
            case 2:
                system("cls"); //Clears the system terminal (in windows)
                decryptString(array, cipherKey());
                system("cls");
                break;
            case 3:
                exit(0);
        }
    }
}


int main() {
    char text[LIMIT] = {0};
    menu(text);
    return 0;
}
