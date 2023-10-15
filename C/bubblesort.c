#include <stdio.h>

void sort(int *a, int n)
{
    int i, j, t;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(a + i) > *(a + j))
            {
                t = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = t;
            }
        }
    }
    printf("Array after sorting is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d", *(a + i));
    }
}

void main()
{
    int a[50], i, n;
    printf("Enter size : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, n);
}