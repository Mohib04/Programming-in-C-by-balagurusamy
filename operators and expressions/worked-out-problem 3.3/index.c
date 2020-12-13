#include<stdio.h>
int main(){
    ///Worked out problem 3.3
    int a=15,b=10,c,d;
    c = ++a - b;
    printf("a= %d b= %d c=%d\n", a,b,c);//16 10 6
    d = b++ + a;
    printf("a =%d b= %d d= %d\n", a,b,d);//16 11 27
    printf("a/b = %d\n", a/b);//1
    printf("a Mod b =%d\n", a%b);//5
    printf("a *=b = %d\n", a *=b);//16*11
    printf("%d\n", c>d ? 1: 0);//0
    printf("%d\n", c<d ? 1: 0);//1
}
