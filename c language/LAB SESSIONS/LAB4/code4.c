#include <stdio.h> 
void main() 
{
int i,ci,reverse_i=0,rem;
printf("Roll - 20E035\n\n");
printf("Pallindrome numbers in between 1 to 100 are \n");
for(i=1;i<=100;i++) {
ci=i;
while(ci!=0) {
rem=ci%10; reverse_i=(reverse_i*10)+rem;
ci=ci/10;
}
if(reverse_i==i) {
printf("%d ",i);
} 
reverse_i=0;
}
}