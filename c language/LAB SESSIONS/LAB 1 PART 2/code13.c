/*Write a C program to read the values of x and y and print the results of the following
expressions in one line:
i. (x + y) / (x - y)
ii. (x + y)(x - y)
Test data and expected output:
Enter the value of x and y : 8 6
Result of expression (x+y)/(x-y) and (x+y)(x-y) is 7 and 28*/
#include <stdio.h>

int main ()
{
    float x,y;
    
    printf("Enter the values of x and y :");
    scanf("%f%f",&x,&y);
    float a = (x + y)/(x - y);
    float b = (x + y)*(x - y);
    printf("\nResult of expression (x+y)/(x-y) and (x+y)(x-y) is %.2f and %.2f",a,b);
    printf("\n Roll - 20E035");
    return 0;
}