#include <stdio.h>

int main(){
    int num;
    int *nbr = &num;

    void ft_ft(int *nbr){

        *nbr = 42;
        


    };



    ft_ft(nbr);

    printf("%d",num);

    return 0;
};
