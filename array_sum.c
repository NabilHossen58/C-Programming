#include <stdio.h>

int main()
{
    int n;

    int sumOfArray = 0;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    int num[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        // printf("%d",num[i]);
        sumOfArray = sumOfArray + num[i];
    }
    printf("The sum of array is : %d",sumOfArray);

    return 0;
}