//
//  main.c
//  countSubstring
//
//  Created by Alvin Tan De Jun on 18/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1
int countSubstring(char str[], char substr[]);
int main()
{
    char str[80], substr[80], *p;
    int result=INIT_VALUE;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("Enter the substring: \n");
    fgets(substr, 80, stdin);
    if (p=strchr(substr,'\n')) *p = '\0';
    result = countSubstring(str, substr);
    printf("countSubstring(): %d\n", result);
    return 0;
}

int countSubstring(char str[], char substr[]) {
    int count = 0;
    while (*str != '\0') {
        
        int i = 0;
        while (*(substr + i) != '\0') {
            if (*(str + i) != *(substr + i)) {
                break;
            }
            
            if (*(str + i) == *(substr + i) && *(substr + i + 1) == '\0') {
                count++;
            }
            i++;
        }
        
        str++;
    }
    
    return count;
}
