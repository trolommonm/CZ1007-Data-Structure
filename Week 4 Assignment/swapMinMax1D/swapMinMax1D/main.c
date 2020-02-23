//
//  main.c
//  swapMinMax1D
//
//  Created by Alvin Tan De Jun on 6/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>

void swapMinMax1D(int ar[], int size);

int main()
{
    int ar[50],i,size;

    printf("Enter array size: \n");
    scanf("%d", &size);
    
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d",ar+i);
    
    swapMinMax1D(ar, size);
    
    printf("swapMinMax1D(): ");
    for (i=0; i<size; i++)
        printf("%d ",*(ar+i));
    
    return 0;
}
void swapMinMax1D(int ar[], int size) {
    int i;
    int minNo = ar[0], maxNo = ar[0];
    int minIndex = 0, maxIndex = 0;
    
    for (i = 0; i < size - 1; i++) {
        if (ar[i + 1] >= maxNo) {
            maxNo = ar[i + 1];
            maxIndex = i + 1;
        }
        
        if (ar[i + 1] <= minNo) {
            minNo = ar[i + 1];
            minIndex = i + 1;
        }
    }
    
    int temp = ar[minIndex];
    ar[minIndex] = ar[maxIndex];
    ar[maxIndex] = temp;
}
