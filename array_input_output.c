#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d",&n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number : ");
        scanf("%d",&num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The number is : %d\n",num[i]);
    }
    
    return 0;
}