#include <stdio.h>
#include <stdlib.h> 

int *Getmatrix(int *row, int *col);

int main() {
    int *data = NULL;
    int m, n;

    data = Getmatrix(&m, &n);

    if (data == NULL) {
        printf("Input or memory allocation error. Exiting.\n");
        return 1;
    }

    printf("\nYour Matrix Member (%d rows, %d columns):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", data[i * n + j]);
        }
        printf("\n");
    }

    free(data); 
    data = NULL;

    return 0;
}

int *Getmatrix(int *row, int *col) {
    int *matrix_ptr = NULL;

    printf("Your Number of rows : ");
    if (scanf("%d", row) != 1) {
        return NULL; 
    }
    printf("Your Number of col : ");
    if (scanf("%d", col) != 1) {
        return NULL; 
    }

    int total_element = (*row) * (*col);
    matrix_ptr = (int *)malloc(sizeof(int) * total_element);
    

    if (matrix_ptr == NULL) {
        perror("Failed to allocate memory");
        return NULL; 
    }

    printf("Enter matrix:\n");
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            printf("Your Menber Number : ", i, j);
            if (scanf("%d", &matrix_ptr[i * *col + j]) != 1) {
                fprintf(stderr, "Invalid input for element [%d][%d].\n", i, j);
                free(matrix_ptr); 
                return NULL;
            }
        }
    }

    return matrix_ptr;
}