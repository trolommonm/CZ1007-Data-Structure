//
//  main.c
//  sumSqDigits
//
//  Created by Alvin Tan De Jun on 24/1/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include  <stdio.h>

int sumSqDigits1(int num);
void sumSqDigits2(int num, int *result);

int main() {
    int num, result;
    
    printf("Enter a number: \n");
    scanf("%d", &num);
    
    printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
    
    sumSqDigits2(num, &result);
    printf("sumSqDigits2(): %d\n", result);
    
    return 0;
}

int sumSqDigits1(int num) {
    int sum = 0;
    
    while (num > 0) {
        sum += (num % 10) * (num % 10);
        
        num /= 10;
    }
    
    return sum;
}

void sumSqDigits2(int num, int *result) {
    *result = 0;
    
    while (num > 0) {
        *result += (num % 10) * (num % 10);
        
        num /= 10;
    }
}
