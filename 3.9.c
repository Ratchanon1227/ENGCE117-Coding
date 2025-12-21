#include <stdio.h>

int main() {
    int N_DAYS, day ;
    float initialBudget ;
    float remainingBugget ;
    float dailySpend ;

    if(scanf("%f %d", &initialBudget, &N_DAYS) != 2) {
        return 1 ;
    }
    remainingBugget = initialBudget ;

    printf("Day | Spend | Remaining\n") ;
    printf("------------------------------\n") ;

    for(day = 1; day <= N_DAYS; day++) {
        dailySpend = 0.0 ;

        if (remainingBugget >= 500.00) {
            dailySpend = 100.00 ;
        }
            else if(remainingBugget >= 100.00) {
                dailySpend = 50.00 ;
            }
            else if (remainingBugget > 0.0) {
                dailySpend = 20.00 ;
            }
            else {
                dailySpend = 0.0 ;
            }

            if(dailySpend > remainingBugget) {
                dailySpend = remainingBugget ;
            }
            remainingBugget = remainingBugget - dailySpend ;
            printf("%d | %.2f | %.2f\n", day, dailySpend, remainingBugget) ;
    }
    printf("-------------------------------\n") ;
    printf("Final Budget : %.2f", remainingBugget) ;
    return 0 ;
}