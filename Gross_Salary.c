#include<stdio.h>
int main()
{
    float Basic, Net, DA, HRA;
    scanf("%f", &Basic);
    if (Basic<=10000)
    {
    	DA=Basic*80/100;
        HRA=Basic*20/100;
	}
	else if (Basic<=20000)
	{
    	DA=Basic*90/100;
        HRA=Basic*25/100;
	}
	else
	{
    	DA=Basic*95/100;
        HRA=Basic*30/100;
	}
  Net=Basic+DA+HRA;
  printf("%0.2f",Net); 
  return 0;
}