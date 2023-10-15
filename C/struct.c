#include <stdio.h>
struct product
{
    int pid;
    char pname[50];
    int price;
};
void main()
{
    struct product c[5];
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Enter details of %d product : \n", i + 1);
        printf("Enter product ID : ");
        scanf("%d", &c[i].pid);
        getchar();
        printf("Enter product name : ");
        gets(c[i].pname);
        printf("Enter product price : ");
        scanf("%d", &c[i].price);
    }
    for (i = 0; i < 2; i++)
    {
        printf("\nDetails of %d product is : \n", i + 1);
        printf("Product ID : %d\n Product name : %s\nProduct price : %d", c[i].pid, c[i].pname, c[i].price);
    }
}
