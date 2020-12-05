#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter The Number: \n");
    scanf("%d", &n);
    int month = n/30;
    int day = n%30;
    printf("Months = %d  Days = %d ", month, day);
    return 0;
}
