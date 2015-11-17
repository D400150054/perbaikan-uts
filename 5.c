#include <stdio.h>
#include <math.h>

float rumus (int x, int m)
{
    float y;
    y = sqrt((5*pow(x,3)) - pow(x,m-1) +12);
    return y;
}

int main()
{
    int a = 2;
    int b = 4;
    float y = 0;
    y = rumus(a,b);
    printf("x = %d, m = %d, y = %f",a,b,y);
    return 0;
}
