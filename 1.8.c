#include <stdio.h>
int main(){
    int daycode;
    int hour;

    
    printf("Your Day code : ");
    scanf("%d",&daycode);
    printf("Your Hour : ");
    scanf("%d", &hour);
    switch (daycode)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        if(hour >= 8 && hour <= 17){
            printf("System Running (Workday)\n");
        }
        else if(hour >= 0 && hour <= 23){
            printf("System Idle (Off-Hour)\n");
        }
        else{
            printf("Invalid Hour Input\n");
        }
        break;
    case 6:
    case 7:
        printf("Weekend Relax Mode\n");
        break;
    default:
    printf("Error Code");
    break;
    }
    return 0;
}