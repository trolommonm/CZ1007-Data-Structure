#include <stdio.h>

void specialNumbers1D(int ar[], int num, int *size);
int cube(int num);

int main() {
    int a[20],i,size=0,num;

    printf("Enter a number (between 100 and 999): \n");
    scanf("%d", &num);
    
    specialNumbers1D(a, num, &size);
    printf("specialNumbers1D(): ");
    for (i=0; i<size; i++)
        printf("%d ",a[i]);
    
    return 0;
}

void specialNumbers1D(int ar[], int num, int *size) {
    int i;
    int sum, temp;
    
    for (i = 100; i <= num; i++) {
        
        temp = i;
        sum = 0;
        while (temp > 0) {
            sum += cube((temp % 10));
            temp /= 10;
        }
        
        if (sum == i) {
            ar[*size] = i;
            (*size)++;
        }
    }
}

int cube(int num) {
    int i, cube = num;
    
    for (i = 0; i < 2; i++) {
        cube *= num;
    }
    
    return cube;
}
