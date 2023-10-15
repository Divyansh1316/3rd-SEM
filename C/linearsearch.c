#include <stdio.h>

void main()
{
    int i, arr[50], size, key, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            found = 1; // Key is found
            break;     // Exit the loop since we found the key
        }
    }

    if (found)
    {
        printf("Element %d found at index %d.\n", key, i);
    }
    else
    {
        printf("Element %d not found in the array.\n", key);
    }
}