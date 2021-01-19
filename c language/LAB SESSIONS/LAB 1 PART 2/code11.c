
#include <stdio.h>
#include <math.h>
int main ()
{
int l,b;
printf("Enter length and breadth of rectangle:");
scanf("%d%d",&l,&b);

int r;
printf("\nEnter radius of circle :");
scanf("%d",&r);

int a,p;
float k,A,C;

a = l*b;
p = l+b;
k = 22.00/7.00;
A = k*pow(r,2);
C = 2*k*r;

printf("\n Area of rectangle : %d",a);
printf("\n Perimeter of rectangle : %d",p);
printf("\n Area of circle : %f",A);
printf("\n Circumference of circle : %f",C);
printf("\n Roll - 20E035");

return 0;
}

