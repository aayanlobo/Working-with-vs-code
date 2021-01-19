#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main() 
{
 int C;
printf("Roll no. : 20E035\n");

printf("1.Enter Marks in 4 subjects\n2.Calculate the average\n3.Find the highest marks \n");
printf("\nEnter your choice:\n");
scanf("%d", &C);
switch(C) {
case 1:
printf("Enter the marks in 4 subjects");
break;
case 2:
printf("\n Calculate the average");
break;
case 3:

printf("Find the highest marks");
break;

default:
printf("\nwrong choice!\n");
return 0;
}

}