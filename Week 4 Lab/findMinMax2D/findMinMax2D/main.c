//
//  main.c
//  findMinMax2D
//
//  Created by Alvin Tan De Jun on 31/1/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#define SIZE 5

void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max);

int main() {
    int A[5][5];
    int i,j,min,max;
    
    printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);
    for (i=0; i<5; i++)
        for (j=0; j<5; j++)
            scanf("%d", &A[i][j]);
    
    findMinMax2D(A, &min, &max);
    printf("min = %d\nmax = %d", min, max);
    
    return 0;
}

void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max) {
    int i, j;
    *max = ar[0][0];
    *min = ar[0][0];
    
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (ar[i][j] > *max) {
                *max = ar[i][j];
            }
            
            if (ar[i][j] < *min) {
                *min = ar[i][j];
            }
        }
    }
}
