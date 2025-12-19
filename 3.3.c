#include <stdio.h>

struct Student {
    char name[50] ;
    int studentId ;
    float score ;
} ;

int main() {
    int N ;
    float totalScore = 0.0 ;
    float averageScore ;
    struct Student students[N] ;

    if(scanf("%d", &N) != 1)
        return 0 ;

    for(int i = 0; i < N; i++) {
        scanf("%d", &students[i].studentId) ;
        scanf("%f", &students[i].score) ;
        scanf("%s", students[i].name) ;
        totalScore += students[i].score ;
    }

    if(N > 0) {
        averageScore = totalScore / N ;
    }
        else {
            averageScore = 0.0 ;
        }
    printf("Average Score : %.2f\n", averageScore) ;
    return 0 ;
} 