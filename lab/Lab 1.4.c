#include <stdio.h>

int GetSet(int **data);

int main (){

    int data_value = 13;
    int *data = &data_value,num ;
    num = GetSet(&data);

    printf("%d",num);
    return 0;
}

int GetSet(int **data){
    printf("Youe Answer : ");
    return (**data * 7);
}