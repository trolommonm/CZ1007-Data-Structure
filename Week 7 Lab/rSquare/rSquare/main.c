//
//  main.c
//  rSquare
//
//  Created by Alvin Tan De Jun on 23/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>

int rSquare1(int num);
void rSquare2(int num, int *result);

int main() {
    int number, result=0;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("rSquare1(): %d\n", rSquare1(number));
    rSquare2(number, &result);
    printf("rSquare2(): %d\n", result);
    return 0;
}

int rSquare1(int num) {
    if (num == 1) {
        return 1;
    } else {
        return num * 2 - 1 + rSquare1(num - 1);
    }
}

void rSquare2(int num, int *result) {
    if (num == 1) {
        *result = 1;
    } else {
        rSquare2(num - 1, result);
        *result += num * 2 - 1;
    }
}
