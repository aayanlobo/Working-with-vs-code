
#include <stdio.h> 
int main() {
int n,i;
printf("Roll - 20E035\n\n");
printf("Enter the number \n");
 scanf("%d",&n); 
 int t1=-1,t2=1,sum=0;
  for(i=0;i<n;i++) {
sum = t1+t2;
printf("%d ",sum);
 t1=t2; 
 t2=sum;

}
return 0;
 }