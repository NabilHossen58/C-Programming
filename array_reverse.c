#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n];//[Size]={size}

    for (int i = 0; i < n; i++) //Loop - 0,1,2,3(10-0,20-1,30-2,40-3)
    {
        scanf("%d",&num[i]);
    }
    
    for (int i = n-1; i >= 0; i--) //Loop - 0,1,2,3(10-0,20-1,30-2,40-3)
    {
        printf("%d\n",num[i]);
    }
    
    return 0;
}