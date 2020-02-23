//
//  main.c
//  Week 2 Lab
//
//  Created by Alvin Tan De Jun on 21/1/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>

int main() {
    int studentNumber, mark;
    
    printf("Enter Student ID: \n");
    scanf("%d", &studentNumber);
    
    while (studentNumber != -1) {
        printf("Enter Mark: ");
        scanf("%d", &mark);
        switch ((mark + 5) / 10) {
            case 10: case 9: case 8:
                printf("Grade = A\n");
                break;
            case 7:
                printf("Grade = B\n");
                break;
            case 6:
                printf("Grade = C\n");
                break;
            case 5:
                printf("Grade = D\n");
                break;
            default:
                printf("Grade = F\n");
                break;
        }
        printf("Enter Student ID: \n");
        scanf("%d", &studentNumber);
    }
    
    return 0;
}

//int main() {
//    int total, count, lines, input;
//    double average;
//    printf("Enter number of lines: \n");
//    scanf("%d", &lines);
//
//    for (int i = 0; i < lines; i++) {
//        total = 0;
//        count = 0;
//        printf("Enter line %d (end with -1)", i + 1);
//        scanf("%d", &input);
//
//        while (input != -1) {
//            total += input;
//            count++;
//            scanf("%d", &input);
//        }
//
//        average = (double) total / count;
//        printf("Average = %.2f\n", average);
//    }
//
//    return 0;
//}
