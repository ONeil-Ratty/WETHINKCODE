#include <stdio.h>

int main(){
    int myFactorial = 5;
    int x = 1;
    
    int ft_iterative_factorial(int myFactorial){
        for(int y = 1; y <= myFactorial; y++){
           
           x = x * y; 
                                       
        };
        return x;

      
    };
   int ans = ft_iterative_factorial(myFactorial);
    printf("%d",ans);

    return 0;
};
