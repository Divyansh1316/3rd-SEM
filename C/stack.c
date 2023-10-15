#include <stdio.h>
#include <stdlib.h>
#define MAX 3
int STACK[MAX];
int TOP = -1;
void PUSH()
{
    int val;
    if (TOP == MAX - 1)
    {
        printf("Stack overflow");
        return;
    }
    else
    {
        printf("Enter a value : ");
        scanf("%d", &val);
        STACK[++TOP] = val;
    }
}
void POP()
{
    if (TOP == -1)
    {
        printf("Stack underflow");
        return;
    }
    else
    {
        printf("%d", STACK[TOP--]);
    }
}
void TRAVERSAL()
{
    int t;
    if (TOP == -1)
    {
        printf("Stack underflow");
        return;
    }
    else
    {
        for (t = TOP; t != -1; t--)
        {
            printf("%d\n", STACK[t]);
        }
    }
}
int main()
{
    int ch;
    do
    {
        printf("Enter a choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            PUSH();
            break;

        case 2:
            POP();
            break;

        case 3:
            TRAVERSAL();
            break;

        default:
            printf("Invalid choice");
            exit(0);
        }
    } while (1);
}