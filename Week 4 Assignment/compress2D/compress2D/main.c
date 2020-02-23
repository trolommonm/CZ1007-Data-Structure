//
//  main.c
//  compress2D
//
//  Created by Alvin Tan De Jun on 5/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#define SIZE 100

void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);

int main() {
    int data[SIZE][SIZE];
    int i,j;
    int rowSize, colSize;
    
    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &data[i][j]);
    
    printf("compress2D(): \n");
    compress2D(data, rowSize, colSize);
    
    return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize) {
    int i, j;
    int count;
    
    for (i = 0; i < rowSize; i++) {
        count = 1;
        for (j = 0; j < colSize; j++) {
            if ((j + 1) == colSize) {
                printf("%d %d ", data[i][j], count);
            } else {
                if (data[i][j+1] == data[i][j]) {
                    count++;
                } else {
                    printf("%d %d ", data[i][j], count);
                    count = 1;
                }
            }
        }
        
        printf("\n");
    }
}


