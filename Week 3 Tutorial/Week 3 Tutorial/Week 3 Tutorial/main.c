//
//  main.c
//  Week 3 Tutorial
//
//  Created by Alvin Tan De Jun on 22/1/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>

//void function0(void);
//void function1(int h, int k);
//void function2(int *h, int *k);
//int main()
//{
//    int h, k;
//    h = 5;
//    k = 15;
//    printf("h = %d, k = %d\n", h, k);
//    function0();
//    printf("h = %d, k = %d\n", h, k);
//    function1(h, k);
//    printf("h = %d, k = %d\n", h, k);
//    function2(&h, &k);
//    printf("h = %d, k = %d\n", h, k);
//    return 0;
//}
//void function0()
//{
//    int h, k;
//    h = k = -100;
//    printf("h = %d, k = %d\n", h, k);
//}
//
//void function1(int h, int k) {
//    printf("h = %d, k = %d\n", h, k);
//    h = k = 100;
//    printf("h = %d, k = %d\n", h, k);
//}
//void function2(int *h, int *k) {
//    printf("h = %d, k = %d\n", *h, *k);
//    *h = *k = 200;
//    printf("h = %d, k = %d\n", *h, *k);
//}


//swap example
//void swap(int *a, int *b);
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    int x = 11, y = 10;
//    swap(&x, &y);
//    printf("x: %d, y: %d", x, y);
//
//    return 0;
//}
//void swap(int *a, int *b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}

// Q3
#include <stdio.h>
int digitValue1(int num, int k);
void digitValue2(int num, int k, int *result);

int main() {
    int num, digit, result=-1;
    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("Enter k position: \n");
    scanf("%d", &digit);
    printf("digitValue1(): %d\n",  digitValue1(num, digit));
    digitValue2(num, digit, &result);
    printf("digitValue2(): %d\n", result);
    return 0;
}

int digitValue1(int num, int k) {
    for (int i = 1; i < k; i++) {
        num /= 10;
    }
    num %= 10;
    return num;
}

void digitValue2(int num, int k, int *result) {
    for (int i = 1; i < k; i++) {
        num /= 10;
    }

    *result = num % 10;
}

// Q4
//#include <stdio.h>
//#include <math.h>
//
//void inputXY(double *x1, double *y1, double *x2, double *y2);
//void outputResult(double dist);
//double calDistance1(double x1, double y1, double x2, double y2);
//void calDistance2(double x1, double y1, double x2, double y2, double *dist);
//
//int main() {
//    double x1, y1, x2, y2, distance=-1;
//    inputXY(&x1, &y1, &x2, &y2); // call by reference
//    distance = calDistance1(x1, y1, x2, y2); // call by value
//    printf("calDistance1(): ");
//    outputResult(distance);
//    calDistance2(x1, y1, x2, y2, &distance); // call by reference
//    printf("calDistance2(): ");
//    outputResult(distance); // call by value
//
//    return 0;
//}
//
//void inputXY(double *x1, double *y1, double *x2, double *y2) {
//    printf("Input x1 y1 x2 y2:\n");
//    scanf("%lf %lf %lf %lf", x1, y1, x2, y2);
//}
//
//double calDistance1(double x1, double y1, double x2, double y2) {
//    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//}
//
//void calDistance2(double x1, double y1, double x2, double y2, double *dist) {
//    *dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//}
//
//void outputResult(double dist) {
//    printf("%.2lf\n", dist);
//}
