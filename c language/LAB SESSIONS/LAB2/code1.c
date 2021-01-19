  //Write a program to check if two numbers are equal without using arithmetic operators or comparison operators.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Roll - 20E035\n");
printf("write the two numbers: ");
scanf("%d %d", &a, &b);
/* checking if two numbers are equal */
if (!(a ^ b))
// if ((a & ~b) == 0 && (~a & b) == 0)
{printf("Both number are equal.\n");}
else
{printf("Numbers are different.\n");}

return 0;
}