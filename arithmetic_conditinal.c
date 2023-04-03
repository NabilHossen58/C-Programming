#include <stdio.h>

int main(){

    int a,b,sum;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    if(op=='+'){
        sum = a + b;      
    }
    else if(op=='-'){
        sum = a - b;       
    }
    else if(op=='*'){
        sum = a * b;       
    }
    else{
        printf("Its not included");
    }
    printf("%d",sum);

    return 0;
}



