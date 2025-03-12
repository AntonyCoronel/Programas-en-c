//En esta parte agregare las librerias que ocupare
#include<stdio.h>//incluyo libreria para imprimir y leer
#include<string.h>//libreria para string 
#include<math.h>//libreria para operacione matematicas tryhards 

struct EcCuadratica {//creo una estructura para guardar mis datos
    int a;//valor de incognita al cuadrado 
    int b;//incognita con numero 
    int c;//solo numero sin la x
    int discriminante;//para ver si tiene solucion
    float x1;//resultado 1
    float x2;//resultado 2
    char solucion[30];//para imprimir si tiene solucion o no
};

int main() {//Inicio mi programa
    int size;//defino una variable para el tamaño de mi arreglo
    printf("Ingrese el numero de ecuaciones cuadraticas: ");//pido el numero del arreglo osea la cantidad de ecuaciones
    scanf("%d", &size);//leo el tamaño

    struct EcCuadratica arreglo[size];// creo mi arreglo 
    
    for(int i = 0; i < size; i++) {//inicio el ciclo para pedir datos
        printf("Ingrese los datos de la ecuacion %d: \n", i + 1);//indico en que ecuacion estoy
        //pido y leo los datos de la ecuacion 
        printf("a= ");//pido a
        scanf("%d",&arreglo[i].a);//leo a
        printf("b= ");//pido b
        scanf("%d",&arreglo[i].b);//leo b
        printf("c= ");//pido c 
        scanf("%d",&arreglo[i].c);//leo c
        arreglo[i].x1 = 0.00;//valor de resultado iniciado en 0
        arreglo[i].x2 = 0.00;//valor de resultado iniciadndo en 0
    }
    

    for(int i = 0; i < size; i++) {//inicio ciclo para calcular 
        int d = (arreglo[i].b * arreglo[i].b) - (4 * arreglo[i].a * arreglo[i].c);//hago la parte que esta adentro de mi raiz en la formula general 
        arreglo[i].discriminante = d;//le doy valor al discriminante con la operacion que hice arriba
        
        if (d < 0) {//si mi discriminante es negativa 
            strcpy(arreglo[i].solucion, "No tiene solucion");//entonce no tiene solucion osea si pero no real
        } else {//si no
            float valorx1 = (-arreglo[i].b + sqrt(d)) / (2.0 * arreglo[i].a);//calculo x1 con la parte mas de la parte mas menos 
            float valorx2 = (-arreglo[i].b - sqrt(d)) / (2.0 * arreglo[i].a);//calculo x2 con la parte menos de la parte mas menos
            strcpy(arreglo[i].solucion, "Tiene solucion");//imprimo que si tiene solucion aprovechando que ya escribi que no tiene 
            arreglo[i].x1 = valorx1;//doy valor a x1
            arreglo[i].x2 = valorx2;//doy valor a x2
        }
    }

    printf("a | b | c | x1 | x2 | Solucion\n");//pongo eso para que se vea bonito 
    for (int i = 0; i < size; i++) {//inicio el ciclo para imprimir 
        printf("%d | %d | %d | %.2f | %.2f | %s\n", arreglo[i].a, arreglo[i].b, arreglo[i].c, arreglo[i].x1, arreglo[i].x2, arreglo[i].solucion);
        //arriba pues solo imprimi mis resultados 
    }
    
    return 0;//fin del progrma 
}
