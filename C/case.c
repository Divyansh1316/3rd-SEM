#include <stdio.h>
#include <string.h>
void main()
{
    char str[50];
    int i;
    printf("Enter a string : ");
    gets(str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
    }
    puts(str);
}