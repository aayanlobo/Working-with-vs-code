/*Write a C program that reads two values from the keyboard, swaps their values
and prints out the result.
Test data and expected output:
Enter two values to be swapped:2 5
Values entered are a=2 and b=5
Values after swap are a=5 and b=2*/

#include <stdio.h>

int main ()
{
    int a,b;
    printf("Enter two values to be swapped\n");
    scanf("%d%d",&a,&b);
    printf("\nvalues entered are a=%d and b=%d",a,b);
    printf("\nvalues after swap are a=%d and b=%d",b,a);
    
    return 0;

}