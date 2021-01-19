//Print the maximum value of an unsigned int using One’s Compliment (~) Operator in C

#include <stdio.h>
#include<conio.h>

int main()
{
    printf("Roll no. 20E035\n");
	unsigned int maxval;
	maxval= 0;
	
	maxval = ~maxval;
	printf("Maximum value of an unsigned int is  %u\n",maxval);
	
	return 0;
}