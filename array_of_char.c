#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char namee[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c",&namee[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%c",namee[i]);
    }
    
    return 0;
}