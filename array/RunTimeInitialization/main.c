#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Given below is the list of marks obtained by a class of 50 students in an annual examination.
    //Write a program to count the number of students belonging to each of following groups of marks.
    //0-9, 10-19, 20-29 ...... 10.
    //The program coded in fig 7.2 uses the array group containing 11 elements, one for each range of marks. Each element counts those values falling withing the range of values it represents.
    //For any value, We can determine the correct group element by dividing the value by 10. For example, consider the value 59. The integer division off 59 by 10 yields 5. This is the element. into which 59 is counted.
    printf("Group   Range   Frequency \n");
    int marks[25];
    for(int j=0; j<25; j++){
        scanf("%d", &marks[j]);
    }
    for(int i=0; i<=11; i++){
        if(marks[i]<=9){
            printf("1        0 to 9   %d \n", i, marks[i]);
        }

    }

    return 0;
}
