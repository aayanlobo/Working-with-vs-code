#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{

printf("Roll no. : 20E035\n");
float x;

printf("Enter value of x: ");
scanf("%f", &x);

if (x == 0)
printf("Value of x must be nonzero: try again\n");
else
printf("Value of sin(1/x) is %.4f \n", sin(1 / x));
getch();
return 0;
}