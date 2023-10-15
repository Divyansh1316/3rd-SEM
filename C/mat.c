// Check if matrix is symmetric or not.

#include <stdio.h>
void main()
{
    int i, j, a[50][50], n, m, count = 0;
    printf("Enter rows and columns : ");
    scanf("%d %d", &n, &m);
    if (n == m)
    {
        printf("Enter elements : ");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (a[i][j] != a[j][i])
                {
                    count = 1;
                    break;
                }
            }
        }

        if (count == 0)
        {
            printf("Symmetric");
        }
        else
        {
            printf("Not Symmetric");
        }
    }
    else
    {
        printf("Matrix is not square");
    }
}