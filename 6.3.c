#include <stdio.h>

int main() {
    int data[3] ;
    int *ptr ;
    int i ;

    printf("Enter 3 integer element for the array : \n") ;

    for (i = 0; i < 3; i++) {
    printf("Element %d : ", i) ;
    scanf("%d", &data[i]) ;
    }

    ptr = data ;

    printf("\n--- ARRAY AND POINTER REPORT ---\n") ;
    printf("Index | Value (Direct) | Value (via Pointer) | Address\n") ;
    printf("-------------------------------------------------------------\n") ;

    for(i = 0; i < 3; i++) {
        printf("%5d | %14d | %19d | %p\n", i, data[i], *(ptr + i), (ptr + i)) ;
    }
    
    return 0 ;
}

