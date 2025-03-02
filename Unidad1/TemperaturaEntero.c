#include <stdio.h>//icluyo mi libreria de entrada y salida

// Imprimo una tabla que muestre de farenjain a celcius del 0 al 300 
int main() {//empiezo mi codigo con algo que retornar
    int fahr=0, celsius;
    int step=20;//declaro mis variables

    while (fahr <= 300) {//inicio mi ciclo
        celsius =(5.0/9.0)*(fahr-32.0); // calculo los celcius
        printf("%d %d\n",fahr,celsius);//imrpimo mis valores
        fahr = fahr + step;//hago el incremento de 20 en 20
    }
    return 0; //finalizo mi codiog
}