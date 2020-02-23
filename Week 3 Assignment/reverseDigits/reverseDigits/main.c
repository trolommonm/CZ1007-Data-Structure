//
//  main.c
//  reverseDigits
//
//  Created by Alvin Tan De Jun on 25/1/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int reverseDigits1(int num);
void reverseDigits2(int num, int *result);

int main() {
    int num, result=999;
    
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("reverseDigits1(): %d\n", reverseDigits1(num));
    
    reverseDigits2(num, &result);
    printf("reverseDigits2(): %d\n", result);
    
    return 0;
}

int reverseDigits1(int num) {
    int result = 0;
    
    while (num > 0) {
        result = result * 10 + num % 10;
        num /= 10;
    }
    
    return result;
}

void reverseDigits2(int num, int *result) {
    *result = 0;
    
    while (num > 0) {
        *result = *result * 10 + num % 10;
        num /= 10;
    }
}

//int reverseDigits1(int num) {
//    int count = 0, result = 0;
//    int tempNum = num;
//
//    while (tempNum > 0) {
//        tempNum /= 10;
//        count++;
//    }
//
//    for (int i = 1; i <= count; i++) {
//        result += (num % 10) * pow(10, count - i);
//        num /= 10;
//    }
//
//    return result;
//}
//
//void reverseDigits2(int num, int *result) {
//    *result = 0;
//    int count = 0, tempNum = num;
//
//    while (tempNum > 0) {
//        tempNum /= 10;
//        count++;
//    }
//
//    for (int i = 1; i <= count; i++) {
//        *result += (num % 10) * pow(10, count - i);
//        num /= 10;
//    }
//}
