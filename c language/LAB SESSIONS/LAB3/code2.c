#include <stdio.h>
#include <conio.h>
int main()
{

printf("Roll no. : 20E035\n");
int num;
/* input */
printf("Enter a Three digit number: \n");
scanf("%d", &num);
/* output*/
if (num > 100 && num < 999)
{
    switch(num / 100)
{
case 1: printf("one hundred");
break;

case 2: printf("two hundred");
break;
case 3: printf("three hundred");
break;
case 4: printf("four hundred");
break;
case 5: printf("five hundred");
break;
case 6: printf("six hundred");
break;

case 7: printf("seven hundred");

break;
case 8: printf("eight hundred");
break;
case 9: printf("nine hundred");
break;

}
switch(num % 100)
{
case 10: printf(" num % 100 - num % 10ten");

break;
case 11: printf(" eleven");
break;
case 12: printf(" twelve");
break;
case 13: printf(" thirteen");
break;
case 14: printf(" fourteen");
break;
case 15: printf(" fivteen");
break;
case 16: printf(" sixteen");
break;
case 17: printf(" seventeen");
break;
case 18: printf(" eighteen");
break;
case 19: printf(" nineteen");
break;

}
switch(num % 100 - num % 10)
{
case 20: printf(" twenty");
break;
case 30: printf(" thirty");
break;

case 40: printf(" fourty");
break;
case 50: printf(" fivty");
break;
case 60: printf(" sixty");
break;
case 70: printf(" seventy");
break;
case 80: printf(" eighty");
break;
case 90: printf(" ninety");
break;

}
if (num % 100 - num % 10 != 10)
{
switch(num % 10)
{
case 1: printf(" one");
break;
case 2: printf(" two");
break;
case 3: printf(" three");
break;
case 4: printf(" four");
break;
case 5: printf(" five");
break;
case 6: printf(" six");
break;
case 7: printf(" seven");
break;
case 8: printf(" eight");
break;
case 9: printf(" nine");
break;
}
}
}
else 
printf("The no. entered is not a three digit no.");
return 0;
}