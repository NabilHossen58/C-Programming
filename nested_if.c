#include <stdio.h>

int main(){

    int taka;
    scanf("%d",&taka);
     if(taka>=1000){
        printf("You can go to fantasy kindom\n");
        if(taka>=5000){
            printf("You can also go to cox'bazar\n");
        }
        else{
            printf("You can't go to cox'bazar\n");
        }
     }
     else{
        printf("You can't go anwhere");
     }

    return 0;
}