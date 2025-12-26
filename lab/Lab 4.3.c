#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;


void SaveNode( struct studentNode *child, char n[], int a, char s, float g ) ;
void GoNext1( struct studentNode *walk ) ;

int main() {
    struct studentNode *start, *now1, **now2 ; 
    start = (struct studentNode*)malloc(sizeof(struct studentNode)); 
    SaveNode( start, "TK", 6, 'M', 3.11 ) ;

    start->next = (struct studentNode*)malloc(sizeof(struct studentNode));
    SaveNode( start->next, "MT", 8, 'F', 3.22 ) ;
    now1 = start ;
    now2 = &start ;

    GoNext1( now1 ) ;
    printf( "%s\n", now1->name ) ; 

    return 0 ;
}

void SaveNode( struct studentNode *child, char n[], int a, char s, float g ) {
    strcpy( child->name, n ) ;
    child->age = a ;
    child->sex = s ;
    child->gpa = g ;
}

void GoNext1( struct studentNode *walk ) {
    if (walk->next != NULL) {
        walk = walk->next;
        printf("%s\n", walk->name);
    }
}