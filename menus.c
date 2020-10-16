//
// Created by Håvard on 16.10.2020.
//

#include "menus.h"
#include "encrypt.h"
#include "characterlimit.h"
#include <stdio.h>
#include <stdlib.h>

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
                encryptString(array, getCipherKey());
                break;
            case 2:
                system("cls"); //Clears the system terminal (in windows)
                decryptString(array, getCipherKey());
                break;
            case 3:
                exit(0);
        }
    }
}

void menuSelectEncryptMethod(char array[LIMIT]){
    int userInput = 0;
    printf("Would you like to...\n1. Encrypt a line of text?\n2. Encrypt a file?\n3. Go back to the main menu?");
    switch(userInput){
        case 1:
            system("cls"); //Clears the system terminal (in windows)
            encryptString(array, getCipherKey());
            break;
        case 2:
            system("cls"); //Clears the system terminal (in windows)
            //
            break;
        case 3:
            system("cls"); //Clears the system terminal (in windows)
            menu(array);
            break;
    }
}

void menuSelectDecryptMethod(char array[LIMIT]){
    int userInput = 0;
    printf("Would you like to...\n1.Decrypt a line of text?\n2.Decrypt a file?\n3. Go back to the main menu?");
    switch(userInput){
        case 1:
            system("cls"); //Clears the system terminal (in windows)
            decryptString(array, getCipherKey());
            break;
        case 2:
            system("cls"); //Clears the system terminal (in windows)
            //
            break;
        case 3:
            system("cls"); //Clears the system terminal (in windows)
            menu(array);
            break;
    }
}

void setCharLimit(int* charLimit){
    printf("Please enter a character limit: ");
    scanf("%i", charLimit);
}