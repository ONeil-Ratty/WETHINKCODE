#include <stdio.h>

int main(){
    char myString[]="Hello";
    char *str = &myString[5];
    int i;


    char ft_strrev(char *str){
        for(i=5;myString[i] >= 0 ;i--){
            printf("%c",myString[i]);
        };

    };

    ft_strrev(str);

    return 0;
};
