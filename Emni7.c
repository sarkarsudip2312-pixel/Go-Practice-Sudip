#include <stdio.h>
int main (){
    
    int a;
    
    printf("Enter Your Marks: ");
    scanf("%d", &a);
    
    if (a>=80){
        printf("A+");
        
    }
    
    else if(a>=70){
        printf("A");
    }
    
      else if(a>=60){
        printf("A-");
    }
    
      else if(a>=50){
        printf("B");
    }
    
      else if(a>=40){
        printf("C");
    }
    
      else if(a>=33){
        printf("D");
    }
    
    else{
        printf("F");
    }
    return 0;
}