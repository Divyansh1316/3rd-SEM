#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, j, key;
    int i = 0;
    printf("enter the number of elements\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the  element\n");
    scanf("%d", &arr[0]);
    for (j = 1; j < n; j++)
    {
        printf("enter the element\n");
        scanf("%d", &arr[j]);
        key = arr[j];
        i = j - 1;
        while (i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}