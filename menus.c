//
// Created by Håvard on 16.10.2020.
//

#include "menus.h"
#include "encrypt.h"
#include <stdio.h>
#include <stdlib.h>

void menuSelectInputMethod(){
    int userOption = 0;
    printf("\nWelcome to the... \n\n");
    printf("CAESAR CIPHER!\n\n");
    printf("Would you like to...\n1. Use manual input?\n2. Use file input?\n3. Quit?\n");
    scanf("%i", &userOption);
    switch(userOption){
        case 1:
            menuManualInput();
            break;
        case 2:
            menuFileInput();
            break;
        case 3:
            exit(1);
    }
}

void menuManualInput(){
    int userInput = 0;
    int charLimit = 0;
    setCharLimit(&charLimit);
    char* array = malloc(charLimit * sizeof(char));
    while (userInput != 3) {
        printf("\nWelcome to the... \n\n");
        printf("CAESAR CIPHER!\n\n");
        printf("Would you like to... \n1. Encrypt a message?\n2. Decrypt a message?\n3. Quit?\n");
        scanf("%i", &userInput);
        switch (userInput) {
            case 1:
                encryptString(array, getCipherKey(), charLimit);
                break;
            case 2:
                decryptString(array, getCipherKey(), charLimit);
                break;
            case 3:
                exit(0);
        }
    }
}

void menuFileInput(){
    int userInput = 0;
    while (userInput != 3) {
        printf("\nWelcome to the... \n\n");
        printf("CAESAR CIPHER!\n\n");
        printf("Enter the text you would like to encrypt or decrypt in either \"encryptme.txt\" or \"decryptme.txt\"\n");
        printf("Would you like to... \n1. Encrypt a message?\n2. Decrypt a message?\n3. Quit?\n");
        scanf("%i", &userInput);
        switch (userInput) {
            case 1:
                encryptFile(getCipherKey());
                break;
            case 2:
                decryptFile(getCipherKey());
                break;
            case 3:
                exit(0);
        }
    }
}