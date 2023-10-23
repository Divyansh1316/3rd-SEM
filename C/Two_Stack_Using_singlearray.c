#include <stdio.h>
#include <stdlib.h>
#define max 10
int arr[max];
int top1 = -1;
int top2 = max;
void push()
{
    int ch;
    printf("1. 1st  stack\n2. 2nd stack\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        if (top1 == (max / 2 - 1))
            printf("Stack Overflow\n");
        else
        {
            printf("enter the value\n");
            scanf("%d", &arr[++top1]);
        }
        break;
    case 2:
        if (top2 == (max / 2))
            printf("Stack overflow\n");
        else
        {
            printf("enter the value\n");
            scanf("%d", &arr[--top2]);
        }
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
}
void pop()
{
    int ch;
    printf("1. 1st  stack\n2. 2nd stack\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        if (top1 == -1)
            printf("Stack Undeflow\n");
        else
        {
            printf("%d\n", arr[top1--]);
        }
        break;
    case 2:
        if (top2 == max)
            printf("Stack overflow\n");
        else
        {
            printf("%d\n", arr[top2++]);
        }
    default:
        printf("Invalid choice\n");
        break;
    }
}
void display()
{
    int ch;
    printf("1. 1st  stack\n2. 2nd stack\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        if (top1 == -1)
            printf("Stack Underflow\n");
        else
        {
            int a = top1;
            while (a != -1)
            {
                printf("%d\n", arr[a]);
                a--;
            }
        }
        break;
    case 2:
        if (top2 == max)
            printf("Stack Underflow\n");
        else
        {
            int b = top2;
            while (b != max)
            {
                printf("%d\n", arr[b]);
                b++;
            }
        }
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
}
int main()
{
    int ch1;
    do
    {
        printf("1.push\n2.pop\n3.display\n");
        scanf("%d", &ch1);
        switch (ch1)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            exit(0);
            break;
        }
    } while (ch1 != 0);
}