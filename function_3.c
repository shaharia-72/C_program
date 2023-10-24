#include <stdio.h>
#include <string.h>

void add_string(char f_name[], char l_name[])
{
    strcat(f_name, l_name);
}
int main()
{
    char f_name[100], l_name[100];
    scanf("%s %s", f_name, l_name);

    strcat(f_name, l_name);
    printf("%s", f_name);

    return 0;
}