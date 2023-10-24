#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{

    for (int i = 0; i < strlen(str) / 2; i++)
    {
        if (str[i] != str[(strlen(str) - 1) - i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[100];
    scanf("%s", str);

    if (is_palindrome(str))
    {
        printf("Palindrome");
    }

    else
        printf("No Palindrome");

    return 0;
}