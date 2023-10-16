#include <stdio.h>
#include <stdlib.h>
typedef struct SNodeType
{
    int info;
    struct SNodeType *next;
} sn;

sn *head = NULL;

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
            head = inslast(head);
            break;
        case 2:
            head = traverse(head);
            break;
        case 3:
            head = split(head);
            break;
        default:
            printf("Invalid choice");
            exit(0);
        }
    } while (1);
}
