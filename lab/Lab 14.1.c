#include <stdio.h>

int max_v = 0 ;
int current_x[100] ;
int best_x[100] ;

int KnapsackBT(int *w, int *v, int n, int wx, int i, int *x) {
    if (i == n) {
        int temp_v = 0 ;
        int temp_w = 0 ;
        for (int k = 0 ; k < n; k++) {
            if (current_x[k] == 1) {
                temp_v += v[k] ;
                temp_w += w[k] ;
            }
        }
        if (temp_w <= wx && temp_v > max_v) {
            max_v = temp_v ;
            for (int k = 0; k < n; k++) x[k] = current_x[k] ;
        }
        return max_v ;
    }
    current_x[i] = 0 ;
    KnapsackBT(w, v, n, wx, i + 1, x) ;
    current_x[i] = 1 ;
    KnapsackBT(w, v, n, wx, i + 1, x) ;

    return max_v ;
}

int main() {
    int n = 5, wx = 11 ;
    int w[5] = { 1, 2, 5, 6, 7 } ;
    int v[5] = { 1, 6, 18, 22, 28 } ;
    int x[5] = { 0, 0, 0, 0, 0 } ;
    int vx ;

    vx = KnapsackBT(w, v, n, wx, 0, x) ;

    printf("Value = %d\n", vx) ;
    for (int i = 0; i < n; i++) printf("%d ", x[i]) ;

    return 0 ;
}