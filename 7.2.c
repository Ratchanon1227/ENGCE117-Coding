#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    int num1, num2, num3, num4, num5 ;
    int total_sum ;

    fptr = fopen("input_data.csv", "r") ;

    if (fptr == NULL) {
        printf("ERROR : Could not open file input_data.csv for reading. Make sure the file exists.\n") ;
        exit(1) ;
    }

    printf("--- FILE READING PROCESS ---\n") ;
    printf("Reading data from input_data.csv...\n") ;

    fscanf(fptr, "%d,%d,%d,%d,%d", &num1, &num2, &num3, &num4, &num5) ;

    total_sum = num1 + num2 + num3 + num4 + num5 ;

    fclose(fptr) ;

    printf("File reading complete.\n") ;
    printf("\n--- DATA ANALYSIS REPORT ---\n") ; 
    printf("Data read : %d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5) ;
    printf("Total Sum : %d\n", total_sum) ;
    return 0 ;
}