#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h>
int main()

 {
printf("Roll no. : 20E035\n");

int choice, num;
printf("\nEnter the number: ");
scanf("%d", &num);

printf("\n(1) Positive or Negative\n(2) Even or Odd\n\nEnter your choice(1, 2): ");
scanf("%d", &choice);
switch(choice) {
case 2: if(num % 2 == 0)
printf("\nEven");
else 
printf("\nOdd");
break;
case 1: if(num < 0)
printf("Negative");
 else if (num > 0)
 printf("Positive");
 else 
 printf("It`s zero");

break;
default: printf("\nwrong choice!\n");
return 0;
} 

}