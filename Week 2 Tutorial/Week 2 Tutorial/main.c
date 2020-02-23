//
//  main.c
//  Week 2 Tutorial
//
//  Created by Alvin Tan De Jun on 14/1/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#include <math.h>

// Question 1
//int main(int argc, const char * argv[]) {
//    float a1, a2, b1, b2, c1, c2;
//
//    printf("Enter the values for a1, b1, c1, a2, b2, c2:\n");
//    scanf("%f %f %f %f %f %f", &a1, &b1, &c1, &a2, &b2, &c2);
//
//    if (a1 * b2 - a2 * b1 != 0) {
//        float x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
//        float y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
//
//        printf("x = %.2f and y = %.2f\n", x, y);
//    } else {
//        printf("Unable to compute because the denominator is zero!\n");
//    }
//
//    return 0;
//}

// Question 2
int main() {
    int ccount = 0, dcount = 0;
    char ch;
    printf("Enter your characters (# to end): \n");

    int x = 5;
    printf("x = %d", x++); // print x before ++
    printf("x = %d", ++x); // ++ before print x

    scanf("%c", &ch);
    while (ch != '#') {
        if (ch >= '0' && ch <= '9') {
            dcount++;
        } else if ( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            ccount++;
        }

        scanf("%c", &ch);
    }

    printf("The number of digits: %d\n", dcount);
    printf("The number of letters: %d\n", ccount);
    return 0;
}

// Question 3
//int main() {
//    int height;
//    int num;
//    printf("Enter the height: \n");
//    scanf("%d", &height);
//    printf("Pattern: \n");
//    for (int i = 1; i <= height; i++) {
//        if (i % 3 == 1) {
//            num = 1;
//        } else if (i % 3 == 2) {
//            num = 2;
//        } else {
//            num = 3;
//        }
//        for (int j = 1; j <= i; j++) {
//            if (j == i) {
//                printf("%d\n", num);
//            } else {
//                printf("%d", num);
//            }
//        }
//    }
//    return 0;
//}

// Question 4
//int main() {
//    float x, result = 0.0, denominator;
//
//    printf("Enter x:\n");
//    scanf("%f", &x);
//
//    for (int i = 0; i <= 10; i++) {
//        denominator = 1.0;
//        if (i != 0) {
//            for (int j = 1; j <= i; j++) {
//                denominator *= j;
//            }
//        }
//
//        result = result + pow(x, i) / denominator;
//    }
//
//    printf("Result = %.2f\n", result);
//
//    return 0;
//}

int main() {
    float x, result = 1.0, denominator = 1.0, numerator = 1.0;

    printf("Enter x:\n");
    scanf("%f", &x);

    for (int i = 1; i <= 10; i++) {
        denominator *= i;
        numerator *= x;
        result += numerator / denominator;
    }

    printf("Result = %.2f\n", result);

    return 0;
}

