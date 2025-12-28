#include <stdio.h>

int main() {
    FILE *fptr ;
    int year = 2025 ;

    fptr = fopen("output_data.txt", "w");

    if (fptr == NULL) {
        printf("ERROR : Could not open file output_data.txt for writing.\n") ;
        return 1 ; 
    }

    printf("--- FILE WRITING PROCESS ---\n") ;
    printf("Writing data to output_data.txt...\n") ;

    fprintf(fptr, "Hello, C File Handling is easy.\n") ;
    fprintf(fptr, "%d", year) ;

    fclose(fptr);

    printf("File writing complete.\n") ;
    printf("\n--- FILE OPERATION REPORT ---\n") ;
    printf("Action : File created and data written successfully.\n") ;
    printf("Filename : output_data.txt\n") ;
    return 0 ;
}