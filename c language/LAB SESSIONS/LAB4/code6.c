#include <stdio.h>
 int main() 
 {
   printf("ROll - 20E035\n\n");
int n,cp=0,cn=0,c0=0;
char o;
do {
printf("Enter a Number \n");
scanf("%d",&n); if(n>0) {
cp++;
}
else if(n==0) {
c0++;
}
else {
cn++;
}
printf("Another Number(Y/N)?\n");
 scanf("\n%c",&o);
} while(o=='Y');
printf("Number of positive numbers %d\n",cp);
 printf("Number of negative numbers %d\n",cn);
 printf("Number of zeros %d\n",c0);
 return 0;
}