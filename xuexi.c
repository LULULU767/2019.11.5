#include<stdio.h>
int main ()
{
    int x,absolute;
    printf("Enter x:\n");
    scanf("%d",&x);

    if(x<=0){
        absolute=x;
    }
    else  {
        absolute=-x;
    }
    printf ("absolute is %d\n",absolute);
}