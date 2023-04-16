#include <stdio.h>

int main()
{
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number : ");
        scanf("%d",&num[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The number is : %d\n",num[i]);
    }
    
    return 0;
}