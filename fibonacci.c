#include<stdio.h>
void fib(int n)
{   
    int a,s=0;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            a=0;
            printf("%d",i);
            s=a+i;
            continue;
        }
        printf(", ");
        printf("%d",a);
        s=a;
        a=a+s;
    }
}