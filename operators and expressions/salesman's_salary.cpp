#include<stdio.h>
#define BASE_SALARY = 1500.00
#define BONUS_RATE  = 200.00
#define COMMISSION  = 0.02
int main(){

    float bonus,commission,gross_salary,quantity,price;
    printf("Enter The Quantity and Price: ");
    scanf("%f %f", &quantity, &price);
    bonus        = quantiy * BONUS_RATE;
    commission   = quantiy * COMMISSION * price;
    gross_salary = BASE_SALARY + bonus + commission;
    printf("Bonus = %d\n commission = %d\n Gross Salary = %d\n",bonus,commission,gross_salary);
    return 0;
}
