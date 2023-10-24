#include <stdio.h>
#include <string.h>
int main()
{
    char buf[10];
    gets(buf);
    printf("%s\n", buf);

    printf("%d", strlen(buf));
    return 0;
}