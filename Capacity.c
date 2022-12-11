#include <stdio.h>
int main()
{
int S,T,B, Cap, CapKB;
scanf("%d%d%d",&S,&T,&B);
Cap=2*S*T*B*512;
CapKB=Cap/1024;
printf("%d KB", CapKB);
}