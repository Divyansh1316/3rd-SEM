// Queue using linked list.

#include <stdio.h>
#include <stdlib.h>
typedef struct SNodetype
{
    int info;
    struct SNodetype *next;
} sn;

sn *front = NULL;
sn *rear = NULL;

void enqueue(int val)
{
    sn *temp;
    temp = (sn *)malloc(sizeof(sn));
    if (temp == NULL)
    {
        printf("Overflow");
    }
    else
    {
        temp->info = val;
        temp->next = NULL;
        if (rear == NULL)
        {
            front = rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
    }
}

void dequeue()
{
    if (front == NULL)
    {
        printf("Underflow");
    }
    else
    {
        int val = -1;
        sn *p1 = front;
        front = front->next;
        val = p1->info;
        free(p1);
        printf("%d", val);
    }
}

void traverse()
{
    sn *ptr = front;
    if (front == NULL)
    {
        printf("Underflow");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->info);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int ch, data;
    do
    {
        printf("Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter data to enqueue: ");
            scanf("%d", &data);
            enqueue(data);
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