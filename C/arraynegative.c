#include <stdio.h>
void main()
{
    int a[50], sz, i, j = 0, t;
    printf("Enter size: ");
    scanf("%d", &sz);

    for (i = 0; i < sz; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < sz; i++)
    {
        if (a[i] < 0)
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
            j++;
        }
    }

    for (i = 0; i < sz; i++)
    {
        printf("%d ", a[i]);
    }
}