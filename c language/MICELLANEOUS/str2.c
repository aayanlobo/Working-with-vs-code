#include <stdio.h>

int main()
{
    struct book 
    {
        char name;
        float price;
        int pages;
    }
    ;
    struct book b[3];
    for (int i = 0 ; i <=2 ; i++)
    {
        printf ("Enter the name , price and pages of each book\n");
        scanf("%c%f%d\n",&b[i].name,&b[i].price,&b[i].pages);
    };
    for (int i = 0;i <= 2 ;i++)
    {
    printf("The values you entered are :\n");
    printf("%c\t%f\t%d\n",b[i].name,b[i].price,b[i].pages);
    };
    return 0 ;
}
