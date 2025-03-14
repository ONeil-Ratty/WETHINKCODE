#include <stdio.h>


int main(){
    char myString[] = "Hello";
    char *str = &myString[4];
    int i;


     
  char ft_strlen(char *str){           
         
        for(i = 0; myString[i] != '\0' ;i++){
        
        int x = i + 1 ;

         printf("%d",x);
        };
          
 };
    
    ft_strlen(str);
   

    return 0;
};
