#include<stdio.h>
int main(){
    ///bitwise operators
    ///&,|,^,<<,>>
    int a = 2;
    int b=4;
    int c= a&b;
    int or= a|b;
    int xor=a^b;
    int left=a<<b;
    int right=b>>a;
    printf("Bitwise AND between a and b is: %d\n", c);//
    printf("Bitwise OR between a and b is: %d\n", or);//6
    printf("Bitwise XOR between a and b is: %d\n", xor);//6
    printf("Bitwise shift left is: %d\n",left);
    printf("Bitwise shift right is: %d\n",right);//1
    return 0;
}
