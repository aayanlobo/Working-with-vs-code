#include <stdio.h>
#include<conio.h>

int main()
{
    int num,c;
    printf("Roll - 20E035\n\n");
    printf("Enter the year\n");
    scanf("%d",&num);
    c = num % 4;
    num = ((c == 0)?printf("Leap year"): printf("Not a Leap year"));
    return 0;
}