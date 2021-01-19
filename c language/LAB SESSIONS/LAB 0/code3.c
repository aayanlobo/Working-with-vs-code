#include <stdio.h>
 int main( )
{

int a,b ,c;
a= 2.45; b =a+2;  /* ERROR :  here the values of both  a and b are in decimals but we define them with int datatype 
                              that`s why  the output values are in integers.It can be corrected by using float 
                              datatype with a and b and replace %d with %f in scanf and printf function */ 

printf( "Enter an integer:");
 scanf( "%d", &c);

printf( "%d %d %d\n",a, b,c);
 
return 0; 

}