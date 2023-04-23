#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];
    char b[10];

    scanf("%s %s",a,b);
    // strcpy(a,b); //Using built-in function.

    for (int i = 0; i <= strlen(b); i++)
    {
        a[i] = b[i];
    }
    printf("%s %s",a,b);
    return 0;
}
