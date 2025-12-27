#include <stdio.h>

struct Student {
    int id ;
    int score ;
} ;

int find_max_score_id(struct Student students[], int size) ;

int main() {
    struct Student class_data[3] ;
    int top_student_id ;
    int i ;

    printf("Enter data for 3 students : \n") ;
    for(i = 0; i < 3; i++) {
        printf("--- Student %d ---\n", i + 1) ;

        printf("Enter ID : ") ;
        scanf("%d", &class_data[i].id) ;

        printf("Enter Score : ") ;
        scanf("%d", &class_data[i].score) ;
    }

    printf("\n--- STUDENT SCORE REPORT ---\n") ;
    printf("ID  | Score\n") ;
    printf("----|-------\n") ;

    for(i = 0; i < 3; i++) {
        printf("%-6d | %d\n", class_data[i].id, class_data[i].score) ;
    }
    top_student_id = find_max_score_id(class_data, 3) ;
    printf("\nTOP PERFORMER ID : %d\n", top_student_id) ;
    return 0 ;
}

int find_max_score_id(struct Student students[], int size) {
    int max_score = students[0].score ;\
    int max_id = students[0].id ;
    int i ;

    for(i = 1; i < size; i++) {
        if(students[i].score > max_score) {
            max_score = students[i].score ;
            max_id = students[i].id ;
        }
    }
    return max_id ;
}