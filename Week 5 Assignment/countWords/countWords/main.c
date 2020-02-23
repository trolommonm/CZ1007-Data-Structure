//
//  main.c
//  countWords
//
//  Created by Alvin Tan De Jun on 18/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int countWords(char *s);
int main() {
    char str[50], *p;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("countWords(): %d", countWords(str));
    return 0;
}

int countWords(char *s) {
    int inWord = 0;
    int numOfWords = 0;
    
    while (*s != '\0') {
        if (*s == ' ') {
             inWord = 0;
        } else {
            if (inWord == 0) {
                numOfWords++;
            }
            inWord = 1;
        }
        
        s++;
    }
    
    return numOfWords;
}
