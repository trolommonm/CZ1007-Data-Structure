//
//  main.c
//  insertChar
//
//  Created by Alvin Tan De Jun on 18/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void insertChar(char *str1, char *str2, char ch);

int main() {
    char a[80],b[80];
    char ch, *p;

    printf("Enter a string: \n");
    fgets(a, 80, stdin);
    if (p=strchr(a,'\n')) *p = '\0';
    printf("Enter a character to be inserted: \n");
    ch = getchar();
    insertChar(a,b,ch);
    printf("insertChar(): ");
    puts(b);
    return 0;
}

void insertChar(char *str1, char *str2, char ch) {
    int numOfChToAdd = (int) strlen(str1) / 3;
    int i, j = 0, step = 0;
    for (i = 0; i < strlen(str1) + numOfChToAdd; i++) {
        if (step == 3) {
            *(str2 + i) = ch;
            step = 0;
        } else {
            *(str2 + i) = *(str1 + j);
            j++;
            step++;
        }
    }
    
    *(str2 + i) = '\0';
}
