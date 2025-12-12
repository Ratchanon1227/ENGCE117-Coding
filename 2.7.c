#include <stdio.h>


int main() {
    int N, i;
    int countfizzbuzz = 0 ;
    int countfizz = 0 ;
    int countbuzz = 0 ;
    int countother = 0 ;

    printf("Your Number : ") ;
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        if((i % 3 == 0) && (i % 5 == 0)) {
            countfizzbuzz++ ;
        }
            else if(i % 3 == 0) {
            countfizz++ ;
            }
            else if(i % 5 == 0) {
            countbuzz++ ;
            } 
            else {
            countother++;
            }
    }

    printf("Count Fizzbuzz (by 15) : %d\n", countfizzbuzz);
    printf("Count Fizz (by 3 only) : %d\n", countfizz);
    printf("Count Buzz (by 5 only) : %d\n", countbuzz);
    printf("Count Other : %d\n", countother);

    return 0;
}