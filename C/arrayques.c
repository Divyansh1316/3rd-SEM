/*WAP to implement int array for following operation using functions and make menu driven program:
Insertion, deletion, display, reverse, searching.*/

#include <stdio.h>
void insert(int arr[], int n)
{
    int ele, pos;
    printf("Enter element and position : ");
    scanf("%d %d", &ele, &pos);
    n++;
    for (int i = n; i >= pos - 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = ele;
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}
void delete(int arr[], int n)
{
    int pos;
    printf("Enter position : ");
    scanf("%d", &pos);
    for (int i = pos - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void rev(int arr[], int n)
{
    int t;
    for (int i = 0; i < n / 2; i++)
    {
        t = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = t;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void search(int arr[], int n)
{
    int ele, i, count = 0;
    printf("Enter element to search : ");
    scanf("%d", &ele);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            count = 1;
            break;
        }
        else
        {
            count = 0;
        }
    }
    if (count == 1)
    {
        printf("Present");
    }
    else
    {
        printf("Not Present");
    }
}
void main()
{
    int arr[50], n, i, ch;
    printf("Enter size of array : ");
    scanf("%d", &n);
    printf("Enter elements of array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    do
    {
        printf("\nEnter choice 1 to 5 :\n1 for Insertion, 2 for Deletion, 3 for Display, 4 for Reverse, 5 for Searching, 6 to exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert(arr, n);
            break;

        case 2:
            delete (arr, n);
            break;

        case 3:
            display(arr, n);
            break;

        case 4:
            rev(arr, n);
            break;

        case 5:
            search(arr, n);
            break;
        }
    } while (ch != 6);
}