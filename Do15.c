#include <stdio.h>
int main (){
    
    int mark;
    
    printf("Enter Your Marks: ");
    scanf("%d", &mark);
    
    if(mark>=70){
        printf("A+");
    }
    
    else if(mark>=50){
        printf("A");
    }
    
    else{
        printf("F");
    }
    
    return 0;
}