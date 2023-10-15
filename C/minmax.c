// MIN MAX

#include <stdio.h>
void main()
{
    int i, a[50], n, min, max;
    printf("Enter size : ");
    scanf("%d", &n);
    printf("Enter elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("Max element is %d\n", max);
    printf("Min element is %d", min);
}