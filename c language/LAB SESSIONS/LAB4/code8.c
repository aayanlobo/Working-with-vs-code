


#include<stdio.h>
#include<math.h> 
int main()
{
printf("Roll - 20E035\n"); 
int n,s=1,sum=0,i;
do {
printf("Enter a Number\n"); 
scanf("%d",&n);

if(n>0&&n<=10) {
for(i=1;i<=n;i++) {
printf("%d^4+",s); sum=pow(s,4)+sum; s=s+i;
}
printf(" = %d",sum); break;
}
else {
printf("Enter a positive number less than 10 \n");
}
}
while(1);
return 0;
}