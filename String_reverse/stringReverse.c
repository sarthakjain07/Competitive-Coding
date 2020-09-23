#include <stdio.h>
#include <stdlib.h>

void main()
{
    int length = 0;
    char s[20], temp;
    printf("Enter the string\n");
    gets(s);

    for (length = 0; s[length] != '\0'; length++)
    {
    }
    // printf("%d",length);

    for (int i = 0; i < (length - 1) / 2; i++)
    {
        temp = s[i];
        s[i] = s[length - 1 - i];
        s[length - 1 - i] = temp;
    }
    printf("%s", s);
}