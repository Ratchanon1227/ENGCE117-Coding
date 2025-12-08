#include <stdio.h>

int main() {
    int zoneCode ;
    float weigth_kg ;
    float totalCost = 0.0 ;

    printf("Enter Your Code (1.Local, 2.Regional, 3.International) : ") ;
    if (scanf("%d", &zoneCode) !=1) {
        printf("Invalid input for Zone Code.\n");
        return 1;
    }

    if(zoneCode >= 1 && zoneCode <= 2){
        printf("Enter Your weight(Kg) : ") ;
        if(scanf("%f", &weigth_kg) !=1 ){
            printf("Invalid input for weight.\n") ;
            return 1;
        }
    }
    else if (zoneCode == 3) {
        weigth_kg = 0.0 ;
    }

    switch (zoneCode) {
    case 1 :
        if(weigth_kg <= 5.0) {
            totalCost = 50.0 ;
        }
            else {
                totalCost = 80.0 ;
            }
            break;
            
    case 2 :
        if(weigth_kg <= 10.0) {
            totalCost = 150.0 ;
        }
            else{
                totalCost = 250.0;
            }
            break;

    case 3 :
    totalCost = 500.0 ;
    break;
    
    default:
        break;
    }

    if(totalCost > 0.0) {
        printf("Total Cost : %.2f Baht\n", totalCost) ;
    }
        else if (zoneCode >= 3 || zoneCode <= 1) {
            printf("Invalid Zone Code\n") ;
        }
    
        return 0;
        

}