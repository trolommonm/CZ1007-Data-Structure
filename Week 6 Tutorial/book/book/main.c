//
//  main.c
//  book
//
//  Created by Alvin Tan De Jun on 15/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>
#include <string.h>
typedef struct {
    char title[80];
    char lastname[80];
    char firstname[80];
    char publisher[80];
} Booktype;
void readBook(Booktype *book);
void printBook(Booktype book);
void stringClean(char *str);
int main() {
    Booktype book;

    readBook(&book);
    printf("The book information: \n");
    printBook(book);
}

void readBook(Booktype *book) {
    printf("Enter the title of the book:\n");
    fgets(book->title, 80, stdin);
    printf("Enter the author first name:\n");
    fgets(book->firstname, 80, stdin);
    printf("Enter the author last name:\n");
    fgets(book->lastname, 80, stdin);
    printf("Enter the publisher name:\n");
    fgets(book->publisher, 80, stdin);
    
    stringClean(book->title);
    stringClean(book->firstname);
    stringClean(book->lastname);
    stringClean(book->publisher);
}

void printBook(Booktype book) {
    printf("Title: %s\n", book.title);
    printf("Author: %s %s\n", book.firstname, book.lastname);
    printf("Publisher: %s\n", book.publisher);
}

void stringClean(char *str) {
    char *p;
    if (p = strchr(str, '\n')) {
        *p = '\0';
    }
}
