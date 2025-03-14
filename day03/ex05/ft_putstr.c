#include <stdio.h>

int main(){
    char myString[] = "Hello";
    char *str = &myString[10];

    void ft_putstr(char *str){
       
       for( int i = 0; myString[i] != '\0'; i++){
      
            putchar(myString[i]);
       };
    };
        

    ft_putstr(str);


    return 0;
};
