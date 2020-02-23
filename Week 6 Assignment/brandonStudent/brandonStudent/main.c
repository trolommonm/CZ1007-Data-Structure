#include <stdio.h>
#include <string.h>
#define SIZE 50
typedef struct {
   int id;
   char name[50];
} Student;
void inputStud(Student *s, int size);
void printStud(Student *s, int size);
int removeStud(Student *s, int *size, char *target);
int main()
{
   Student s[SIZE];
   int size=0, choice;
   char target[80], *p;
   int result;

   printf("Select one of the following options: \n");
   printf("1: inputStud()\n");
   printf("2: removeStud()\n");
   printf("3: printStud()\n");
   printf("4: exit()\n");
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:
            printf("Enter size: \n");
            scanf("%d", &size);
            printf("Enter %d students: \n", size);
            inputStud(s, size);
            break;
         case 2:
            printf("Enter name to be removed: \n");
            scanf("\n");
            fgets(target, 80, stdin);
            if (p=strchr(target,'\n')) *p = '\0';
            printf("removeStud(): ");
            result = removeStud(s, &size, target);
            if (result == 0)
               printf("Successfully removed\n");
            else if (result == 1)
               printf("Array is empty\n");
            else if (result == 2)
               printf("The target does not exist\n");
            else
               printf("An error has occurred\n");
            break;
         case 3:
            printStud(s, size);
            break;
      }
   } while (choice < 4);
   return 0;
}
void inputStud(Student *s, int size)
{
    int i;
    char ch, *p;

    for(i = 0; i < size; i++){
        printf("Student ID:\n");
        scanf("%d", &((s+i)->id));
        printf("Student Name:\n");
        while (ch = getchar() != '\n' && ch != EOF);
        fgets((s+i)->name, 50, stdin);
        if (p=strchr((s+i)->name,'\n')) *p = '\0';
    }
}
void printStud(Student *s, int size)
{
    if(size == 0){
        printf("Empty array\n");
        return;
    }
    int i;
    Student *p;
    printf("The current student list: \n");
    for(i = 0; i < size; i++){
        p = (s+i);
        printf("Student ID: %d Student Name: %s\n", p->id, p->name);
    }
}
int removeStud(Student *s, int *size, char *target)
{
    if (*size == 0) return 1;

    int i, j, k=0;
    Student p[50];
    for (i = 0; i < *size; i++){
        if(strcmp(&((s+i)->name), target) == 0) {
            for (j = 0; j < size - 1; j++){
                if (i == j) k = 1;
                p[j] = *(s+j+k);
            }
            (*size)--;
            s = p;
            return 0;
        }
    }
    return 2;


}
