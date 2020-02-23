//
//  main.c
//  test
//
//  Created by Alvin Tan De Jun on 26/1/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>

void test(int array[]);

int main(int argc, const char * argv[]) {
    // insert code here...
    int array[] = {1, 2, 3};
    for (int i = 0; i < 3; i++) {
        printf("%d", array[i]);
    }
    
    test(array);
    
    for (int i = 0; i < 3; i++) {
        printf("%d", array[i]);
    }
    return 0;
}

void test(int array[]) {
    array[0] = 5;
}
