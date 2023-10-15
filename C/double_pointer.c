// Implementation of double pointer in C.

#include <stdio.h>
void main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;  // q is a double pointer pointing to another pointer p
    int ***r = &q; // r is a triple pointer pointing to another pointer q
    *p = 29;
    **q = 292;
    printf("%d %d %d", *p, **q, ***r);
}