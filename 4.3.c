#include <stdio.h>

int main() {
    int daily_temp[7] ;
    int max_temp ;
    int i ;

    for(i = 0; i < 7; i++) {
        printf("Enter temp : ") ;
        scanf("%d", &daily_temp[i]) ;
    }
    max_temp = daily_temp[0] ;

    for(i = 0; i < 7; i++) {
        if(daily_temp[i] > max_temp) {
            max_temp = daily_temp[i] ;
        }
    }
    printf("\n--- DAILY TEMPERATURE REPORT ---\n") ;
    printf("Recorded Temperatures (C) : ") ;

    for(i = 0; i < 7; i++) {
        printf(" %d", daily_temp[i]) ;
    }
    printf("\nMaximun Temperature Found : %d C\n", max_temp) ;

    if(max_temp >= 35) {
        printf("Weather is HOT!\n") ;
    }
        else {
            printf("Weather is MODERATE.\n") ;
        }
    return 0 ;
}