//
//  main.c
//  findMinMaxStr
//
//  Created by Alvin Tan De Jun on 18/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define SIZE 10
void findMinMaxStr(char word[][40], char *first, char *last, int size);
int main() {
    char word[SIZE][40];
    char first[40], last[40];
    int i, size;

    printf("Enter size: \n");
    scanf("%d", &size);
    printf("Enter %d words: \n", size);
    for (i=0; i<size; i++)
        scanf("%s", word[i]);
    findMinMaxStr(word, first, last, size);
    printf("First word = %s, Last word = %s\n", first, last);
    return 0;
}

void findMinMaxStr(char word[][40], char *first, char *last, int size) {
    *first = 127;
    *last = '\0';
    
    int i;
    for (i = 0; i < size; i++) {
        if (*word[i] < *first) {
            strcpy(first, word[i]);
        }
        
        if (*word[i] > *last) {
            strcpy(last, word[i]);
        }
    }
}
