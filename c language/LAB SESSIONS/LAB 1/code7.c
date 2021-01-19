/*Write a program to check whether a triangle is valid or not, when the three angles
of the triangle are entered through the keyboard. A triangle is valid if the sum of all the three
angles is equal to 180 degrees.
Test data and expected output :
Enter three angles of a triangle : 70 40 90
Triangle is Invalid
Enter three angles of a triangle : 70 20 90
Triangle is valid*/
#include <stdio.h>
int  main()
{
    float a,b,c;
    printf("Enter three angles of a triangle : \n");
    scanf("%f%f%f",&a,&b,&c);
    float s = a+b+c;
    if (s == 180)
    printf("Triangle is valid\n");
    else 
    printf("Triangle is Invalid");
    printf("\n Roll - 20E035");
    return 0;
}