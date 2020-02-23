//
//  main.c
//  maxCharToFront
//
//  Created by Alvin Tan De Jun on 18/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main()
{
    char str[80], *p;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("maxCharToFront(): ");
    maxCharToFront(str);
    puts(str);
    return 0;
}
void maxCharToFront(char *str) {
    int maxCharPos = 0;
    char maxChar = str[0];
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] > maxChar) {
            maxChar = str[i];
            maxCharPos = i;
        }
    }
    
    for (i = maxCharPos; i > 0; i--) {
        char temp = str[i];
        str[i] = str[i - 1];
        str[i - 1] = temp;
    }
}
