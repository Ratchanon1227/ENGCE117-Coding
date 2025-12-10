#include <stdio.h>

int main() {
    int ClearncelLevel, Age, IsActive ;

    if(scanf("%d %d %d", &ClearncelLevel, &Age, &IsActive) !=3) {
        return 1;
    }

    if(ClearncelLevel == 3 && IsActive == 1) {
        printf("Access GRANTID\n") ;
    }
    else if (ClearncelLevel == 2 && Age >= 25 && IsActive == 1) {
        printf("Access GRANTED\n") ;
    }
        else {
            printf("Access DENIED\n") ;
        }
        return 0;
}