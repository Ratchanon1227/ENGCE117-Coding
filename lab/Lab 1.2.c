#include <stdio.h>

void GetSet( int arr[], int *n ) ;

int main() {

    int num ;

    printf( "Enter Your Member : " ) ;
    scanf( "%d", &num ) ;

    int data[num] ;

    GetSet( data, &num ) ;

    printf( "Data : " ) ;
    for (int i = 0; i < num; i++) {
        printf( "%d ", data[i] ) ;
    }
    return 0 ;
}

void GetSet (int arr[], int *n ) {
    
    for (int i = 0; i < *n ; i++) {
        printf( "Data %d: ", i+1 ) ;
        scanf( "%d", &arr[i] ) ;
    }
} 