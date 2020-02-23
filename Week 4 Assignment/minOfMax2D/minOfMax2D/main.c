//
//  main.c
//  minOfMax2D
//
//  Created by Alvin Tan De Jun on 5/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#define SIZE 10

int minOfMax2D(int ar[][SIZE], int rowSize, int colSize);

int main() {
    int ar[SIZE][SIZE], rowSize, colSize;
    int i,j,min;

    printf("Enter row size of the 2D array: \n");
    scanf("%d", &rowSize);
    
    printf("Enter column size of the 2D array: \n");
    scanf("%d", &colSize);
    
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &ar[i][j]);
    
    min = minOfMax2D(ar, rowSize, colSize);
    printf("minOfMax2D(): %d\n", min);
    
    return 0;
}

int minOfMax2D(int ar[][SIZE], int rowSize, int colSize) {
    int i, j;
    int rowMax, minOfMax;
    
    for (i = 0; i < rowSize; i++) {
        rowMax = ar[i][0];
        for (j = 0; j < colSize - 1; j++) {
            if (ar[i][j+1] > rowMax) {
                rowMax = ar[i][j+1];
            }
        }
        
        if (i == 0) {
            minOfMax = rowMax;
        }
        
        if (rowMax < minOfMax) {
            minOfMax = rowMax;
        }
    }
    
    return minOfMax;
}
