/*Write a C program that accepts a temperature in
Fahrenheit and prints the corresponding temperature in Celsius.
C/5 = (F −32)/9
Test data and expected output:
Enter temp in Farenheit:98.4
Temp 98.40 in Farenheit = 36.89 Centigrade*/
#include <stdio.h>

int main()
{
    float c,f,a,d;
    printf("Enter temperature in Farenheit:\n");
    scanf("%f",&f);
    d= f - 32.000000;
    a = 5.00/9.00;
    c = a*d;
    printf("Temp %f in Fahreinheit = %f centigrades",f,c);
    printf("\n Roll - 20E035");
    return 0;
}