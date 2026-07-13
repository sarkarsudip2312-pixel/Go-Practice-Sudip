#include <stdio.h>
int main ()
{
    int num;
    
    printf("Enter Your Weight: ");
    scanf("%d", &num);
    
    if (80<num){
        printf("A+");
    }
    
    else if (70<num){
        printf("A");
    }
    
    else if (60<num){
        printf("A-");
    }
    
    else if (50<num){
        printf("B");
    }
    
    else if (40<num){
        printf("C");
    }
    
    else if (33<num){
        printf("D");
    }
    
    else{
        
        printf("F");
    }
    
    
    
    return 0;
}