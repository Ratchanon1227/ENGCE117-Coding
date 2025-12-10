#include <stdio.h>

int main() {
    int CategoryCode ;
    float Price_before_vat;
    float TotalBill = 0.0 ;
    float VatAmoubt = 0.0 ;

    if (scanf("%f %d", &Price_before_vat, &CategoryCode) !=2 ) {
        return 1 ;
    }

    if(CategoryCode >= 1 && CategoryCode <= 3) {
        if(CategoryCode == 1) {
            TotalBill = Price_before_vat * 1.07 ;
        }
            else if (CategoryCode == 2 ) {
                TotalBill = Price_before_vat ;
            }
            else if (CategoryCode == 3) {
                TotalBill = Price_before_vat * 1.15 ;
            }
            VatAmoubt = TotalBill - Price_before_vat ;

    printf("Vat Amount : %.2f\n", VatAmoubt) ;
    printf("Total Price : %.2f\n", TotalBill) ;       
    }

    else{
        printf("Invalid Category\n") ;
    }
    return 0;
}