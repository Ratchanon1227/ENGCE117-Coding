#include <stdio.h>

struct Product {
    char name[50] ;
    int productId ;
    float price ;
};

int main() {
    struct Product item ;

    printf("Enter Your Number : ") ;
    if(scanf("%d %f %s", &item.productId, &item.price, &item.name) != 3) {
        return 1 ;
    }
printf("ID : %d\nPrice : %.2f\nName : %s\n", item.productId, item.price, item.name) ;
return 0 ;
}
