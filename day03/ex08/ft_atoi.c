#include <stdio.h>




int isAscii(char x){

    int y = x;

    return y;
};

int strlen(char string[]){
    int x = 0;

    while(string[x] != '\0'){
        x++;
    };
    return x;
};


int main(){

    char myString[] = "Hello42";
    char myNum[20];
    int arrayStart = 0;
    char testAscii = '1';


int ft_atoi(char myString[]){
    for(int x = 0 ; x <= strlen(myString) ; x++){

        if(myString[x] >= 48 && myString[x] <= 57  ){
           // char placeHolder = isAscii(myString[x]);
            myNum[arrayStart] = myString[x];
            arrayStart++;
        }else{
            ;       
   };
 };
};


ft_atoi(myString);



printf("%s",myNum);
    





    return 0;
};
    
