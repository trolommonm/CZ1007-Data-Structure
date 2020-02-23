//
//  main.c
//  findSubString
//
//  Created by Alvin Tan De Jun on 18/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define INIT_VALUE 999
int findSubstring(char *str, char *substr);
int main()
{
    char str[40], substr[40], *p;
    int result = INIT_VALUE;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("Enter the substring: \n");
    fgets(substr, 80, stdin);
    if (p=strchr(substr,'\n')) *p = '\0';
    result = findSubstring(str, substr);
    if (result == 1)
    printf("findSubstring(): Is a substring\n");
    else if ( result == 0)
    printf("findSubstring(): Not a substring\n");
    else
    printf("findSubstring(): An error\n");
    return 0;
}
int findSubstring(char *str, char *substr) {
    while (*str != '\0') {
        int i = 0;
        while (*(substr + i) != '\0') {
            if (*(substr + i) != *(str + i)) {
                break;
            }
            
            if (*(substr + i + 1) == '\0' && *(substr + i) == *(str + i)) {
                return 1;
            }
            
            i++;
        }
       
        str++;
    }
    
    return 0;
}
