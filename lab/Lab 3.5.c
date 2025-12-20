#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50] ;
    int score ;
} ;

struct student(*GetStudent(int *room))[10] {
    printf("Enter Number of Room : ") ;
    scanf("%d", room) ;

    struct student(*child)[10] = malloc((*room) * sizeof(*child)) ;

    for(int i = 0; i < *room; i++) {
        printf("\n---Room %d---\n", i + 1) ;
        for(int j = 0; j < 10; j ++) {
            printf("Enter Student %d Name :", j + 1) ;
            scanf("%s", child[i][j].name) ;
            printf("Enter Student %d Score : ", j + 1) ;
            scanf("%d", &child[i][j].score) ;
        }
    }
    return child ;
}

int main() {
    struct student (*children)[10] ;
    int group ;
    children = GetStudent(&group) ;
    printf("\nTotal Room Recorded : %d\n", group) ;
    free(children) ;
    return 0 ;
}