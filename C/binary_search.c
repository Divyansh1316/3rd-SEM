//  binary search
#include <stdio.h>

int main()
{
    int arr[5], i, ele, high, low, mid;
    printf("Enter array : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    low = 0;
    high = 4;
    printf("Enter element : ");
    scanf("%d", &ele);
    mid = (low + high) / 2;
    while (ele != arr[mid] && low <= high)
    {
        if (ele < arr[mid])
        {
            high = mid - 1;
        }
        else if (ele > arr[mid])
        {
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }
    if (low > high)
    {
        printf("Element not found");
    }
    printf("%d", mid);
    return 0;
}