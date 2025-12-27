#include <stdio.h>

int main() {
    int scores[5] ;
    int sum = 0 ;
    float average = 0.0 ;
    int above_average_count = 0 ;
    int i ;

    for(i = 0; i < 5; i++) {
        printf("Enter score for student %d : ", i + 1) ;
        scanf("%d", &scores[i]) ;
        sum += scores[i] ;
    }

    average = (float)sum / 5 ;

    for(i = 0; i < 5; i++) {
        if(scores[i] > average) {
            above_average_count++ ;
        }
    }
    printf("\n--- STUDENT SCORE ANALYSIS REPORT ---\n") ;
    printf("Recorded Scores : ") ;

    for(i = 0; i < 5; i++) {
        printf(" %d", scores[i]) ;
    }

    printf("\nTotal Sum : %d\n", sum)  ;
    printf("Average Score : %.2f\n", average) ;
    printf("Number of Scores Above Average : %d\n", above_average_count) ;
    return 0 ;
}