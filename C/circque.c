#include <stdio.h>
#include <stdlib.h>
#define MAX 3
int front = -1;
int rear = -1;
int a[MAX];
void enqueue()
{
    int ele;
    if (front == (rear + 1) % MAX)
    {
        printf("Overflow");
    }
    else if (rear == -1)
    {
        printf("Enter an element : ");
        scanf("%d", &ele);
        rear = 0;
        front = 0;
        a[rear] = ele;
    }
    else
    {
        rear = (rear + 1) % MAX;
        printf("Enter an element : ");
        scanf("%d", &ele);
        a[rear] = ele;
    }
}
void dequeue()
{
    if (front == -1)
    {
        printf("Underflow");
    }
    else if (front == rear)
    {
        printf("%d", a[front]);
        front = rear = -1;
    }
    else
    {
        printf("%d", a[front]);
        front = (front + 1) % MAX;
    }
}
void traverse()
{
    if (front == -1)
    {
        printf("Underflow");
    }
    else
    {
        int i = front;
        while (i != rear)
        {
            printf("%d ", a[i]);
            i = (i + 1) % MAX;
        }
        printf("%d", a[i]);
    }
}
void main()
{
    int ch;
    do
    {
        printf("Enter a choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            traverse();
            break;
        case 4:
            printf("Invalid choice");
            exit(0);
        }
    } while (1);
}