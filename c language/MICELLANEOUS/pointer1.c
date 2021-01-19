#include<stdio.h>

int main()
{
    int i = 3;
    int *j;
    j = &i;
    printf("value of i is %d\n", i);
    printf("adress of i is %d\n",&i); // here using %u(it means the value is not assigned by the programmer but by the compiler thats why unsigned int) is the rule but we will get the same result if we use %d
    printf("address of j is %u\n", j);
    printf("value of j is %d\n", j);

}