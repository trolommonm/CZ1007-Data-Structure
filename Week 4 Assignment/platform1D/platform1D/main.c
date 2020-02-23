//
//  main.c
//  platform1D
//
//  Created by Alvin Tan De Jun on 6/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>

int platform1D(int ar[], int size);

int main()
{
    int i,b[50],size;
    
    printf("Enter array size: \n");
    scanf("%d", &size);
    
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d",&b[i]);
    
    printf("platform1D(): %d\n", platform1D(b,size));
    
    return 0;
}

int platform1D(int ar[], int size) {
    int i;
    int count = 1;
    int highestCount = 1;
    
    for (i = 0; i < size - 1; i++) {
        if (ar[i + 1] == ar[i]) {
            count++;
        } else {
            if (count > highestCount) {
                highestCount = count;
                count = 1;
            }
        }
    }
    
    return highestCount;
}
