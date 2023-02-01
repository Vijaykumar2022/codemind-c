#include<stdio.h>
int main()
{
    int w,x,y,z;
    scanf("%d%d%d",&w,&x,&y);
    z=x*y;
    if(w<=z)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}