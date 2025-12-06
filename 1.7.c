#include <stdio.h>


int main(){
    int customerType;
    float consumption_kwh;
    float totalBill = 0.0;


    printf("เลือกหัวข้อของคุณ (1.ครัวเรือน or 2.ธุรกิจ):");
    if(scanf("%d %f", &customerType, &consumption_kwh) != 2){
        return 1;
    }
    if(customerType == 1){
        if(consumption_kwh >=0 && consumption_kwh <=100){
            totalBill = consumption_kwh * 3.0;
        }else{
            totalBill = consumption_kwh * 4.0;
        }
    } else if (customerType == 2){
        if(consumption_kwh >=0 && consumption_kwh <=500){
            totalBill = consumption_kwh * 5.0;
        }else{
            totalBill = consumption_kwh * 6.5;
        }
    } else {
        printf("ไม่มีรายการนี้\n");
        totalBill = -1.0;
    }
    if (totalBill >= 0.0){
        printf("ค่าใช้จ่ายรวม : %.2f บาท\n", totalBill);
    }
    if(totalBill >= 0.0 ){
        printf("Total Bill: %.2f Bath\n", totalBill);
    }
    return 0;
}