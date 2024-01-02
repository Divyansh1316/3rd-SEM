/*Q2.Write a C program to craeate a single linked list , like L0 -> L1 -> … -> Ln-1 -> Ln. Write another C
 fucntion to rearrange the nodes in the list so that the new formed list is : L0 -> Ln -> L1 -> Ln-1 -> L2
 -> Ln-2 .You are required to do this in place without altering the nodes’ values.*/
#include <stdio.h>
#include <stdlib.h>
typedef struct link
{
    int data;
    struct link *next;
} ll;
void create(ll **);
ll *arrange(ll **);
void display(ll *);
int main()
{
    ll *head = NULL;
    ll *head2 = NULL;
    int ch;
    while (1)
    {
        printf("\n1.Insert a node \n2.Arrange \n3.Display \n4.Exit \nEnter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create(&head);
            break;
        case 2:
            head2 = arrange(&head);
            break;
        case 3:
            display(head2);
            break;
        case 4:
            printf("\nExiting program.\n");
            exit(0);
        default:
            printf("\nWrong choice.");
        }
    }
    return 0;
}
void create(ll **head)
{
    int d;
    ll *p = (ll *)malloc(sizeof(ll));
    if (!p)
    {
        printf("\nMemory allocation failed.\n");
        exit(1);
    }
    printf("Enter the data:");
    scanf("%d", &d);
    p->data = d;
    p->next = NULL;
    if (*head == NULL)
    {
        *head = p;
    }
    else
    {
        ll *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
    }
}
ll *arrange(ll **head)
{
    int j = 0, n = 0;
    ll *temp = *head;
    ll *h1 = NULL;
    ll *h2 = NULL;

    if (*head == NULL || (*head)->next == NULL)
    {
        printf("Not enough nodes to rearrange.\n");
        return NULL;
    }

    while (temp != NULL)
    {
        n++;
        temp = temp->next;
    }
    temp = *head;
    while (temp != NULL)
    {
        if (j < (n / 2) - 1)
        {
            j++;
            temp = temp->next;
        }
        else
        {
            break;
        }
    }
    h1 = temp->next;
    temp->next = NULL;
    ll *current = h1;
    ll *next = NULL;
    ll *prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    h1 = prev;
    int i = 1;
    temp = *head;
    ll *temp1 = h1;
    ll *temp2 = h2;
    display(temp);
    display(temp1);
    temp = *head;
    temp1 = h1;
    while (temp != NULL || temp1 != NULL)
    {
        if (h2 == NULL)
        {
            h2 = temp;
            *head = temp->next;
            temp->next = NULL;
            temp2 = h2;
        }
        else
        {
            while (temp2->next != NULL)
            {
                temp2 = temp2->next;
            }
            if (i == 1 || temp == NULL)
            {
                temp2->next = temp1;
                h1 = temp1->next;
                temp1->next = NULL;
                i = 0;
            }
            else
            {
                temp2->next = temp;
                *head = temp->next;
                temp->next = NULL;
                i = 1;
            }
        }
        temp = *head;
        temp1 = h1;
    }
    return h2;
}
void display(ll *head)
{
    ll *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
