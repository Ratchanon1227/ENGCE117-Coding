#include <stdio.h>

int* GetSet(int *n, int arr[]){
    int i ;

    for(i= 0; i <*n; i++){
        printf("Menber %d :", i +1 );
        scanf("%d", &arr[i]);
    } 
    return arr;
}

int main (){
    int num, i ;
    
    printf("Enter Your Member : ");
    scanf("%d",&num);

    int data[num];

    GetSet(&num, data);

    printf("Your Number Menber in Data : ");
    for (i = 0; i < num; i++){
        printf("%d ", data[i]);
    }
    return 1;
}

