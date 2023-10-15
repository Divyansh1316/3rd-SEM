#include <stdio.h>
#include <stdlib.h>
#define MAX 3
struct queue
{
    int a[MAX];
    int front;
    int rear;
} s;
void in(struct queue *s)
{
    s->front = -1;
    s->rear = -1;
}
void enqueue(struct queue *s)
{
    int ele;
    if ((s->front) == ((s->rear) + 1) % MAX)
    {
        printf("Overflow");
    }
    else if (s->rear == -1)
    {
        printf("Enter an element : ");
        scanf("%d", &ele);
        s->rear = 0;
        s->front = 0;
        s->a[s->rear] = ele;
    }
    else
    {
        (s->rear) = ((s->rear) + 1) % MAX;
        printf("Enter an element : ");
        scanf("%d", &ele);
        s->a[s->rear] = ele;
    }
}
void dequeue(struct queue *s)
{
    if (s->front == -1)
    {
        printf("Underflow");
    }
    else if (s->front == s->rear)
    {
        printf("%d", s->a[s->front]);
        s->front = s->rear = -1;
    }
    else
    {
        printf("%d", s->a[s->front]);
        (s->front) = ((s->front) + 1) % MAX;
    }
}
void traverse(struct queue *s)
{
    if (s->front == -1)
    {
        printf("Underflow");
    }
    else
    {
        int i = s->front;
        while (i != (s->rear))
        {
            printf("%d ", s->a[i]);
            i = (i + 1) % MAX;
        }
        printf("%d", s->a[i]);
    }
}
void main()
{
    int ch;
    in(&s);
    do
    {
        printf("Enter a choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue(&s);
            break;
        case 2:
            dequeue(&s);
            break;
        case 3:
            traverse(&s);
            break;
        case 4:
            printf("Invalid choice");
            exit(0);
        }
    } while (1);
}