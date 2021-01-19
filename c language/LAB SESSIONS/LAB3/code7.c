#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char sex;
    int age;
    printf("Roll - 20E035\n\n");
    printf("Enter sex(M,F) and age of the employee\n");
    scanf("%c%d",&sex,&age);

    if (sex == 'M' && age >= 90)
    printf("\nPension is 4000");
    else if (sex == 'M' && age >= 60)
    printf("\nPension is 6000");
    else if (sex == 'M' && age < 60)
    printf("\nPension is 0");
    else if (sex == 'F' && age >= 90)
    printf("\nPension is 3000");
    else if (sex == 'F' && age >= 60 )
    printf ("\nPension is 5000");
    else if (sex == 'F' && age < 60)
    printf("\nPension is 0");
    else 
    printf("\nEnter a valid input");
    
    return 0;
}