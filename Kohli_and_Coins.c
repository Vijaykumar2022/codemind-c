#include<stdio.h>
int main()
{
    int x,n;
    scanf("%d",&x);
    if (x%10==0)
    {
        n=x/10;
        printf("%d",n);
    }
    else if(x%10==5)
    {
        n=x/10+1;
        printf("%d",n);
    }
    else
    {
        printf("-1");
    }
}