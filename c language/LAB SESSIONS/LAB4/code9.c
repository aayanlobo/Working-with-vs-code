#include <stdio.h>
#include <math.h>
int fact(int n) 
{
int i,fac=1;
for(i=1;i<=n;i++)
{
fac=i*fac;
 }
  return fac; 
  }
int main()
 {
int n,i;
 float x,calc=0;
printf("Roll - 20E035\n");
do {
printf("Enter the value of n & x\n");
scanf("%d%f",&n,&x);
if(n>0) {
for(i=0;i<n;i++) 
{
calc=calc+((pow(-1,i)*pow(x,2*i+1))/(fact(2*i+1)));
}
printf("Sin(%f)= %f\n",x,calc); break;
}
else{ printf("Invalid Input,Enter Again");
}
}
while(1); 
return 0;
}