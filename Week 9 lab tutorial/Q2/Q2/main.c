// CX1007 Data Structures
// Week 9 Lab Tutorial - DynamicData-Linked Lists
// Template for Q2

//#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

////////////////////////////////////////////////////////////

typedef struct _listnode{
    int item;
    struct _listnode *next;
} ListNode;

int searchList(ListNode *head, int value);

void main()
{
    ListNode *head, *p, *temp;
    int n;


    head=NULL;
    p=NULL;        // pointing to the last node in the list
    printf("Enter a list of numbers, terminated by the value -1: \n");
    /////////////////////////////////////////////////////////////////

    //Question 2
    //Write your program code here
    while (1) {
        scanf("%d", &n);
        
        if (n != -1) {
            if (head == NULL) {
                temp = malloc(sizeof(struct _listnode));
                temp->item = n;
                head = temp;
                continue;
            }
            
            temp->next = malloc(sizeof(struct _listnode));
            temp = temp->next;
            temp->item = n;
            
        } else {
            if (temp != NULL) {
                temp->next = NULL;
            }
            break;
        }
        
    }
    
    temp = head;
    printf("Current list: ");
    while (temp != NULL) {
        printf("%d ", temp->item);
        temp = temp->next;
    }
    printf("\n");
    
   //////////////////////////////////////////////////////////////////
    
    //search for a value in the list. Q3

    printf("Enter value to search for: ");
    scanf("%d", &n);
    printf("Value %d found at index: %d\n", n, searchList(head, n));
    
    ListNode *pp = head;
    ListNode *tmp;
    while (pp != NULL) {
        tmp = pp;
        pp = pp->next;
        free(tmp);
    }
}

int searchList(ListNode *head, int value) {
    int index = 0;
    while (head != NULL) {
        if (value == head->item) {
            return index;
        }
        index++;
        head = head->next;
    }
    
    return -1;
}

