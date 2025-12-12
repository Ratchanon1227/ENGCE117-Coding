#include <stdio.h>

int main() {
    int N_MONTH, month, successCount = 0 ;
    float daliDeposit, monthlyTotal ;

    if(scanf("%d", &N_MONTH) != 1) {
        return 1;
    }

    for(month = 1; month <= N_MONTH; month++) {
        monthlyTotal = 0.0 ;

        if(scanf("%f", &daliDeposit) != 1) {
            break;
        }

        while (daliDeposit != 0.00) {
            monthlyTotal = monthlyTotal + daliDeposit ;

            if(scanf("%f", &daliDeposit) != 1) {
                break;
            }
        }
    
        if(monthlyTotal >= 500.00) {
            successCount++ ;
        }
        printf("Month %d Total : %.2f\n", month, monthlyTotal) ;
    }

    printf("Success Count : %d\n", successCount) ;
    return 0;
}