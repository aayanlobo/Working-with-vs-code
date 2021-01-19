//Program to find Maximum and minimum of two numbers without using any loop or condition.
#include<stdio.h> 

/*Function to find minimum of x and y*/
int min(int x, int y) 
{ 
return y ^ ((x ^ y) & -(x < y)); 
} 
  
/*Function to find maximum of x and y*/
int max(int x, int y) 
{ 
return x ^ ((x ^ y) & -(x < y));  
} 
  /* Driver program to test above functions */
int main() 
{ 
int x,y;
printf("Roll - 20E035\n\n");
printf("Enter values of x and y\n");
scanf("%d%d",&x,&y);
printf("Minimum of %d and %d is \n", x, y); 
printf("%d", min(x, y)); 
printf("\n Maximum of %d and %d is \n ", x, y); 
printf("%d", max(x, y)); 

} 
