#include<stdio.h>
int main()
{
    char c,*d;// *d means the value at the address stored in d is a character constant.
    c = 'p';// here if we remove '' over p then p will become an identifier/variable not a character constant.
    d = &c;
    printf("value of c is %c\n",c);
    printf("address of c is %u\n",d);
    printf("value of c is %c\n", *d);
    printf("address of c is %d", &c);
}