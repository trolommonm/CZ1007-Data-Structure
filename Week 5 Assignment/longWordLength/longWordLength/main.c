//
//  main.c
//  longWordLength
//
//  Created by Alvin Tan De Jun on 18/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int longWordLength(char *s);

int main()
{
    char str[80], *p;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("longWordLength(): %d\n", longWordLength(str));
    return 0;
}
int longWordLength(char *s) {
    int i = 0;
    int wordLength = 0;
    int maxWordLength = 0;
    
    while (*(s + i) != '\0') {
        if ((*(s + i) >= 'a' && *(s + i) <= 'z') || (*(s + i) >= 'A' && *(s + i) <= 'Z')) {
            wordLength++;
        } else {
            if (wordLength > maxWordLength) {
                maxWordLength = wordLength;
            }
            wordLength = 0;
        }
        i++;
    }

    return maxWordLength;
}
