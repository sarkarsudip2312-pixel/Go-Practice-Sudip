#include <stdio.h>
int main(){
    
    char name[50];
    
    printf("Enter your name: ");
    scanf("%s %s", &name, &name);
    
    printf("Hello %s %s! Nice to meeting you.", name, name);
    
  
    return 0;
}