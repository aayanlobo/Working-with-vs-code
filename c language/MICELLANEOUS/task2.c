#include<stdio.h>
#include<math.h>

//function declaration
float ci(float,float,int,int);
float si(float,float,int );


int main()
{ float p=500000,r=3.5,interest;
float cin1,cin2,cin4,cin12,cin365;
int t=10,n;


//calculation of simple interest
interest= si(p,r,t); 
printf("Simple interest On Rs.%f in %dyears=Rs.%f\n",p,t, interest);


//calculation of compound interest annually
n=1;
cin1=ci(p,r,n,t);
printf("Interest on Rs.%f in %dyears compounded annually=Rs.%f\n",p,t,cin1);


//calculation of compound interest semi annually
n=2;
cin2=ci(p,r,n,t);
printf("Interest on Rs.%f in %dyears compounded semi-annually=Rs.%f\n",p,t,cin2);
 

//calculation of compound interest quarterly
n=4;
cin4=ci(p,r,n,t);
printf("Interest on Rs.%f in %dyears compounded quarterly=Rs.%f\n",p,t,cin4);


//calculation of compound interest monthly
n=12;
cin12=ci(p,r,n,t);
printf("Interest on Rs.%f in %dyears compounded monthly=Rs.%f\n",p,t,cin12);


//calculation of compound interest daily
n=365;
cin365=ci(p,r,n,t);
printf("Interest on Rs.%f in %dyears compounded daily=Rs.%f\n",p,t,cin365);

return 0;
}


//function returning simple interest
float si(float p, float r, int t)
{float X;
X= (p*r*t)/100 ;
return X;
}


//function returning compound interest
float ci(float p,float r,int n,int t)
{float Y,Z,A,B,C;
A=r/n;
B=1+A/100;
C=n*t;
Z=pow(B,C);
Y=p*(Z-1);
return Y;
//formula for compound interest is 
//ci=p(1+r/100n)^nt-p,for simplicity break it as above
// here n is number of times we have to calculate compound interest
// e.g. for half yearly ,2 half years in a year,i.e.n=2
//for quarterly ,4 quarter year,i.e.n=4
}