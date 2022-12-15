#include <stdio.h>
#include<math.h>

int main()
{   
    float x1, x2, y1, y2, dtn;
    scanf("%f%f%f%f",&x1, &y1, &x2, &y2);
    int x = pow((x2- x1), 2);
    int y = pow((y2- y1), 2);
    dtn = sqrt(x + y);
    printf("%.4f
", dtn); 
}