/*Write a C program to print ASCII value of a character.
Test data and expected output :
Enter a character : A
ASCII value of a is :65*/

#include <stdio.h>

int main()
{
    char c;
    
    printf("Enter a character :");
    scanf("%c",&c);
    printf("ASCII value of %c is : %d",c,c);
    printf("\n Roll - 20E035");
    return 0 ;
}