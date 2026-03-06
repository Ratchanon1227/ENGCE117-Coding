#include <stdio.h>
#include <stdlib.h>

int *Dijkstra(int *L, int n) {
    int *d = (int *)malloc(n * sizeof(int)) ;
    int *visited = (int *)malloc(n * sizeof(int)) ;
    int INF = 999999 ;

    for (int i = 0; i < n; i++) {
        d[i] = INF ;
        visited[i] = 0 ;
    }
    
    d[0] = 0 ;

    for (int count = 0; count < n; count++) {
        int min = INF, u = -1 ;
        for (int v = 0; v < n; v++) {
            if (visited[v] == 0 && d[v] <= min) {
                min = d[v] ;
                u = v ;
            }
        }

        if (u == -1) break ;
        visited[u] = 1 ;

        for (int v = 0; v < n; v++) {
            int weight = L[u * n + v] ;
            if (visited[v] == 0 && weight != -1 && d[u] + weight < d[v]) {
                d[v] = d[u] + weight ;
            }
        }
    }

    int *result = (int *)malloc((n - 1) * sizeof(int)) ;
    for (int i = 1; i < n; i++) {
        result[i - 1] = d[i] ;
    }

    free(d) ;
    free(visited) ;
    return result ;
}

int main() {
    int n = 5, i = 0, j = 0, *d, *g ;
    g = (int *)malloc(n * n * sizeof(int)) ; 
    
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            g[i * n + j] = -1 ;

    g[0 * n + 1] = 100; g[0 * n + 2] = 80 ;
    g[0 * n + 3] = 30;  g[0 * n + 4] = 10 ;
    g[1 * n + 2] = 20;  g[3 * n + 1] = 20 ;
    g[3 * n + 2] = 20;  g[4 * n + 3] = 10 ;

    d = Dijkstra(g, n) ;
    for (i = 0; i < n - 1; i++)
        printf("%d ", d[i]) ;

    free(g) ;
    free(d );
    return 0 ;
}