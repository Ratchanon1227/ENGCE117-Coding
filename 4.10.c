#include <stdio.h>

int main() {
    int data[3][3] ;
    int i, j ;

    printf("Enter %d integer number for the 3x3 array : \n", 3 * 3) ;
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element for Row %d, Col %d :", i, j) ;
            scanf("%d", &data[i][j]) ;
        }
    }

    printf("\n--- TWO_DIMENSIONNAL ARRAY REPORT ---\n") ;
    printf("Array Size : 3 Rows x 3 Columns\n") ;
    printf("Content (Tavle Format) : \n") ;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", data[i][j]) ;
        }
        printf("\n") ;
    }

    return 0 ;
}