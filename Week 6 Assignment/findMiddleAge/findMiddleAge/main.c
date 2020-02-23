//
//  main.c
//  findMiddleAge
//
//  Created by Alvin Tan De Jun on 19/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
typedef struct {
    char name[20];
    int age;
} Person;

void readData(Person *p);
Person findMiddleAge(Person *p);

int main()
{
    Person man[3], middle;

    readData(man);
    middle = findMiddleAge(man);
    printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
    return 0;
}

void readData(Person *p) {
    int i;
    for (i = 0; i < 3; i++) {
        printf("Enter person %d:\n", i + 1);
        scanf("%s %d", (p+i)->name, &((p+i)->age));
    }
}

Person findMiddleAge(Person *p) {
    int person1Age = p->age;
    int person2Age = (p+1)->age;
    int person3Age = (p+2)->age;
    
    if ((person2Age > person1Age && person3Age < person1Age) || (person2Age < person1Age && person3Age > person1Age)) {
        return *p;
    }
    
    if ((person1Age > person2Age && person3Age < person2Age) || (person1Age < person2Age && person3Age > person2Age)) {
        return *(p+1);
    }
    
    if ((person1Age > person3Age && person2Age < person3Age) || (person1Age < person3Age && person2Age > person3Age)) {
        return *(p+2);
    }
    
    return *(p+1);
}
