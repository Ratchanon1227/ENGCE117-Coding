#include <stdio.h>


void sort_array_ascending(int array[], int size) {
    int temp ;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                temp = array[i] ;   
                array[i] = array[j] ;
                array[j] = temp ;     
            }
        }
    }
}

int main() {
    int numbers[5] ;      
    int original_copy[5] ; 
    int i ;

    printf("Enter 5 numbers : \n") ;
    for (i = 0; i < 5; i++) {
        printf("Number %d : ", i + 1) ;
        scanf("%d", &numbers[i]) ;
        original_copy[i] = numbers[i] ; 
    }
    
    sort_array_ascending(numbers, 5) ;
    printf("\n--- RESULT ---\n") ;
    printf("Original : ");
    for (i = 0; i < 5; i++) {
        printf("%d ", original_copy[i]) ;
    }

    printf("\n") ;
    printf("Sorted :   ") ;
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]) ;
    }
    printf("\n") ;
    return 0 ;
}