#include<stdio.h>
int main(){
    ///Worked-Out Problem 3.7
    ///Type Conversion in expressions
    int n;
    float sum;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sum += 1/(float)i;
        printf("%2d %6.4f\n", i, sum);
    }


}


