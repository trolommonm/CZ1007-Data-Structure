//
//  main.c
//  gcd
//
//  Created by Alvin Tan De Jun on 25/1/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>

int gcd1(int num1, int num2);
void gcd2(int num1, int num2, int *result);

int main() {
    int x,y,result=-1;
    
    printf("Enter 2 numbers: \n");
    scanf("%d %d", &x, &y);
    printf("gcd1(): %d\n", gcd1(x, y));
    
    gcd2(x,y,&result);
    printf("gcd2(): %d\n", result);

    return 0;
}
   
int gcd1(int num1, int num2) {
    int result = 1;
    
    for (int i = 1; i <= (num1 > num2 ? num2 : num1); i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            result = i;
        }
    }
    
    return result;
}
   
void gcd2(int num1, int num2, int *result) {
    *result = 1;
    
    for (int i = 1; i <= (num1 > num2 ? num2 : num1); i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            *result = i;
        }
    }
}
