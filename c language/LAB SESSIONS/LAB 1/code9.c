/*Given the coordinates (x, y) of a centre of a circle and it’s radius, write a program
which will determine whether a point lies inside the circle, on the circle or outside the circle.
(Hint: Use sqrt( ) and pow( ) functions)
Test data and expected output:
Enter the coordinates of center : 1,1
Enter the radius: 6
Enter the coordinates of the point: 4,4
The given point in inside the given circle*/
#include <stdio.h>
#include <math.h>
int main ()
{
    float x,y,r,a,b,c;
    printf("Enter the coordinates of center :\n");
    scanf("%f%f",&a,&b);
    printf("Enter the radius :\n");
    scanf("%f",&r);
    printf("Enter the coordinates of the point:\n");
    scanf("%f%f",&x,&y);
    c = pow(x - a,2) + pow(y - b,2) - pow (r,2);
    if (c == 0)
       printf("The given point lies on the given circle");
       else if (c > 0)
       printf ("The given point lies outside the given circle");
       else 
       printf ("The given point lies inside the circle");
       return 0;
    
}