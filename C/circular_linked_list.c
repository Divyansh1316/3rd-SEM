#include <stdio.h>
#include <stdlib.h>
typedef struct ll
{
    /* data */
    int info;
    struct ll *next;

} CN;
CN *insertatbeg(CN *head)
{
    CN *temp;
    temp = (CN *)malloc(sizeof(CN));
    if (temp == NULL)
        printf("memory not available");
    else
    {
        printf("enter info\n");
        scanf("%d", &temp->info);
        if (head == NULL)
        {
            head = temp;
            temp->next = head;
        }
        else
        {
            CN *p1 = head;
            while (p1->next != head)
            {
                p1 = p1->next;
            }
            p1->next = temp;
            temp->next = head;
            head = temp;
        }
    }
    return head;
}
CN *insertatlast(CN *head)
{
    CN *temp;
    temp = (CN *)malloc(sizeof(CN));
    if (temp == NULL)
        printf("memory not available");
    else
    {
        printf("enter info\n");
        scanf("%d", &temp->info);
        if (head == NULL)
        {
            head = temp;
            temp->next = head;
        }
        else
        {
            CN *p1 = head;
            while (p1->next != head)
            {
                p1 = p1->next;
            }
            p1->next = temp;
            temp->next = head;
        }
    }
    return head;
}
CN *insertafternode(CN *head)
{
    int n;
    int c = 1;
    CN *temp;
    CN *p1 = head;
    temp = (CN *)malloc(sizeof(CN));
    if (temp == NULL)
        printf("memory not aavailable");
    else
    {
        printf("enter the position\n");
        scanf("%d", &n);
        printf("enter info\n");
        scanf("%d", &temp->info);
        while (c != n)
        {
            p1 = p1->next;
            c++;
        }
        temp->next = p1->next;
        p1->next = temp;
    }
    return head;
}
CN *insertbeforenode(CN *head)
{
    int n;
    int c = 1;
    CN *temp;
    CN *p1 = head;
    temp = (CN *)malloc(sizeof(CN));
    if (temp == NULL)
        printf("memory not aavailable");
    else
    {
        printf("enter the position\n");
        scanf("%d", &n);
        printf("enter info\n");
        scanf("%d", &temp->info);
        while (c != (n - 1))
        {
            p1 = p1->next;
            c++;
        }
        temp->next = p1->next;
        p1->next = temp;
    }
    return head;
}
CN *insertatposition(CN *head)
{
    int n;
    CN *temp;
    CN *p1 = head;
    temp = (CN *)malloc(sizeof(CN));
    if (temp == NULL)
        printf("memory not aavailable");
    else
    {
        printf("enter the info\n");
        scanf("%d", &n);
        printf("enter info\n");
        scanf("%d", &temp->info);
        while (p1->info != n)
        {
            p1 = p1->next;
        }
        temp->next = p1->next;
        p1->next = temp;
    }
    return head;
}
CN *deletefrombeg(CN *head)
{
    CN *p1 = head;
    if (head == NULL)
        printf("list is empty\n");
    else if (head == head->next)
    {
        head = NULL;
        free(p1);
    }
    else
    {
        while (p1->next != head)
        {
            p1 = p1->next;
        }
        p1->next = head->next;
        p1 = head;
        head = head->next;
        free(p1);
    }
    return head;
}
CN *deletefromlast(CN *head)
{
    CN *p1 = head;
    CN *p2 = head;
    if (head == NULL)
        printf("list is empty\n");
    else if (head == head->next)
    {
        head = NULL;
        free(p1);
    }
    else
    {
        while (p1->next != head)
        {
            p2 = p1;
            p1 = p1->next;
        }
        p2->next = head;
        free(p1);
    }
    return head;
}
CN *deletebeforenode(CN *head)
{
    int n, c;
    c = 1;
    CN *p1 = head;
    CN *p2 = head;
    if (head == NULL)
        printf("list is empty\n");
    else
    {
        printf("enter the node to be deleted\n");
        scanf("%d", &n);
        while (c != (n - 1))
        {
            p2 = p1;
            p1 = p1->next;
            c++;
        }
        printf("%d", p1->info);
        p2->next = p1->next;
        free(p1);
    }
    return head;
}
CN *deleteafternode(CN *head)
{
    int n, c;
    c = 1;
    CN *p1 = head->next;
    CN *p2 = head;
    if (head == NULL)
        printf("list is empty\n");
    else
    {
        printf("enter the node to be deleted\n");
        scanf("%d", &n);
        while (c != (n))
        {
            p2 = p1;
            p1 = p1->next;
            c++;
        }
        printf("%d", p1->info);
        p2->next = p1->next;
        free(p1);
    }
    return head;
}
CN *deleteatpoistion(CN *head)
{
    int n;
    CN *p1 = head;
    CN *p2 = head;
    if (head == NULL)
        printf("list is empty\n");
    else
    {
        printf("enter the node to be deleted\n");
        scanf("%d", &n);
        while (p1->info != n)
        {
            p2 = p1;
            p1 = p1->next;
        }
        printf("%d", p1->info);
        p2->next = p1->next;
        free(p1);
    }
    return head;
}
CN *search(CN *head)
{
    int c = 1, n;
    CN *p1 = head;

    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        printf("Enter element to search: ");
        scanf("%d", &n);

        do
        {
            if (p1->info == n)
            {
                printf("Element found at position %d", c);
                return head; // Found, so no need to continue searching
            }
            p1 = p1->next;
            c++;
        } while (p1 != head);

        printf("Element not found");
    }
    return head;
}
CN *display(CN *head)
{
    if (head == NULL)
        printf("list is empty\n");
    else
    {
        CN *p1 = head;
        do
        {
            printf("%d\t", p1->info);
            p1 = p1->next;
        } while (p1 != head);
    }
    printf("\n");
    return head;
}
int main()
{
    CN *head = NULL;
    int ch;
    do
    {
        /* code */
        printf("1.insertion at beginning\n2.insertion at last\n3.insertion before node\n4.insertion after a node\n5.insertion at position\n6.deletion at begining\n7.deletion at last\n8deletion after a node\n9.deletion before a node\n10.deletion after particular postitiom\n11.search\n12.display\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head = insertatbeg(head);
            break;
        case 2:
            head = insertatlast(head);
            break;
        case 3:
            head = insertbeforenode(head);
            break;
        case 4:
            head = insertafternode(head);
            break;
        case 5:
            head = insertatposition(head);
            break;
        case 6:
            head = deletefrombeg(head);
            break;
        case 7:
            head = deletefromlast(head);
            break;
        case 8:
            head = deleteafternode(head);
            break;
        case 9:
            head = deletebeforenode(head);
            break;
        case 10:
            head = deleteatpoistion(head);
            break;
        case 11:
            head = search(head);
            break;
        case 12:
            head = display(head);
            break;
        default:
            exit(0);
        }
    } while (ch != 0);
    return 0;
}