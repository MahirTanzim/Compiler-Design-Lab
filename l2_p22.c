#include <stdio.h>
int main()
{
    char s[100];
    printf("Enter a string: ");
    gets(s);
    int i = 0, start = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ' ' || s[i] == '\n')
        {
            s[i] = '\0';
            printf("%s\n", &s[start]);
            start = i + 1;
        }
        i++;
    }
    if (start < i)
    {
        printf("%s\n", &s[start]);
    }
    return 0;
}
