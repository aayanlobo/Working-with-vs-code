#include <stdio.h>
#include <conio.h>
int main()
{
printf("Roll no. : 20E035\n");
int rsn;
/* input */
printf("Enter the railway seat number: ");
scanf("%d", &rsn);
/* output*/
if (rsn > 72 || rsn < 1)
printf("Enter valid railway seat number.\n");
else
{
rsn = rsn % 8;
if (rsn == 0)
printf("your berth is side upper berth");
if (rsn == 7)
printf("your berth is side lower berth");
if (rsn == 1 || rsn == 4)
printf("your berth is lower berth");
if (rsn == 3 || rsn == 6)
printf("your berth is upper berth");
if (rsn == 2 || rsn == 5)
printf("your berth is middle berth");
}
getch();
return 0;
}