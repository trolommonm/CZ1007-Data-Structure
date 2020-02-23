//
//  main.c
//  strIntersect
//
//  Created by Alvin Tan De Jun on 18/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
void strIntersect(char *str1, char *str2, char *str3);
int main() {
    char str1[50],str2[50],str3[50];

    printf("Enter str1: \n");
    scanf("%s",str1);
    printf("Enter str2: \n");
    scanf("%s",str2);
    strIntersect(str1, str2, str3);
    if (*str3 == '\0')
    printf("strIntersect(): null string\n");
    else
    printf("strIntersect(): %s\n", str3);
    return 0;
}

void strIntersect(char *str1, char *str2, char *str3) {
    while (*str1 != '\0') {
        
        int i = 0;
        while (*(str2 + i) != '\0') {
            if (*str1 == *(str2 + i)) {
                *str3 = *str1;
                str3++;
            }
            i++;
        }
        
        str1++;
    }
    
    *str3 = '\0';
}
