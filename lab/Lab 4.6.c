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

void SaveNode(struct studentNode *child, char n[], int a, char s, float g) ;
void GoNext2(struct studentNode **walk) ;

int main() {
    struct studentNode *start, *now1, **now2 ;
    start = (struct studentNode*)malloc(sizeof(struct studentNode)) ;
    SaveNode(start,"TK", 21, 'M', 3.30) ;

    start->next = (struct studentNode*)malloc(sizeof(struct studentNode)) ;
    SaveNode(start->next,"MT", 24, 'F', 3.44) ;

    start->next->next = (struct studentNode*)malloc(sizeof(struct studentNode)) ;
    SaveNode(start->next->next,"Art", 21, 'M', 3.23) ;

    start->next->next->next = (struct studentNode*)malloc(sizeof(struct studentNode)) ;
    SaveNode(start->next->next->next,"Bas", 21, 'M', 3.55) ;

    now1 = start ;
    now2 = &start ;

    GoNext2(now2) ;
    printf("%s ", (*now2)->name) ;
    return 0 ;
}

void SaveNode(struct studentNode *child, char n[], int a, char s, float g) {
    strcpy(child->name, n) ;
    child->age = a ;
    child->sex = s ;
    child->gpa = g ;
    child->next = NULL ;
}

void GoNext2(struct studentNode **walk) {
    while (*walk != NULL) {
        printf("Name : %s |", (*walk)->name);
        printf("Age : %d |", (*walk)->age);
        printf("Sex : %c |", (*walk)->sex);
        printf("GPA : %.2f \n", (*walk)->gpa);
        printf("------------\n");
        *walk = (*walk)->next;
    }
}