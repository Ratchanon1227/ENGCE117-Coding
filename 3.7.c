#include <stdio.h>

struct SalesRecord {
    char name[50] ;
    float target ;
    float actual ;
} ;

int main() {
    int N, i ;
    float grandTotalCommission = 0.0 ;
    float baseCommission ;
    struct SalesRecord records[N] ;

    if (scanf("%d", &N) != 1) {
        return 1 ;
    }
    
    for (i = 0; i < N; i++) {
        
        if (scanf("%f %f %s", &records[i].target, &records[i].actual, records[i].name) != 3) {
            break ; 
        }
        baseCommission = records[i].actual * 0.10 ;
        if (records[i].actual >= records[i].target * 1.20) {
            baseCommission += 200.0 ;
        } 
            else if (records[i].actual >= records[i].target) {
            baseCommission += 50.0 ;
        } 
            else if (records[i].actual < records[i].target * 0.90) {
            baseCommission -= 100.0 ;
        }
        grandTotalCommission += baseCommission ;
    }
    printf("Grand Total Commission : %.2f\n", grandTotalCommission) ;
    return 0 ;
}