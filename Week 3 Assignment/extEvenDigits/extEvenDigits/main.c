//
//  main.c
//  extEvenDigits
//
//  Created by Alvin Tan De Jun on 25/1/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#define INIT_VALUE 999

int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);

int main() {
    int number, result = INIT_VALUE;
    
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
    
    extEvenDigits2(number, &result);
    printf("extEvenDigits2(): %d\n", result);
    
    return 0;
}

int extEvenDigits1(int num) {
    int result = 0;
    int count = 0;
     
    while (num > 0) {
        if ((num % 10) % 2 == 0) {
            result += pow(10, count) * (num % 10);
            count++;
        }
        
        num /= 10;
    }
    
    return result == 0 ? -1 : result;
}

void extEvenDigits2(int num, int *result) {
    *result = 0;
    int count = 0;
     
    while (num > 0) {
        if ((num % 10) % 2 == 0) {
            *result += pow(10, count) * (num % 10);
            count++;
        }
        
        num /= 10;
    }
    
    if (*result == 0) {
        *result = -1;
    }
}
