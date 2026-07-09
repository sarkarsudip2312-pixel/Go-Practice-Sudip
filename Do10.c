#include <stdio.h>
int main ()
{
    int a;
    int b;
    int c;
    
    float m;
    float n;
    
    char v;
    char w;
    char x;
    char y;
    char z;
    
    double j;
    double k;
    double l;
    
    a=55;
    b=18;
    c=6;
    
    m=26;
    n=7;
    
    v='S';
    w='U';
    x='D';
    y='I';
    z='P';
    
    j=5;
    k=8;
    l=3;
    
    printf("Jogfol:\t\t%d\n", a+b-c);
    printf("Vagfol:\t\t%.3f\n", m/n);
    printf("Name:\t\t%c%c%c%c%c\n", v,w,x,y,z);
    printf("Sobfol:\t\t%.lf\n", j/k*l);

    
    return 0;
}