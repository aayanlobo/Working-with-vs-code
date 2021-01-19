#include<stdio.h>
 #include<math.h> 
 int main()
  {
int n,s=1,sum=0,i;
printf("Roll - 20E035\n");
printf("Enter a Number\n"); scanf("%d",&n); if(n>0&&n<=50) {
for(i=1;i<=n;i++) 
{
printf("%d^4+",s);
sum=pow(s,4)+sum;
s=s+i;
if(s>n) 
{
break;
}
 }
  printf(" = %d",sum);
}
return 0 ;
 }