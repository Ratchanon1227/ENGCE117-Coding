#include <stdio.h>

struct student {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
} ;


void upgrade(struct student *child) {
    if (child->sex == 'M') {
        child->gpa = child->gpa * 1.10 ;
    } 
        else if (child->sex == 'F') {
            child->gpa = child->gpa * 1.20 ;
    }
}

int main() {
    struct student aboy, agirl ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    agirl.sex = 'F' ;
    agirl.gpa = 3.00 ;
    upgrade(&aboy) ;
    upgrade(&agirl) ;
    printf("Aboy GPA (+10%%) : %.2f\n", aboy.gpa) ;
    printf("Agirl GPA (+20%%) : %.2f\n", agirl.gpa) ;
    return 0;
}