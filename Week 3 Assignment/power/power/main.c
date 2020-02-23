//
//  main.c
//  power
//
//  Created by Alvin Tan De Jun on 25/1/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);

int main() {
    int power;
    float number, result=-1;
    
    printf("Enter the number and power: \n");
    scanf("%f %d", &number, &power);
    
    printf("power1(): %.2f\n", power1(number, power));
    
    power2(number,power,&result);
    printf("power2(): %.2f\n", result);
    
    return 0;
}
      
float power1(float num, int p) {
    float result = 1;
    int modp;
    
    if (p < 0) {
        modp = -p;
    } else {
        modp = p;
    }
    
    for (int i = 1; i <= modp; i++) {
        result = result * num;
    }
    
    if (p < 0) {
        result = 1 / result;
    }
    
    return result;
}
      
void power2(float num, int p, float *result) {
    int modp;
    *result = 1;
    
    if (p < 0) {
        modp = -p;
    } else {
        modp = p;
    }
    
    for (int i = 1; i <= modp; i++) {
        *result = *result * num;
    }
    
    if (p < 0) {
        *result = 1 / *result;
    }
}
