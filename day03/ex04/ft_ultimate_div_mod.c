#include <stdio.h>

int main(){
  int x;
  int y;

  int *a = &x;
  int *b = &y;

  void ft_ultimate_div_mod(int *a, int *b){
    *a = *a / *b;
    *b = *a % *b;

  };

 return 0;
};
