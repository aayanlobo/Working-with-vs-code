#include <stdio.h>
#include <conio.h>
int main()
{

printf("Roll no.: 20E035\n");
float a, b, c, d, max, min;

printf("Enter four numbers: \n");
scanf("%f %f %f %f", &a, &b, &c, &d);

max = a;
min = a;
if(b > max) max = b;
if(c > max) max = c;
if(d > max) max = d;
if(b < min) min = b;
if(c < min) min = c;
if(d < min) min = d;
/* print difference */
printf("Difference is %.4f\n", max - min);
getch();
return 0;
}