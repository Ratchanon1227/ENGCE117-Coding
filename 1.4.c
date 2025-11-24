#include <stdio.h>

int main(){
    int N, sum = 0, i;

    printf("Your Number : ");
    if (scanf("%d", &N) != 1){
            return 1;
    }

    for (i = 0; i <= N ; i++) {
        sum += i ;
    }
    printf ("Result = %d \n", sum );
    return 0;
}