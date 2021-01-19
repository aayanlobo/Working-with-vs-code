//Write a C program that reads an integer n from the keyboard and prints out the factorial of n.
//Test data and expected output: Enter an integer:6 Factorial of 6 is 720 Enter an integer:-3
//number must be non-negative
#include<stdio.h>
#include<conio.h>

   
unsigned int factorial(int a) 
{    
    if (a== 0)
    return 1;
    return a * factorial(a - 1);
} 
  
int main() 
{ 
     int a;
    printf("Roll no . 20E035\n\n");
    printf("Enter an integer : \n ");
    scanf("%d",&a);
    if (a > 0)
    printf("Factorial of %d is %d", a, factorial(a)); 
    else if (a == 0)
    //return 1;
    printf("Factorial of 0 is 1");
    else 
    printf("Number must be non-negative");
    
    return 0; 
}