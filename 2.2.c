#include <stdio.h>

int main() {
    int N, i, quamtity ;
    float unitPrice, itemCost, grandTotal = 0.0 ;

    if(scanf("%d", &N) !=1) {
        return 1;
    }

    for (i = 0; i < N; i++){
        if(scanf("%f %d", &unitPrice, &quamtity) !=2) {
            return 1;
        }

        itemCost = unitPrice * quamtity ;

        if(unitPrice >= 1000.0) {
            itemCost = itemCost * 0.90;
        }

        grandTotal = grandTotal + itemCost ;
    }

    printf("Grand Total : %.2f Baht\n", grandTotal) ;
    return 0;
}