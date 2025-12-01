#include <stdio.h>

int main(){
    int number;

    do{
        printf("Enter a Number (1-10) : ");
        if (scanf("%d", &number) != 1) {
            break;
            }
        if (number < 1 || number > 10 ){
            printf("Error : Value Must be 1-10 \n");
        }
    }
    while (number < 1 || number > 10 );
    {
      printf("Input accepted : %d\n ", number);
      return 0;
    }
}