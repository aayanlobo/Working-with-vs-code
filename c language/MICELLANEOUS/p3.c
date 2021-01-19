#include<stdio.h>

void areaperi(int,float *x,float *y);
int main()
{
    float area,perimeter;
    int radius;
    printf("Enter radius \n");
    scanf("%d",&radius);
    area = 2;
    areaperi(radius,&area,&perimeter);
    printf("Area is %f\n",area);
    printf("perimeter is %f\n",perimeter);
    int c = sizeof(&area);// to check no. of byte stored for a given variable
    printf("value of c is %d",c);
    return 0;

}
void areaperi(int r , float *a,float *p)
{
   *a = 3.14*r*r;
   *p = 2*3.14*r;

}