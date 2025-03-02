#include <stdio.h>
int main() {
    int limitey = 10; 
    for (int contador = 1; contador <= limitey; contador++) { 
        
        
        for (int s = 0; s < contador * 4; s++) {
            printf(" ");
        }

       
        for (int limitex = 10; limitex >= contador; limitex--) {
            printf("%4d", limitex);
        }
        printf("\n"); 

    }
    return 0;}


