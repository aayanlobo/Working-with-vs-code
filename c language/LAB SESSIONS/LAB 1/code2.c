#include <stdio.h>

int main ()
{
   float i,c;
   printf("enter the distance in inches\n");
   scanf("%f",&i);
   c = 2.54*i;
   printf("\nDistance %.2f inches is = %.2f cms",i,c);
   return 0;
}