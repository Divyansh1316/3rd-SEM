// Even Odd

#include <stdio.h>
void main()
{
    int i, a[50], n;
    printf("Enter size : ");
    scanf("%d", &n);
    printf("Enter elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d is Even\n", a[i]);
        }
        else
        {
            printf("%d is odd\n", a[i]);
        }
    }
}