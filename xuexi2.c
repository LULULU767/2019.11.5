#include <stdio.h>
int main (void)
{
    int a,b,max;
    printf("Enter a,b:");
    scanf("%d,%d", &a,&b);

    if(a>b){
        max=a;
    }
    else{
        max=b;
    }
    printf("Max is %d.",max);
}