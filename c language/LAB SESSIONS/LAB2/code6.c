#include <stdio.h>
#include <conio.h>
int main()
{

printf("Roll no. : 20E035\n");
int x, sum;


printf("Enter a +ve no less than 1000: ");
scanf("%d", &x);

sum = (x % 10) + (x / 10) - 9 * (x / 100);

if (x <= 0 || x >= 1000)
printf("Entered number is out of range.\n");
else
printf("Sum of the digits of %d is %d", x, sum);
getch();
return 0;
}