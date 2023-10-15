// Count words in sentece.

#include <stdio.h>
void main()
{
    char str[200];
    int count = 0;
    int flag = 0; // Use 0 for false and 1 for true

    printf("Enter The String To Find The No. Of Words:\n");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            if (flag == 0)
            {
                count++;
                flag = 1;
            }
        }
        else
        {
            flag = 0;
        }
    }

    printf("The No. Of Words In The Given String Is: %d\n", count);
}
