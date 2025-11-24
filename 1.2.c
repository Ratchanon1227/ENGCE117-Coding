#include <stdio.h>

int main(){
    int score;

    printf( "Enter score : ");
    if (scanf("%d" , &score) != 1 ){
        return 1;
    }
    
    
    else if(score >= 80){
            printf("Grade = A ");
        }
        else if(score >= 70){
            printf("Grade = B ");
        }
        else if(score >= 65){
            printf("Grade = C ");
        }
        else if(score <= 49){
            printf("Grade = F ");
        }
            return 0; 
}