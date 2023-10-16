// Singly linked list.

#include <stdio.h>
#include <stdlib.h>
typedef struct SNodeType
{
    int info;
    struct SNodeType *next;
} sn;

sn *head = NULL;

sn *insbeg(sn *head)
{
    sn *temp;
    temp = (sn *)malloc(sizeof(sn));
    if (temp == NULL)
    {
        printf("Memory is full");
    }
    else
    {
        printf("Enter info : ");
        scanf("%d", &(temp->info));
        temp->next = head;
        head = temp;
    }
    return head;
}

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

sn *insnode(sn *head)
{
    int c = 1, n;
    sn *temp;
    temp = (sn *)malloc(sizeof(sn));
    if (temp == NULL)
    {
        printf("Memory is full");
    }
    else if (head == NULL)
    {
        printf("Enter info : ");
        scanf("%d", &(temp->info));
        temp->next = NULL;
        head = temp;
    }
    else
    {
        printf("Enter node number where u want to insert : ");
        scanf("%d", &n);
        sn *p1 = head;
        while (c != n - 1)
        {
            p1 = p1->next;
            c++;
        }
        printf("Enter info : ");
        scanf("%d", &(temp->info));
        temp->next = p1->next;
        p1->next = temp;
    }
    return head;
}

sn *delbeg(sn *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    else
    {
        sn *p1 = head;
        head = head->next;
        free(p1);
    }
    return head;
}

sn *dellast(sn *head)
{
    sn *p1 = head;
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    else if (p1->next == NULL)
    {
        free(p1);
        head = NULL;
    }
    else
    {
        sn *p2;
        while (p1->next != NULL)
        {
            p2 = p1;
            p1 = p1->next;
        }
        p2->next = NULL;
        free(p1);
    }
    return head;
}

sn *delpos(sn *head)
{
    sn *p1 = head, *p2;
    int c = 1, n;
    printf("Enter node u want to delete : ");
    scanf("%d", &n);
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    if (n <= 0)
    {
        printf("Invalid position\n");
    }
    else if (n == 1)
    {
        head = p1->next;
        free(p1);
    }
    else
    {
        while (c != n && p1 != NULL)
        {
            p2 = p1;
            p1 = p1->next;
            c++;
        }
        p2->next = p1->next;
        free(p1);
    }
    return head;
}

sn *delinfo(sn *head)
{
    sn *p1 = head, *p2;
    int n;
    printf("Enter info u want to delete : ");
    scanf("%d", &n);
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    if (n <= 0)
    {
        printf("Invalid position\n");
    }
    else if (n == p1->info)
    {
        head = p1->next;
        free(p1);
    }
    else
    {
        while (p1->info != n)
        {
            p2 = p1;
            p1 = p1->next;
        }
        p2->next = p1->next;
        free(p1);
    }
    return head;
}

sn *search(sn *head)
{
    int c = 1, n;
    sn *p1 = head;
    if (head == NULL)
    {
        printf("Memory not available");
    }
    else
    {
        printf("Enter element to search: ");
        scanf("%d", &n);
        while (p1 != NULL)
        {
            if (p1->info == n)
            {
                printf("Element found at position %d\n", c);
                return head; // Found, so no need to continue searching
            }
            p1 = p1->next;
            c++;
        }
        printf("Element not found\n");
    }
    return head;
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

sn *rev(sn *head)
{
    sn *p1 = NULL;
    sn *p2 = head;
    sn *p3 = NULL;

    while (p2 != NULL)
    {
        p3 = p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = p3;
    }
    head = p1;
    return head;
}

sn *dup(sn *head)
{
    sn *p1, *p2, *p3;
    p1 = head;
    while (p1 != NULL && p1->next != NULL)
    {
        p2 = p1;
        while (p2->next != NULL)
        {
            if (p1->info == p2->next->info)
            {
                p3 = p2->next;
                p2->next = p2->next->next;
                free(p3);
            }
            else
            {
                p2 = p2->next;
            }
        }
        p1 = p1->next;
    }
    return head;
}

sn *delalt(sn *head)
{
    sn *p1 = head;
    sn *p2 = NULL;
    if (head == NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        while (p1 != NULL && p1->next != NULL)
        {
            p2 = p1->next;
            p1->next = p2->next;
            free(p2);
            p1 = p1->next;
        }
    }
    return head;
}

sn *split(sn *head)
{
    sn *p = head;
    sn *p3 = head;
    sn *p2 = NULL;
    int n,c=1;
    printf("Enter position where u want to split : ");
    scanf("%d",&n);
    while (c != n+1)
    {
        p2=p;
        p = p->next;
        c++;
    }
    p2->next=NULL;
    while(p3!=NULL)
    {
        printf("%d ",p3->info);
        p3=p3->next;
    }
    printf("\t");
    head=p;
    while(p!=NULL)
    {
        printf("%d ",p->info);
        p=p->next;
    }
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
            head = insbeg(head);
            break;
        case 2:
            head = inslast(head);
            break;
        case 3:
            head = insnode(head);
            break;
        case 4:
            head = delbeg(head);
            break;
        case 5:
            head = dellast(head);
            break;
        case 6:
            head = delpos(head);
            break;
        case 7:
            head = delinfo(head);
            break;
        case 8:
            head = search(head);
            break;
        case 9:
            head = traverse(head);
            break;
        case 10:
            head = rev(head);
            break;
        case 11:
            head = dup(head);
            break;
        case 12:
            head = delalt(head);
            break;
        case 13:
            head = split(head);
            break;
        default:
            printf("Invalid choice");
            exit(0);
        }
    } while (1);
}
