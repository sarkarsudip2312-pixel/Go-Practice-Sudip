#include <stdio.h>
int main(){
    
    int marks;
    
    printf("Enter Your Marks: ");
    scanf("%d", &marks);
    
    if (marks>33){
        printf("Pass");
    }
    
    else{
        printf("Fail");
    }
    
    return 0;
}