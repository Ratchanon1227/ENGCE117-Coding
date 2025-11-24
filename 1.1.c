#include <stdio.h>

int main() {
    int N, i;

    printf("Your Number : ");
    if (scanf("%d", &N ) != 1 , N <= 0 ) {
        printf( "Error\n" ) ; 
        return 1; 
    }
    else {
        for(i = 0 ; i < N ; i++ ) {
            printf( "Hello Loop!\n") ;
        }
    }
    return 0;
}