#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{

printf("Roll no. : 20E035\n");
float x1, y1, x2, y2, x, y, d;

/* input coordinates */
printf("Enter coordinates of points A: ");
scanf("%f %f", &x1, &y1);
printf("\nEnter coordinates of points B: ");
scanf("%f %f", &x2, &y2);

/* calculations */

d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
x = (x1 + x2) / 2;
y = (y1 + y2) / 2;

/* print distance and mid point */
printf("Distance between A and B is %.2f\n", d);
printf("The coordinates of midpoint of A and B are (%.2f,%.2f)\n", x, y);

getch();
return 0;
}