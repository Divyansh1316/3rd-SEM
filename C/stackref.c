#include <stdio.h>
#include <stdlib.h>
#define max 3
struct stack
{
    int a[max];
    int top;
} st;

void push(struct stack *st)
{
    int value;
    if (st->top == max - 1)
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter a value : ");
        scanf("%d", &value);
        st->a[++(st->top)] = value;
    }
}
void pop(struct stack *st)
{
    if (st->top == -1)
    {
        printf("Underflow");
    }
    else
    {
        printf("%d", st->a[(st->top)--]);
    }
}
void traverse(struct stack *st)
{
    int i;
    i = st->top;
    if (st->top == -1)
    {
        printf("Underflow");
    }
    else
    {
        for (i; i != -1; i--)
        {
            printf("%d\n", st->a[i]);
        }
    }
}
void main()
{
    int ch;
    st.top = -1;
    do
    {
        printf("Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push(&st);
            break;

        case 2:
            pop(&st);
            break;

        case 3:
            traverse(&st);
            break;

        default:
            printf("Invalid choice");
            exit(0);
        }
    } while (1);
}