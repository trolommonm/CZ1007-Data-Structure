//
//  main.c
//  complexNumber
//
//  Created by Alvin Tan De Jun on 19/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#include <math.h>

typedef struct {
 double real;
 double imag;
} Complex;

Complex add(Complex c1, Complex c2);
Complex mul(Complex c1, Complex c2);
Complex sub(Complex *c1, Complex *c2);
Complex divide(Complex *c1, Complex *c2);

int main()
{
    int choice;
    Complex input1, input2, result;

    printf("Complex number operations: \n");
    printf("1 - addition \n");
    printf("2 - subtraction \n");
    printf("3 - multiplication \n");
    printf("4 - division \n");
    printf("5 - quit \n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        if (choice == 5)
            return 0;
        printf("Enter Complex Number 1: \n");
        scanf("%lf %lf", &input1.real, &input1.imag);
        printf("Enter Complex Number 2: \n");
        scanf("%lf %lf", &input2.real, &input2.imag);
        switch (choice) {
            case 1:
                result = add(input1, input2);
                break;
            case 2:
                result = sub(&input1, &input2);
                break;
            case 3:
                result = mul(input1, input2);
                break;
            case 4:
                result = divide(&input1, &input2);
                break;
        }
        printf("complex(): real %.2f imag %.2f\n", result.real, result.imag);
    } while (choice<5);
    return 0;
}

Complex add(Complex c1, Complex c2)
{
 /* write your code here */
    Complex c3;
    
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    
    return c3;
}

Complex sub(Complex *c1, Complex *c2)
{
 /* write your code here */
    Complex c3;
    
    c3.real = c1->real - c2->real;
    c3.imag = c1->imag - c2->imag;
    
    return c3;
}

Complex mul(Complex c1, Complex c2)
{
 /* write your code here */
    Complex c3;
    
    c3.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    c3.imag = c1.real * c2.imag + c1.imag * c2.real;
    
    return c3;
}

Complex divide(Complex *c1, Complex *c2) {
 /* write your code here */
    Complex c3;
    
    c3.real = ((c1->real * c2->real) + (c1->imag * c2->imag)) / (pow(c2->real, 2) + pow(c2->imag, 2));
    c3.imag =  (-c1->real * c2->imag + c1->imag * c2->real) / (pow(c2->real, 2) + pow(c2->imag, 2));
    
    return c3;
}
