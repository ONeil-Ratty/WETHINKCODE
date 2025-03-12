#include <stdio.h>

int main(){
    int x = 10;
    int y = 5;

    int *a = &x;
    int *b = &y;
    int **c = &a;
    int **d = &b;

    void ft_swap(int *a, int *b){
    
    *a = **d;
    *b = **c;    

    };

    ft_swap(a,b);

    printf("x = %d\ny = %d\n",x,y);

    return 0;
};
