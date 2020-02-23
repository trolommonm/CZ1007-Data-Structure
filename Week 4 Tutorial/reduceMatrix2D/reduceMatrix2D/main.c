//
//  main.c
//  reduceMatrix2D
//
//  Created by Alvin Tan De Jun on 26/1/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#define SIZE 10
void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);
void display(int ar[][SIZE], int rowSize, int colSize);
int main() {
    int ar[SIZE][SIZE], rowSize, colSize;
    int i,j;
    
    printf("Enter row size of the 2D array: \n");
    scanf("%d", &rowSize);
    
    printf("Enter column size of the 2D array: \n");
    scanf("%d", &colSize);
    
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
                scanf("%d", &ar[i][j]);
    
    reduceMatrix2D(ar, rowSize, colSize);
    
    printf("reduceMatrix2D(): \n");
    
    display(ar, rowSize, colSize);
    
    return 0;
}

void display(int ar[][SIZE], int rowSize, int colSize) {
    int l,m;
    
    for (l = 0; l < rowSize; l++) {
        for (m = 0; m < colSize; m++)
            printf("%d ", ar[l][m]);
        printf("\n");
    }
}

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize) {
    for (int i = 0; i < colSize; i++) {
        int sum = 0;
        for (int j = i; j < rowSize; j++) {
            sum += ar[j][i];
            if (j != i) {
                ar[j][i] = 0;
            }
        }
        ar[i][i] = sum;
    }
}
