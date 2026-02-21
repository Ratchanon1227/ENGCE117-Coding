#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct studentNode {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

void InsNode(struct studentNode ***now, const char n[], int a, char s, float g) {
    struct studentNode *newNode = (struct studentNode *)malloc(sizeof(struct studentNode)) ;
    strcpy(newNode->name, n) ;
    newNode->age = a ;
    newNode->sex = s ;
    newNode->gpa = g ;
    newNode->next = **now ;
    **now = newNode ;
}

void DelNode(struct studentNode ***now) {
    if (**now != NULL) {
        struct studentNode *temp = **now ;
        **now = (**now)->next ;
        free(temp) ;
    }
}

void GoNext(struct studentNode ***now) {
    if (**now != NULL) {
        *now = &((**now)->next) ;
    }
}

void ShowNode(struct studentNode **now) {
    if (*now != NULL) {
        printf("%s %d %c %.2f\n", (*now)->name, (*now)->age, (*now)->sex, (*now)->gpa) ;
    }
}

void ShowNodeNewList(struct studentNode **now) {
    struct studentNode *temp = *now ;
    while (temp != NULL) {
        printf("%s ", temp->name) ;
        temp = temp->next ;
    }
    printf("\n") ;
}

int main() {
    struct studentNode *listA = NULL ;
    struct studentNode **nowA = &listA ;
    struct studentNode *listB = NULL ;
    struct studentNode **nowB = &listB ;
    struct studentNode **listC ;

    InsNode(&nowA, "One", 1, 'A', 1.1) ;
    InsNode(&nowA, "Two", 2, 'B', 2.2) ;
    InsNode(&nowA, "Three", 3, 'C', 3.3) ;
    GoNext(&nowA) ;
    ShowNode(nowA) ;
    InsNode(&nowB, "Four", 4, 'D', 4.4) ;
    InsNode(&nowB, "Five", 5, 'E', 5.5) ;
    InsNode(&nowB, "Six", 6, 'F', 6.6) ;
    GoNext(&nowB) ;
    DelNode(&nowB) ;
    ShowNodeNewList(nowB) ;
    listC = nowA ;
    ShowNode(listC) ;
    listC = nowB ;
    ShowNodeNewList(listC) ;

    return 0 ;
}