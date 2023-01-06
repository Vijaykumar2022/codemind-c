#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d=a+b;
    if(d>c)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid triangle");
    }
}