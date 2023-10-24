#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int i, j;

    // Loop through half the string
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        // If the characters don't match, it's not a palindrome
        if (str[i] != str[j])
        {
            return 0;
        }
    }

    // If we made it through the loop without returning, it's a palindrome
    return 1;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (is_palindrome(str))
    {
        printf("%s is a palindrome.\n", str);
    }
    else
    {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
