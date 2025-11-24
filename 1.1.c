// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int N, i;

    // รับค่า N (จำนวนรอบ)
    if (scanf("%d", &N ) != 1 || N <= 0 ) {
        printf( "Error\n" ) ; 
        return 1; // Handle input failure
    }
    else {
        for(i = 0 ; i < N ; i++ ) {
            printf( "Hello Loop!\n") ;
        }
    }
    
    // TODO: Implement the for loop to print the message N times

    return 0;
}