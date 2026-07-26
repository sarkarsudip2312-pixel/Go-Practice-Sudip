#include <stdio.h>
int main (){
    
    int colour;
    
    printf("Enter Number: ");
    scanf("%d", &colour);
    
    
    switch(colour)
    {
    case 1:
    printf("Red");
    break;
    
    case 2:
    printf("Blue");
    break;
    
    case 3:
    printf("Green");
    break;
    
    default:
    printf("Discolour");
    }
    
    
    return 0;
}