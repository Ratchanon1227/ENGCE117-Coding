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

struct studentNode* AddNode(struct studentNode **start, char n[], int a, char s, float g) ;
void InsNode(struct studentNode *now, char n[], int a, char s, float g) ;
void DelNode(struct studentNode *now) ;
void ShowAll(struct studentNode *walk) ;

int main() {
    struct studentNode *start, *now ;
    start = NULL ;
    
    now = AddNode(&start, "TK", 21, 'M', 3.22); ShowAll(start) ;
    now = AddNode(&start, "MT", 24, 'F', 3.65); ShowAll(start) ;
    InsNode(now, "ART", 21, 'M', 3.33); ShowAll(start) ;
    InsNode(now, "BASS", 21, 'M', 3.44); ShowAll(start) ; 
    DelNode(now); ShowAll(start) ;
    return 0 ;
}

void ShowAll(struct studentNode *walk) {
    while(walk != NULL) {
        printf("%s ", walk->name) ;
        walk = walk->next ;
    }
    printf("\n") ;
}

struct studentNode* AddNode(struct studentNode **start, char n[], int a, char s, float g) {
    struct studentNode *newNode = (struct studentNode*)malloc(sizeof(struct studentNode)) ;
    strcpy(newNode->name, n) ;
    newNode->age = a ;
    newNode->sex = s ;
    newNode->gpa = g ;
    newNode->next = NULL ;

    if (*start == NULL) {
        *start = newNode ;
    } 
    else {
        struct studentNode *temp = *start ;
        while (temp->next != NULL) {
            temp = temp->next ;
        }
        temp->next = newNode ;
    }
    return newNode ;
}

void InsNode(struct studentNode *now, char n[], int a, char s, float g) {
    if (now == NULL) return;

    struct studentNode *newNode = (struct studentNode*)malloc(sizeof(struct studentNode));
    strcpy(newNode->name, n) ;
    newNode->age = a ;
    newNode->sex = s ;
    newNode->gpa = g ;
    newNode->next = now->next ; 
    now->next = newNode ;
}

void DelNode(struct studentNode *now) {
    if (now == NULL || now->next == NULL) return ;
struct studentNode *temp = now->next ;
now->next = temp->next ;
free(temp) ;              
}