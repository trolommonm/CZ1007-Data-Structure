//
//  main.c
//  countEvenDigits
//
//  Created by Alvin Tan De Jun on 24/1/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>

int countEvenDigits1(int number);
void countEvenDigits2(int number, int *count);

int main() {
    int number, result;
    
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("countEvenDigits1(): %d\n", countEvenDigits1(number));
    
    countEvenDigits2(number, &result);
    printf("countEvenDigits2(): %d\n", result);
    
    return 0;
}
      
int countEvenDigits1(int number) {
    int count = 0;
    
    while (number > 0) {
        if ((number % 10) % 2 == 0) {
            count++;
        }
        
        number /= 10;
    }
    
    return count;
}

void countEvenDigits2(int number, int *count) {
    *count = 0;
    
    while (number > 0) {
        if ((number % 10) % 2 == 0) {
            ++*count;
        }
        
        number /= 10;
    }
}
