#include <stdio.h>

int main(){
    int a = 5;
    int b = 2;

    int x;
    int y;

    int *div = &x;
    int *mod = &y;


    void ft_div_mod(int a, int b, int *div, int *mod){
    
     *div = a/b;

     *mod = a%b;
      
    };

    ft_div_mod(a,b,div,mod);

    printf("x = %d\ny = %d\n",x,y);


    return 0;
};
