//
//  main.c
//  computeAverage
//
//  Created by Alvin Tan De Jun on 14/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#include <string.h>

struct student {
    char name[20]; /* student name */
    double testScore; /* test score */
    double examScore; /* exam score */
    double total; /* total = (testScore+examScore)/2 */
};

double average(void);

int main() {
    printf("average(): %.2f\n", average());
    return 0;
}

double average(void) {
    struct student students[50];
    int count = 0;
    double sumOfTotal = 0;
    double total;
    char *p;
    
    while (count < 50) {
        printf("Enter student name:\n");
        scanf("\n");
        fgets(students[count].name, 20, stdin);
        if ((p = strchr(students[count].name, '\n'))) {
            *p = '\0';
        }
        if (strcmp(students[count].name, "END") == 0) {
            break;
        }
        
        printf("Enter test score:\n");
        scanf("%lf", &students[count].testScore);
        printf("Enter exam score:\n");
        scanf("%lf", &students[count].examScore);
        fflush(stdin);
        
        total = (students[count].testScore + students[count].examScore) / 2;
        sumOfTotal += total;
        
        printf("Student %s total = %.2f\n", students[count].name, total);
        
        count++;
        total = 0;
        int ch;
        //while ((ch = getchar()) != '\n' && ch != EOF);
    }
    
    return count != 0 ? sumOfTotal / count : 0;
}
