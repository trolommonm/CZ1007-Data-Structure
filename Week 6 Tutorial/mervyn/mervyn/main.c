#include <stdio.h>
#include <string.h>
struct student{
    char name[20]; /* student name */
    double testScore; /* test score */
    double examScore; /* exam score */
    double total; /* total = (testScore+examScore)/2 */
};
double average();
int main()
{
    printf("average(): %.2f\n", average());
    return 0;
}
double average() {
    char *p;
    int i=0;
    struct student stu[50];
    float average=0,sum=0;
    while (i>=0) {
        printf("Enter student name: \n");
        scanf("\n");
        fgets(stu[i].name,20,stdin);
        printf("HELP");
        if(stu[i].name=="END"){
            break;
        }
        printf("Enter test score:\n");
        scanf("%lf",&stu[i].testScore);
        printf("Enter exam score:\n");
        scanf("%lf",&stu[i].examScore);
        stu[i].total=(stu[i].testScore+stu[i].examScore)/2;
        i++;
    }
    int count=0;
    for(count;count<=i;count++){
        sum=sum + stu[count].total;
        count++;
    }
    average=sum/(count+1);
    return average;
}
