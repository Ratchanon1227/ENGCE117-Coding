#include <stdio.h>

struct Student {
    char name[50] ;
    int studentID ;
    float score ;
} ;

int main() {
    int N, i ;

    printf("Enter Your Number : ") ;
    if (scanf("%d", &N) != 1) {
        return 1 ;
    }

    struct Student students[N] ;

    for(i = 0; i < N; i++) {
        if(scanf("%d %f %s", &students[i].studentID, &students[i].score, students[i].name) != 3) {
            return 1 ;
        }
    }

    for(i = 0; i < N; i++) {
        printf("ID : %d, Name : %s, Score : %.2f\n",
        students[i].studentID,
        students[i].name,
        students[i].score) ;
    }
    return 0 ;
    
}