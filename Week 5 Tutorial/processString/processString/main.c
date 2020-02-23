//
//  main.c
//  processString
//
//  Created by Alvin Tan De Jun on 6/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void processString(char *str, int *totVowels, int *totDigits);

int main()
{
    char str[80], *p;
    int totVowels, totDigits;
    
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    
    if (p=strchr(str,'\n')) *p = '\0';
    
    processString(str, &totVowels, &totDigits);
    printf("Total vowels = %d\n", totVowels);
    printf("Total digits = %d\n", totDigits);
    
    return 0;
}

void processString(char *str, int *totVowels, int *totDigits) {
    *totDigits = 0;
    *totVowels = 0;
    
    while (*str != '\0') {
        switch (*str) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                (*totVowels)++;
                break;
            // use if (*str >= '0' && *str <= '9')
            case '1': case '2': case '3': case '4': case '5': case '6':
            case '7': case '8': case '9': case '0':
                (*totDigits)++;
                break;
            default:
                break;
        }
        str++;
    }
}
