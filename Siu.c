#include <stdio.h>
#include <stdlib.h>

 int main ()
 {

     int my_array[5];
     my_array[0]=10;
     my_array[1]=50000;
     my_array[2]=9000;
     my_array[3]=770;
     my_array[4]=1000;

     printf("*%d , ",my_array[0]);
     printf("#%d, ",my_array[1]);
     printf("%d#, ",my_array[2]);
     printf("%d, ",my_array[3]);
     printf("%d",my_array[4]);

     return 0;
 }
