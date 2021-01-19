#include<stdio.h>
#include<math.h>

//function declaration
float ci(float,float,int,int);
float si(float,float,int);


int main()
{
float p=500000,r=3.5,interest;
float cia,cisa,ciq,cim,cid;
int t=10,n;

//calculation of simple interest
interest= si(p,r,t); 
printf("Simple interest On Rs.%f in %dyears=Rs.%f\n",p,t, interest);

//calculation of compound interest annually
n=1;
cia=ci(p,r,n,t);
printf("Interest on Rs.%f in %dyears compounded annually=Rs.%f\n",p,t,cia);


//calculation of compound interest semi annually
n=2;
cisa=ci(p,r,n,t);
printf("Interest on Rs.%f in %dyears compounded semi-annually=Rs.%f\n",p,t,cisa);
 
//calculation of compound interest quarterly
n=4;
ciq=ci(p,r,n,t);
printf("Interest on Rs.%f in %dyears compounded quarterly=Rs.%f\n",p,t,ciq);

//calculation of compound interest monthly
n=12;
cim=ci(p,r,n,t);
printf("Interest on Rs.%f in %dyears compounded monthly=Rs.%f\n",p,t,cim);

//calculation of compound interest daily
n=365;
cid=ci(p,r,n,t);
printf("Interest on Rs.%f in %dyears compounded daily=Rs.%f\n",p,t,cid);
return 0;
}


//function returning simple interest
float si(float p, float r, int t)
{
float X;
X= (p*r*t)/100 ;
return X;
}

//function returning compound interest
float ci(float p,float r,int n,int t)
{
float Y,B;    
B = 100*n;
Y = p*pow(1+(r/B),n*t) - p;
return Y;
}