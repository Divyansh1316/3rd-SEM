#include <stdio.h>
#include <stdlib.h>
typedef struct SNodeType
{
    int info;
    struct SNodeType *prev;
    struct SNodeType *next;
} dn;

dn *head = NULL;

dn *insbeg(dn *head)
{
    dn *temp;
    int val;
    printf("Enter info : ");
    scanf("%d", &val);
    temp = (dn *)malloc(sizeof(dn));
    if (temp == NULL)
    {
        printf("Memory not available");
    }
    else if (head == NULL)
    {
        temp->prev = temp->next = NULL;
        head = temp;
        temp->info = val;
    }
    else
    {
        temp->prev = NULL;
        temp->info = val;
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    return head;
}

dn *inslast(dn *head)
{
    dn *temp;
    int val;
    temp = (dn *)malloc(sizeof(dn));
    if (temp == NULL)
    {
        printf("Memory not available");
    }
    else if (head == NULL)
    {
        printf("Enter a value : ");
        scanf("%d", &val);
        temp->prev = temp->next = NULL;
        head = temp;
        temp->info = val;
    }
    else
    {
        printf("Enter a value : ");
        scanf("%d", &val);
        dn *p1 = head;
        while (p1->next != NULL)
        {
            p1 = p1->next;
        }
        temp->next = NULL;
        p1->next = temp;
        temp->prev = p1;
        temp->info = val;
    }
    return head;
}

dn *insnode(dn *head)
{
    dn *temp;
    temp = (dn *)malloc(sizeof(dn));
    if (temp == NULL)
    {
        printf("Memory not available");
    }
    else
    {
        int n, val;
        dn *p1 = head;
        printf("Enter a node where u want to insert : ");
        scanf("%d", &n);
        while (p1->info != n && p1->next != NULL)
        {
            p1 = p1->next;
        }
        printf("Enter a value : ");
        scanf("%d", &val);
        temp->info = val;
        p1->prev->next = temp;
        temp->prev = p1->prev;
        p1->prev = temp;
        temp->next = p1;
    }
    return head;
}

dn *delbeg(dn *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        dn *p1 = head;
        head = head->next;
        head->prev = NULL;
        free(p1);
    }
    return head;
}

dn *delast(dn *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        dn *p1 = head;
        while (p1->next != NULL)
        {
            p1 = p1->next;
        }
        p1->prev->next = NULL;
        free(p1);
    }
    return head;
}

dn *delpos(dn *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        int n;
        printf("Enter node u want to delete : ");
        scanf("%d", &n);
        dn *p1 = head;
        while (p1->info != n)
        {
            p1 = p1->next;
        }
        p1->prev->next = p1->next;
        p1->next->prev = p1->prev;
        free(p1);
    }
    return head;
}

dn *delbefpos(dn *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        int n;
        printf("Enter node before u want to delete : ");
        scanf("%d", &n);
        dn *p1 = head;
        while (p1->info != n - 1)
        {
            p1 = p1->next;
        }
        p1->prev->next = p1->next;
        p1->next->prev = p1->prev;
        free(p1);
    }
    return head;
}

dn *delafpos(dn *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        int n;
        printf("Enter node after u want to delete : ");
        scanf("%d", &n);
        dn *p1 = head;
        while (p1->info != n + 1 && p1->next != NULL)
        {
            p1 = p1->next;
        }
        p1->prev->next = p1->next;
        p1->next->prev = p1->prev;
        free(p1);
    }
    return head;
}

dn *display(dn *head)
{
    dn *p1 = head;
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
            head = delast(head);
            break;
        case 6:
            head = delpos(head);
            break;
        case 7:
            head = delbefpos(head);
            break;
        case 8:
            head = delafpos(head);
            break;
        case 9:
            head = display(head);
            break;
        default:
            printf("Invalid choice");
            exit(0);
        }
    } while (1);
}