//
//  main.c
//  phoneBook
//
//  Created by Alvin Tan De Jun on 15/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
    char name[20];
    char telno[20];
} PhoneBk;

void printPB(PhoneBk *pb, int size);
int readin(PhoneBk *pb);
void search(PhoneBk *pb, int size, char *target);
void cleanString(char *str);

int main() {
    PhoneBk s[MAX];
    char t[20], *p;
    int size=0, choice, dummychar;

    printf("Select one of the following options: \n");
    printf("1: readin()\n");
    printf("2: search()\n");
    printf("3: printPB()\n");
    printf("4: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                scanf("%c", &dummychar);
                size = readin(s);
                break;
            case 2:
                scanf("%c", &dummychar);
                printf("Enter search name: \n");
                fgets(t, 20, stdin);
                if (p=strchr(t,'\n')) *p = '\0';
                search(s,size,t);
                break;
            case 3:
                printPB(s, size);
                break;
        }
    } while (choice < 4);
    return 0;
}

void printPB(PhoneBk *pb, int size) {
    int i;
    
    printf("The phonebook list:\n");
    
    if (size == 0) {
        printf("Empty phonebook\n");
    }
    
    for (i = 0; i < size; i++) {
        printf("Name: %s\n", (*(pb+i)).name);
        printf("Telno: %s\n", (*(pb+i)).telno);
    }
}

int readin(PhoneBk *pb) {
    int count = 0;
    
    printf("Enter name:\n");
    fgets((*(pb+count)).name, 20, stdin);
    cleanString((*(pb+count)).name);
    while (strcmp((*(pb+count)).name, "#") != 0) {
        printf("Enter tel:\n");
        fgets((*(pb+count)).telno, 20, stdin);
        cleanString((*(pb+count)).telno);
        
        count++;
        
        printf("Enter name:\n");
        fgets((*(pb+count)).name, 20, stdin);
        cleanString((*(pb+count)).name);
    }
    
    return count;
}

void search(PhoneBk *pb, int size, char *target) {
    int i;
    
    for (i = 0; i < size; i++) {
        if (strcmp((*(pb+i)).name, target) == 0) {
            printf("Name = %s, Tel = %s\n", (*(pb+i)).name, (*(pb+i)).telno);
            return;
        }
    }
    
    printf("Name not found!\n");
}

void cleanString(char *str) {
    char *p;
    if (p = strchr(str, '\n')) {
        *p = '\0';
    }
}
