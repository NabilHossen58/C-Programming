#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];
    char b[10];

    scanf("%s %s",a,b);

    int x = strcmp(a,b);

    if(x<0)
    {
        printf("A is smaller");
    }
    else if(x>0)
    {
        printf("B is smaller");
    }
    else
    {
        printf("Same");
    }
    return 0;
}