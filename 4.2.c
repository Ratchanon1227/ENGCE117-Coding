#include <stdio.h>

int main() {
    int N, i;
    int passSum = 0 ;
    int failCount = 0 ;
    int score[N] ;

    if(scanf("%d", &N) != 1) {
        return 1 ;
    }

    for(i = 0; i < N; i++) {
        if(scanf("%d", &score[i]) != 1) {
            return 1;
        }
        if(score[i] >= 50) {
            passSum += score[i] ;
        }
            else{
                failCount++ ;
            }
    }
    printf("Passing Score Sum : %d\n", passSum) ;
    printf("Failing Students Count : %d\n", failCount) ;
    return 0 ;
}