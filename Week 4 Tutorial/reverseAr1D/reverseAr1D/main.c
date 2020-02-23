//
//  main.c
//  reverseAr1D
//
//  Created by Alvin Tan De Jun on 25/1/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
void printReverse1(int ar[], int size);
void printReverse2(int ar[], int size);
void reverseAr1D(int ar[], int size);

int main()
{
    int ar[80];
    int size, i;
    
    printf("Enter array size: \n");
    scanf("%d", &size);
    
    printf("Enter %d data: \n", size);
    
    for (i=0; i <= size-1; i++)
        scanf("%d", &ar[i]);
    
    printReverse1(ar, size);
    printReverse2(ar, size);
    reverseAr1D(ar, size);
    
    printf("reverseAr1D(): ");
    if (size > 0) {
        for (i=0; i<size; i++)
            printf("%d ", ar[i]);
    }
    
    return 0;
}
      
void printReverse1(int ar[], int size) {
    printf("printReverse1(): ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", ar[i]);
    }
    printf("\n");
}
      
void printReverse2(int ar[], int size) {
    printf("printReverse2(): ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", *(ar + i));
    }
    printf("\n");
}
      
void reverseAr1D(int ar[], int size) {
    int arCopy[size];
    
    for (int i = 0; i < size; i++) {
        arCopy[i] = ar[i];
    }
    
    for (int i = 0; i < size; i++) {
        *(ar + i) = *(arCopy + (size - 1 - i));
    }
    
    // just use one foor loop and swap first and last, 2nd and 2nd last ...
}
