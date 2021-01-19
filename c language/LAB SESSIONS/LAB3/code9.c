#include <stdio.h>
#include <conio.h>
int main()
 {
printf("Roll no. : 20E035\n\n");
long x, x_,temp;

printf("Enter the number: ");
scanf("%ld", &x);

temp = x;
x_ = 0; 
while (temp != 0) {
 x_ = (x_*10) + temp%10; temp /= 10;
 } 
 printf("Reverse of %ld is %ld \n", x , x_);

if (x == x_)
printf("\nNumber and its reverse are same.");
else 
printf("\nNumber and its reverse are diffrent.");
getch();
return 0;
}