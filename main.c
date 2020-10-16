#include <stdio.h>
#include <stdlib.h>

#include "encrypt.h"
#include "menus.h"

int main() {
    //int charLimit = 0;
    //setCharLimit(&charLimit);
    char text[LIMIT] = {0};
    menu(text);
    return 0;
}
