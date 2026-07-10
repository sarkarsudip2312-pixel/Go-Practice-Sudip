#include <stdio.h>

int main()
{
    float weight;
    float height;
    float area;
    
    printf("Input Weight:"); 
    scanf("%f", &weight); 
    

    printf("\nInput Height:"); 
    scanf("%f", &height); 
    
    
    area = weight * height;
    
    printf("\nResult: %.2f\n", area);
    
    return 0;
}