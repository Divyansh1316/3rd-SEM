#include <stdio.h>
#include <stdlib.h>
#define max 3
int queue[max];
int rear = -1;
int front = -1;

void enqueue()
{
    int ele;
    if (rear == max - 1)
    {
        printf("Overflow\n");
    }
    else if (rear == -1)
    {
        printf("Enter element : ");
        scanf("%d", &ele);
        rear = 0;
        queue[rear] = ele;
        front = 0;
    }
    else
    {
        rear += 1;
        printf("Enter element : ");
        scanf("%d", &ele);
        queue[rear] = ele;
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Underflow\n");
    }
    else if (front == rear)
    {
        printf("%d", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("%d", queue[front]);
        front += 1;
    }
}

void traverse()
{
    if (front == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
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
        default:
            printf("Invalid choice");
            exit(0);
        }
    } while (1);
}