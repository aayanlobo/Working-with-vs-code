

#include <stdio.h>
#include <math.h>
int main()
{
 float a,b,c,m,n;
 float r,x,y,s,z,v;
 int p,q;
 
  printf("Enter a,b,c:\n");
 scanf("%f%f%f",&a,&b,&c);
 q = 4*a*c;
 p = pow(b,2) - q;
r = pow(p,0.5);
s = pow(-p,0.5);

x = -b/2*a;

y =  s/2*a;
z = r/2*a;
m = x + z;
n = x - z;
v = -c/b;

if (p > 0 && a != 0 && b != 0)
  printf ("The roots are real : %.2f  and %.2f ",m,n);
  else if (p == 0 && a !=0 && b != 0 )
  printf ("the roots are equal : %.2f  and %.2f  ",m,n);
  else if (p < 0 && a !=0 && b != 0)
  printf("the roots are complex : %.2f + i%.2f and %.2f - i%.2f",x,y,x,y);
  else if (a == 0.00 && b == 0.00)
  printf ("No solution : a and b both zero");
  else if (a == 0.00 && b != 0.00)
  printf ("linear equation : root = %.2f",v);

}
