#include <stdio.h>
int main(){

    int espacios=6, asteriscos=1;

    for(int i=3; i>=0;i--){
        for(int j=1;j<=espacios;j++){
            printf("%4s"," ");
        }
        espacios--;
        for(int k=1;k<=asteriscos;k++){
            printf("%4s","*");
            
        }
        asteriscos +=2;
            printf("\n");
    }

    int espacios2=5, asteriscos2=13;
    for(int i=3; i>=0;i--){

        for(int j=4;j>=espacios2;j--){
            printf("%4s"," ");
        }
       espacios2--;

        for(int k=1;k<=asteriscos2;k++){
            printf("%4s","*");
            
        }
        asteriscos2 -=2;
            printf("\n");
    }

    int espacio3=6, asterisco3=4;

    for(int i=3; i>=0;i--){
        for(int j=1;j<=espacio3;j++){
            printf("%4s"," &");
        }
        espacio3--;
        for(int k=1;k<=asterisco3;k++){
            printf("%4s","*");
            
        }
        asterisco3 +=2;
            printf("\n");
    }



    return 0;
}