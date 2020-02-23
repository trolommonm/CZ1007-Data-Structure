//
//  main.c
//  palindrome
//
//  Created by Alvin Tan De Jun on 8/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1000

int palindrome(char *str);
int strlength(char *str);

int main() {
    char str[80], *p;
    int result = INIT_VALUE;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    result = palindrome(str);
    if (result == 1)
        printf("palindrome(): A palindrome\n");
    else if (result == 0)
        printf("palindrome(): Not a palindrome\n");
    else
        printf("An error\n");
    return 0;
}

int palindrome(char *str) {
    int i;
    int strLength = strlength(str);
    for (i = 0; i < strLength / 2; i++) {
        if (*(str + i) != *(str + strLength - 1 - i)) {
            return 0;
        }
    }
    
    return 1;
}

int strlength(char *str) {
    int count = 0;
    while (*(str + count) != '\0') {
        count++;
    }
    return count;
}
