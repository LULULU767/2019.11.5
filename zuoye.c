#include<stdio.h>
int main (void)
{
    int money,t,m;
    printf("Enter t,m:");
    scanf("%d,%d",&t,&m);

    if(m<=3){
        money=10+(t/5)*2;
    }
    if(3<m<=10){
        money=3+(m-3)*2+(t/5)*2;
    }
    if(m>10){
        money=24+(m-10)*3+(t/5)*2;
    }
    printf("money is %d.",money);



}