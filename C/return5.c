/* Write a C function to return 5 values:
Sum, Difference, Product, Division, Modulus */

#include <stdio.h>
void calc(int *a, int *b, int *sum, int *diff, int *prod, float *div, int *mod)
{
    *sum = *a + *b;
    *diff = *a - *b;
    *prod = *a * *b;
    *div = (float)*a / *b;
    *mod = *a % *b;
}

void main()
{
    int a, b, sum, diff, prod, mod;
    float div;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &a, &b);
    calc(&a, &b, &sum, &diff, &prod, &div, &mod);
    printf("%d %d %d %f %d", sum, diff, prod, div, mod);
}