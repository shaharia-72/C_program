//? Question : Write a function named is_palindrome() which will receive a string as parameter from the main function and this function will return 1 if the string is palindrome, otherwise it will return 0. And with the help of this 1 or 0 print “Palindrome” or “Not Palindrome” in the main function.Marks : 15
//! Constraints : String length will be maximum 10. ShArminn ShArminn Khadijaa

#include <stdio.h>
#include <string.h>

int is_palindrome(char str[10])
{
    char str1[10];
    strcpy(str1, str);
    strrev(str);
    int res = strcmp(str1, str);
    if (res == 0)
    {
        return 1;
        // printf("Palindrome\n");
    }
    return 0;
}

int main()
{
    char str[10];
    scanf("%s", str);

    // printf("%s\n", str);
    if (is_palindrome(str))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}