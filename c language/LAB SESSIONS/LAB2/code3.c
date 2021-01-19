//Program to divide an integer by 4 without using ‘/’ operator.
#include <stdio.h>
#include <conio.h>
int division(int, int);
int main()
{

int num1, num2;
printf("Roll - 20E035\n\n");
/* input */
printf("\nEnter an integer to divide by 4 : ");
scanf("%d", &num1);
printf("\nResult is %d", division(num1, 4));

return 0;
}
int division(int num1, int num2)
{
int temp = 1, quotient = 0;
while (num2 <= num1)
{
num2 <<= 1;
temp <<= 1;
}
while (temp > 1)
{
num2 >>= 1;
temp >>= 1;
if(num1 >= num2)
{
num1 -= num2;
quotient += temp;

}
}
return quotient;
}