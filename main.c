#include <stdio.h>
#include <stdlib.h>

#include "encrypt.h"
#include "menus.h"


void setCharLimit(int* charLimit){
    printf("Please enter a character limit: ");
    scanf("%i", charLimit);
}



int main() {
    //int charLimit = 0;
    //setCharLimit(&charLimit);
    char text[LIMIT] = {0};
    menu(text);
    return 0;
}
