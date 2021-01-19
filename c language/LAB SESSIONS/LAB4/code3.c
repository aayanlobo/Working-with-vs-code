//Write a C program that calculates the sum of integers between 9 and 300 inclusive which are divisible by 7 but not divisible by 63. Expected output:

//Sum of integers between 9 & 300 that are divisible by 7 but not by 63 is 5684
#include<stdio.h>
#include<conio.h>
int main ()
{
   
    int sum = 0;
printf("Roll no. - 20E035\n\n");
for(int i = 9 ; i <=300 ; i++)

{

if( i % 7 == 0 && i % 63 != 0)

{
    sum = sum + i;
}

}

printf( "\nsum of integers between 9 and 300 that are divisible by 7 but not by 63 is %d ", sum) ;
return 0;
}