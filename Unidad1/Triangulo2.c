#include <stdio.h>
int main(){
    int fila = 10;
    while(fila >= 1) {

        int num = fila;
        while(num <= 10) {
            printf("%4d", num);
            num++;
        }
        printf("\n");
        fila--;
        
    }
    return 0;}
