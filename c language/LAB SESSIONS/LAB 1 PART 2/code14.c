/*Given three points (x1, y1), (x2, y2) and (x3, y3). Write a program to check if all
the three points are collinear (lie on the same line).
Test data and expected output:
Enter coordinates of three points : 2,4 4,6 6,8
The given three points are collinear*/

#include <stdio.h> 
#include <math.h> 

#
void collinear();
int main() 
{ 

int x1,x2,x3,y1,y2,y3;
    printf("Enter coordinates of three points :");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    collinear(x1, y1, x2, y2, x3, y3); 
    
    return 0; 
} 
  
void collinear(int x1, int y1, int x2,  
               int y2, int x3, int y3) 
{ 
     
    int a = x1 * (y2 - y3) +  
            x2 * (y3 - y1) +  
            x3 * (y1 - y2); 
  
    if (a == 0) 
        printf("The given three points are collinear"); 
    else
        printf("The given three points are non-collinear"); 
} 
  
