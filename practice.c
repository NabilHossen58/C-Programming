#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];
    char b[10];

    scanf("%s %s",a,b);

    int j = 0;
    for (int i = strlen(a); i <= strlen(b)+ strlen(a); i++)
    {
        a[i] = b[j];
        j++;
    }
    printf("%s",a);
    return 0;
}