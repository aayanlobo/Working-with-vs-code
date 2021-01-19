#include <math.h>
#include <stdio.h>
long long convert(int n);
int main() {
    int n;
    printf("Roll no . 20E035\n\n");
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    if (n>0 && n < 32)
    printf("Binary equivalent of decimal number %d is %lld", n, convert(n));
    else 
    printf("Entered no. is out of range");
    return 0;
}

 long long convert(int n) {
    long long bin = 0;
    int rem, i = 1;
      while(n != 0){
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
      }
    return bin;
}