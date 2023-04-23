#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }

    int n1;
    scanf("%d",&n1);

    int array1[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&array1[i]);
    }
    
    int newArray[n+n1];
    for (int i = 0; i < n; i++)
    {
        newArray[i] = array[i];
    }

    int i = n;
    for (int j = 0; j < n1; j++) //n1 = 3 int i not, because condition not matched!
    {
        newArray[i] = array1[j];
        i++;
    }

    for (int i = 0; i < n+n1; i++)
    {
        printf("%d ",newArray[i]);
    }
    
    
    
    
    return 0;
}