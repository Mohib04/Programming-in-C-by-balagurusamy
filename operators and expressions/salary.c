#include<stdio.h>
#define BASE_SALARY  10000.00
#define BONUS_RATE   200.00
#define COMMISSION   0.02
int main(){

    float bonus,commission,gross_salary,quantity,price;
    printf("Enter The Quantity and Total Sales Amount: \n");
    scanf("%f %f", &quantity, &price);
    bonus        = quantity * BONUS_RATE;
    commission   = quantity * COMMISSION * price;
    gross_salary = BASE_SALARY + bonus + commission;
    printf(" Bonus = %f\n commission = %f\n Gross Salary = %f\n",bonus,commission,gross_salary);
    return 0;
}

