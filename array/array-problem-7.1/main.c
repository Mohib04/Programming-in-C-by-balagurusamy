#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Worked-out problem 7.1
    //Write a program using a single-subscripted variable to evaluate the following expressions.
    float number[13];
    float n,total=0;
    printf("Enter 10 Real Numbers: \n");
    for(int i=1; i<=10; i++){
        scanf("%f", &number[i]);
    }
    for(int j=1; j<=10; j++){
        printf("number[%d] = %.2f \n", j, number[j]);
        total += number[j];
    }
    printf("\nTotal = %f\n", total);

    return 0;
}
