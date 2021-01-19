#include <stdio.h>
#include <conio.h>
int main()
 {
printf("Roll no. : 20E035\n\n");
int days;

printf("Enter the number of days the member is late to return the book: ");
 scanf("%d", &days);

 if(days <= 5)
  printf("\nFine is 50 paise.");
else if(days <= 10) 
printf("\nFine is 1 rupees.");
else if(days <= 30)
 printf("\nFine is 5 rupeees.");
else
printf("\nMembership is  cancelled.");
getch();
 return 0;
}