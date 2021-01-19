
#include<stdio.h>  
 int main()    
{    
int num,first_digit;
int second_digit,third_digit;
printf("Enter three digit no.:\n");
scanf("%d",&num);
first_digit = num/100;
second_digit = (num % 100) / 10;
third_digit = num % 10;
if (num <= 999 && num >=100)


printf ("\nSum of individual digits of the number = %d",(first_digit + second_digit  + third_digit ));

else
printf("Invalid number");
printf("\n Roll - 20E035");
return 0;
}  