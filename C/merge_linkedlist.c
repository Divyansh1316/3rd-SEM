#include <stdio.h>
#include <stdlib.h>
typedef struct SNodeType
{
    int info;
    struct SNodeType *next;
} sn;

sn *head = NULL;
sn *head2 = NULL;

sn *inslast(sn *head)
{
    sn *temp;
    temp = (sn *)malloc(sizeof(sn));
    if (temp == NULL)
    {
        printf("Memory is full");
    }
    else if (head == NULL)
    {
        head = temp;
        temp->next = NULL;
        printf("Enter info : ");
        scanf("%d", &(temp->info));
    }
    else
    {
        sn *p1 = head;
        while (p1->next != NULL)
        {
            p1 = p1->next;
        }
        temp->next = NULL;
        p1->next = temp;
        printf("Enter info : ");
        scanf("%d", &(temp->info));
    }
    return head;
}

sn *inslast2(sn *head2)
{
    sn *temp;
    temp = (sn *)malloc(sizeof(sn));
    if (temp == NULL)
    {
        printf("Memory is full");
    }
    else if (head2 == NULL)
    {
        head2 = temp;
        temp->next = NULL;
        printf("Enter info : ");
        scanf("%d", &(temp->info));
    }
    else
    {
        sn *p1 = head2;
        while (p1->next != NULL)
        {
            p1 = p1->next;
        }
        temp->next = NULL;
        p1->next = temp;
        printf("Enter info : ");
        scanf("%d", &(temp->info));
    }
    return head2;
}

sn *traverse(sn *head)
{
    sn *p1 = head;
    if (head == NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        while (p1 != NULL)
        {
            printf("%d ", p1->info);
            p1 = p1->next;
        }
        printf("\n");
    }
    return head;
}

sn *traverse2(sn *head2)
{
    sn *p1 = head2;
    if (head2 == NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        while (p1 != NULL)
        {
            printf("%d ", p1->info);
            p1 = p1->next;
        }
        printf("\n");
    }
    return head2;
}

sn *merge(sn *head, sn *head2)
{
    sn *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = head2;
    return head;
}

int main()
{
    int ch;
    do
    {
        printf("Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head = inslast(head);
            break;
        case 2:
            head2 = inslast2(head2);
            break;
        case 3:
            head = traverse(head);
            break;
        case 4:
            head2 = traverse2(head2);
            break;
        case 5:
            head = merge(head, head2);
            break;

        default:
            printf("Invalid choice");
            exit(0);
        }
    } while (1);
}