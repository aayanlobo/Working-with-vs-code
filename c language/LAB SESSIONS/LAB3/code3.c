//Write a C program to find largest number among four numbers using conditional operator.
#include <stdio.h>
#include <conio.h>
int main() {
 
printf("Roll no. : 20E035\n");
 int a, b, c, d, x;

/* input */ printf("Enter Four numbers: ");
 scanf("%d %d %d %d", &a, &b, &c, &d);

/* calculation*/
  x = (a > b) ? a : b;  x = (x > c) ? x : c;  x = (x > d) ? x : d; // or use this x = a>b ? (a>c ? a>d ? a:d : c>d ? c:d) : (b>c ? b>d ? b:d : c>d ? c:d);

/* output*/
 printf("The largest of four numbers is %d \n", x);

 return 0;
}