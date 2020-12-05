#include <stdio.h>
#include <stdlib.h>

int main()
{
    //WORKED-OUT PROBLEM 3.1
    //The program in shows the use of integer arithmetic to convert a given number of days int months and days
    int n;
    printf("Enter The Number: \n");
    scanf("%d", &n);
    int month = n/30;
    int day = n%30;
    printf("Months = %d  Days = %d ", month, day);
    return 0;
}
