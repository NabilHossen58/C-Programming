#include <stdio.h>

int main()
{
    // int ar[5] = {100};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n",ar[0]);
    // }

    int ar[5] = {0}; //Variable sized array can't be intialize
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",ar[i]);
    }
    
    return 0;
}