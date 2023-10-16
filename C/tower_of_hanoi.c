#include <stdio.h>
void toh(int n,char A,char C,char B)
{
        if(n==1)
        {
            printf("Move disk 1 from %c to %c\n",A,C);
            return;
        }
        toh(n-1,A,B,C);
        printf("Move the disk %d from %c to %c\n",n,A,C);
        toh(n-1,B,C,A);
}
int main()
{
    int n;
    printf("Enter no of disks : ");
    scanf("%d",&n);
    toh(n,'A','C','B');
    return 0;
}
