#include <stdio.h>

int main() {
    int num1, num2, operationCode, result;

    printf("Your Number : ");
    if (scanf("%d %d %d", &num1, &num2, &operationCode) !=3){
        return 1 ;
    }

    switch (operationCode)
    {
    case 1:
        result = num1 + num2;
        printf("Result = %d", result);        /* code */
        break;
    
    case 2:
        result = num1 - num2;
        printf("Result = %d", result);
        break;

    case 3:
        result = num1 * num2;
        printf("Result = %d", result);
        break;
    
    case 4:
        result = num1 / num2;
        printf("Result = %d", result);
        break;
    
    default:
        printf("Invalid Operation");
        break;
    }
}