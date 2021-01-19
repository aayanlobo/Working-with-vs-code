#include<stdio.h>
#include<math.h>

int main ()

{
    float p,t,r,ci,si;
     p = 500000;
     t = 10;
     r = 3.5;

si = p*r*t/100;
printf("simple interest on rs 500000 in 10 years = %f",si);

ci= p*pow(1+(r/100),t) - p ;

printf("\n simple interest on rs 500000 in 10 years compounded anually = %f",ci);
return 0;
}