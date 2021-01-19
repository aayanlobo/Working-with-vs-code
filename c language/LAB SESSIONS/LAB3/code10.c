#include <stdio.h>
 #include <conio.h>
int main() {
printf("Roll no. : 20E035\n\n");

 int num, count = 0;
while(num != -1)
 {
printf("Enter number (input -1 to stop) : ");
 scanf("%d", &num);
  if (num > 10 && num < 50)
   count++;
   
if (num == -1)
 printf("\nTotal Number input is %d", count);
 
}
getch();
 return 0;
}
