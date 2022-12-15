#include<stdio.h>
int main()
{
    int hrs, min, sec;
    scanf("%d", &sec);
    hrs = sec / 3600;
    min = (sec % 3600) / 60;
    sec = (sec % 3600) % 60;
    printf("H:M:S-%d:%d:%d
", hrs, min, sec);
    return 0;
}