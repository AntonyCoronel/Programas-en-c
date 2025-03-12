#include <stdio.h>
int main(){
    int limitey=10;
    int contador=1;
    
    while ((limitey>=1))
    {
        int limitex=10;
        
        while (limitex>=contador)
        {
            printf("%4d",limitex);
            limitex--;
        }
        contador++;
        printf("\n");
        limitey--;

        
    }
    return 0;}