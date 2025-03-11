#include <stdio.h>

int main(){
    
    int n = -21;
    char isPositive = 'P';
    char isNegative = 'N';
 
 void ft_is_negative(int n){
    
  if(n < 0){

      putchar(isNegative);
  }else{
      putchar(isPositive);
  };


 };

ft_is_negative(n);


    return 0;
};
