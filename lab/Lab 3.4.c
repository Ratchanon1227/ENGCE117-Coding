#include <stdio.h>

struct student {
    char name[50] ;
    int score ;
} ;

void GetStudent(struct student child[][10], int *room) {
    printf("Enter Number of Room : ") ;
    scanf("%d", room) ;

    for(int i = 0; i < *room; i++) {
        printf("\n--- Room %d ---\n", i + 1) ;
        for(int j = 0; j < 10; j++) {
            printf("Enter Student %d Name : ", j + 1) ;
            scanf ("%s", child[i][j].name) ;
            printf("Enter Student %d Score : ", j + 1) ;
            scanf("%d", &child[i][j].score);
        }
    }
}

int main() {
    struct student children[20][10] ;
    int group ;
    GetStudent(children, &group) ;
    printf("\nTotal Room Recorded : %d\n", group) ;
    return 0 ; 
}