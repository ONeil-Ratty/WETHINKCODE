#include <stdio.h>

int main(){

    int num;
    int *var1= &num;
    int **var2 = &var1;
    int ***var3 = &var2;
    int ****var4 = &var3;
    int *****var5 = &var4;
    int ******var6 = &var5;
    int *******var7 = &var6;
    int ********var8 = &var7;
    int *********nbr = &var8;

    void ft_ultimate_ft(int *********nbr){
    
   *********nbr = 42;

    };

    ft_ultimate_ft(nbr);
    printf("%d",num);
    return 0;

};
