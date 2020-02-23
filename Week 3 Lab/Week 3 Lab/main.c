//
//  main.c
//  Week 3 Lab
//
//  Created by Alvin Tan De Jun on 22/1/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
/* function prototypes */
int numDigits1(int num);
int digitPos1(int num, int digit);
int square1(int num);
void numDigits2(int num, int *result);
void digitPos2(int num, int digit, int *result);
void square2(int num, int *result);

int main() {
    int choice;
    int number, digit, result = 0;
    do {
        printf("\nPerform the following functions ITERATIVELY:\n");
        printf("1:  numDigits1()\n");
        printf("2:  numDigits2()\n");
        printf("3:  digitPos1()\n");
        printf("4:  digitPos2()\n");
        printf("5:  square1()\n");
        printf("6:  square2()\n");
        printf("7:  quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter the number: \n");
                scanf("%d", &number);
                printf("numDigits1(): %d\n", numDigits1(number));
                break;
            case 2:
                printf("Enter the number: \n");
                scanf("%d", &number);
                numDigits2(number, &result);
                printf("numDigits2(): %d\n", result);
                break;
            case 3:
                printf("Enter the number: \n");
                scanf("%d", &number);
                printf("Enter the digit: \n");
                scanf("%d", &digit);
                printf("digitPos1(): %d\n", digitPos1(number, digit));
                break;
            case 4:
                printf("Enter the number: \n");
                scanf("%d", &number);
                printf("Enter the digit: \n");
                scanf("%d", &digit);
                digitPos2(number, digit, &result);
                printf("digitPos2(): %d\n", result);
                break;
            case 5:
                printf("Enter the number: \n");
                scanf("%d", &number);
                printf("square1(): %d\n", square1(number));
                break;
            case 6:
                printf("Enter the number: \n");
                scanf("%d", &number);
                square2(number, &result);
                printf("square2(): %d\n", result);
                break;
            default:
                printf("Program terminating .....\n");
                break;
        }
    } while (choice < 7);
    
    return 0;
}

int numDigits1(int num) {
    int count = 0;
    
    do {
        num /= 10;
        count++;
    } while (num > 0);
    
    return count;
}

void numDigits2(int num, int *result) {
    *result = 0;
    
    do {
        num /= 10;
        ++*result; // (*result)++;
    } while (num > 0);
}

int digitPos1(int num, int digit) {
    int count = 0;
    
//    do {
//        count++;
//        if (num % 10 != digit) {
//            num /= 10;
//        } else {
//            break;
//        }
//    } while (num > 0);
    
    while (num % 10 != digit && num != 0) {
        num /= 10;
        count++;
    }
    
    if (num != 0) {
        return ++count;
    } else {
        return 0;
    }
}

void digitPos2(int num, int digit, int *result) {
    *result = 0;
    
    do {
        ++*result;
        if (num % 10 == digit) {
            break;
        } else {
            num /= 10;
        }
    } while (num > 0);
    
    if (num == 0) {
        *result = 0;
    }
}

int square1(int num) {
    int result = 0;
    
    for (int i = 1, j = 1; j <= num; i += 2, j++) {
        result += i;
    }
    
    return result;
}
   
void square2(int num, int *result) {
    *result = 0;
    
    for (int i = 1, j = 1; j <= num; i += 2, j++) {
        *result += i;
    }
}
