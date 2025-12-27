#include <stdio.h>

int main() {
    int data[10] ; 
    int N ;
    int search_value ;
    int count = 0 ; 
    int i ;

    printf("Enter the number of elements (N, max 10) : ") ;
    scanf("%d", &N) ;

    if (N > 10 || N < 1) {
        N = 10 ;
    }

    printf("Enter %d integer numbers :\n", N) ;
    for (i = 0; i < N; i++) {
        printf("Element %d : ", i + 1) ;
        scanf("%d", &data[i]) ;
    }

    printf("Enter the Search Value : ") ;
    scanf("%d", &search_value) ;

    for (i = 0; i < N; i++) {
        if (data[i] == search_value) {
            count++; 
        }
    }

    printf("\n--- FREQUENCY ANALYSIS REPORT ---\n") ;
    printf("Total elements recorded (N):  %d\n", N) ;
    printf("Recorded Numbers : ") ;

    for (i = 0; i < N; i++) {
        printf("%d ", data[i]) ;
    }

    printf("\n") ;
    printf("Search Value : %d\n", search_value) ;
    printf("Frequency Count : %d\n", count) ;

    return 0 ;
}