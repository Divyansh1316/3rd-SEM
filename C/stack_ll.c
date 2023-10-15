// Stack using linked list.

#include <stdio.h>
#include <stdlib.h>
typedef struct SNodetype
{
    int info;
    struct SNodetype *next;
} sn;

sn *push(sn *top)
{
    int val;
    sn *temp = (sn *)malloc(sizeof(sn));
    if (temp == NULL)
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter info : ");
        scanf("%d", &val);
        temp->info = val;
        temp->next = top;
        top = temp;
    }
    return top;
}

sn *pop(sn *top)
{
    if (top == NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        sn *p1 = top;
        top = top->next;
        free(p1);
    }
    return top;
}

sn *traverse(sn *top)
{
    if (top == NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        sn *p1 = top;
        while (p1 != NULL)
        {
            printf("%d ", p1->info);
            p1 = p1->next;
        }
    }
    return top;
}

int main()
{
    sn *top = NULL;
    int ch;
    do
    {
        printf("Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            top = push(top);
            break;
        case 2:
            top = pop(top);
            break;
        case 3:
            top = traverse(top);
            break;
        default:
            printf("Invalid choice");
            exit(0);
        }
    } while (1);
}