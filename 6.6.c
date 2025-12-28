#include <stdio.h>

int calculate_net_balance(int *trans_array, int size, int *status_ptr) ;

int main() {
    int transaction[5] ;
    int net_balance ;
    int finance_status ;
    int i ;

    printf("Enter 5 transactions (Income +, Expense -) : \n") ;
    for(i = 0; i < 5; i++) {
        printf("Transaction %d : ", i + 1) ;
        scanf("%d", &transaction[i]) ;
    }
    net_balance = calculate_net_balance(transaction, 5, &finance_status) ;

    printf("\n--- PERSONAL FINANCE REPORT ---\n") ;
    printf("Transaction Recorded : ") ;
    
    for(i = 0; i < 5; i++) {
        printf("%d ", transaction[i]) ;
    }
    printf("\n") ;
    printf("Net Balance : %d\n", net_balance) ;
    printf("Status : ") ;

    if(finance_status == 1) {
        printf("PROFIT\n") ;
    }
        else {
            printf("LOSS\n") ;
        }
    return 0 ;
}

int calculate_net_balance(int *trans_arry, int size, int *status_ptr) {
    int sum = 0 ;
    int i ;

    for(i = 0; i < size; i++) {
        sum += *(trans_arry + i) ;
    }
    if(sum >= 0) {
        *status_ptr = 1 ;
    }
        else {
            *status_ptr = 0 ;
        }
    return sum ;
}