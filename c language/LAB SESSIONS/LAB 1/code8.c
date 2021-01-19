/*If a four digit number is input through the keyboard, write a program to
Obtain the sum of the first and last digit of the number.
Expected output:
Enter a four digit number : 23675
Invalid number
Enter a four digit number : 2367
Sum of first and last digit is 9*/

#include<stdio.h>  
 int main()    
{    
int num,first_digit,last_digit;

printf("Enter a four digit no.:\n");
scanf("%d",&num);
first_digit = num/1000;
last_digit = ((num % 1000)% 100)%10;
if (num <= 9999 && num >=1000)


printf ("\nSum of first and last digit is  %d",(first_digit + last_digit ));

else
printf("Invalid number");
printf("\n Roll - 20E035");
return 0;
}  