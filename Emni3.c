#include <stdio.h>
int main ()
{
    float a;
    float b;
    
    double x,y,z;
    
    a=13;
    b=9;
    
    x=15;
    y=29;
    z=7;
    
    printf("Result:\t%.5lf\n", a/b);
    
    printf("Result:\t%.3lf\n", x*y/z);
    
    return 0;
}