#include <stdio.h>
int main(){
    int numero[5];
    int numeros[]={5,7,9,5,8};
    for(int i=0;i<5;i++){
        printf("Valor en posicion i[%d] es= %d\n",i,numeros[i]);
    }
    printf("Valor=%d",numeros[2]);
    return 0;
}