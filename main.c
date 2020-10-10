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
