#include <stdio.h>

struct Transaction {
    char description[50] ;
    float amount ;
} ;

int main() {
    int n ;
    float totalIncome = 0.0 ;
    float totalExpense = 0.0 ;
    float netBalance = 0.0 ;
    struct Transaction t ;

    if(scanf("%d", &n) != 1) 
        return 0 ;

    for(int i = 0; i < n; i++) {
        scanf("%f %s", &t.amount, t.description) ;

        if(t.amount >= 0.0) {
            totalIncome = totalIncome + t.amount ;
        }
            else {
                totalExpense = totalExpense + (-t.amount) ;
            }
    }
    netBalance = totalIncome - totalExpense ;
    printf("Total Income : %.2f\n", totalIncome) ;
    printf("Total Expense : %.2f\n", totalExpense) ;
    printf("Net Balance : %.2f\n", netBalance) ;

    return 0 ;
}