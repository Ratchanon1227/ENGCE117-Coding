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

void ShowAll(struct studentNode **walk) ;
void InsNode(struct studentNode **now, char *n, int a, char s, float g) ;
void GoNext(struct studentNode ***now) ;
void DelNode(struct studentNode **now) ;

int main() {
    struct studentNode *start, **now ;
    start = NULL ;
    now = &start ;

    InsNode(now, "TK", 21, 'M', 3.22) ; ShowAll(&start) ;
    InsNode(now, "MT", 24, 'F', 3.65) ; ShowAll(&start) ;
    GoNext(&now) ;
    InsNode(now, "ART", 21, 'M', 3.33) ; ShowAll(&start) ;
    InsNode(now, "BASS", 21, 'M', 3.44) ; ShowAll(&start) ;
    GoNext(&now) ;
    DelNode(now) ; ShowAll(&start) ;
    return 0 ;
}

void ShowAll(struct studentNode **walk) {
    while (*walk != NULL) {
        printf("%s ", (*walk)->name) ;
        walk = &(*walk)->next ;
    }
    printf("\n") ;
}

void InsNode(struct studentNode **now, char *n, int a, char s, float g) {
    struct studentNode *newNode = (struct studentNode *)malloc(sizeof(struct studentNode)) ;

    strcpy(newNode->name, n) ;
    newNode->age = a ;
    newNode->sex = s ;
    newNode->gpa = g ;
    newNode->next = *now ;
    *now = newNode ;
}

void GoNext(struct studentNode ***now) {
    if((**now) != NULL) {
        *now = &((**now)->next) ;
    }
}

void DelNode(struct studentNode **now) {
    if(*now != NULL) {
        struct studentNode *temp = *now ;
        *now = temp->next ;
        free(temp) ;
    }
}