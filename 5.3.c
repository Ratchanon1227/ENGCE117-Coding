#include <stdio.h>

int calculate_sum(int array[], int size) ;

int main() {
    int numbers[5] ;
    int total_sum ;
    float average ;
    int i ;

    printf("Enter 5 integer number : \n") ;
    for (i = 0; i < 5; i++) {
        printf("Number %d : ", i + 1) ;
        scanf("%d", &numbers[i]) ;
    }
    total_sum = calculate_sum(numbers, 5) ;
    average = (float)total_sum / 5 ;

    printf("\n--- ARRAY AVEREGE REPORT ---\n") ;
    printf("Recorded Number : ") ;
    for(i = 0; i < 5; i++) {
        printf("%d ", numbers[i]) ;
    }

    printf("\n");
    printf("Total Sum : %d\n", total_sum) ;
    printf("Averge : %.2f\n", average) ;
    return 0 ;
}

int calculate_sum(int array[], int size) {
    int sum = 0 ;
    int i ;

    for(i = 0; i < size; i++) {
        sum = sum + array[i] ;
    }
    return sum ;
}