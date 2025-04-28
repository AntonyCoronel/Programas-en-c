#include <stdio.h>
#include <stdlib.h>


void programa1() {
#include <stdio.h>
int main(){
    int  num1,num2;
    int *ptr1,*ptr2;

    ptr1=&num1;
    ptr2=&num2;
    printf("%p\n",*ptr1);
    printf("%p\n",*ptr2);

    num1=10;
    num2=20;

    ptr1=ptr2;
    ptr2=NULL;
    printf("%p\n",ptr1);
    printf("%p\n",ptr2);

    return 0;
}
}

void programa2() {
#include <stdio.h>
int mian(){

    int numero=42;
    int *apuntador=&numero;
    printf("Valor de numero: %d\n",numero);
    printf("Direccion de numero: %p\n",&numero);
    printf("Valor del apuntador: %p\n",apuntador);
    printf("Valor al que apunta: %d\n",*apuntador);
    return 0;
}
}

void programa3() {
#include <stdio.h>

int main() {
    int fno, sno, *ptr, *qtr;
    int sum, res, mul;
    float div;

    printf("\n\n Pointer: Operaciones con dos números:\n");
    printf("----------------------------------------\n");

    printf("Input the first number: ");
    scanf("%d", &fno);

    printf("Input the second number: ");
    scanf("%d", &sno);

    ptr = &fno;
    qtr = &sno;

    printf("\nDirección de memoria de fno (ptr): %p", ptr);
    printf("\nDirección de memoria de sno (qtr): %p", qtr);

   
    sum = *ptr + *qtr;
    printf("\n\nSuma: %d + %d = %d", *ptr, *qtr, sum);
    printf("\nDirección de memoria de suma: %p", &sum);

 
    res = *ptr - *qtr;
    printf("\n\nResta: %d - %d = %d", *ptr, *qtr, res);
    printf("\nDirección de memoria de resta: %p", &res);

 
    mul = (*ptr) * (*qtr);
    printf("\n\nMultiplicación: %d * %d = %d", *ptr, *qtr, mul);
    printf("\nDirección de memoria de multiplicación: %p",&mul);

   
    div = (*ptr) / (*qtr);
        printf("\n\nDivisión: %d / %d = %.2f", *ptr, *qtr, div);
        printf("\nDirección de memoria de división: %p\n\n",&div);
    return 0;
}
}

void programa4() {
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
5._#include <stdio.h>
int main(){
    int numeros[]={12,20,30,20};
    int size = sizeof(numeros)/sizeof(numeros[0]);

    printf("Tamaño: %d\n",size);
    for(int i =0;i<size;i++){
        printf("numeros[%d]=%d\n",i,numeros[i]);
    }
    return 0;
}
}

void programa5() {
#include <stdio.h>
int main()
{
    int size;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &size);

    int arregloNumeros[size]; 

    for (int i = 0; i < size; i++)
    {
        printf("Ingrese valor en posicion [%d]: \n", i);
        int swap;
        scanf("%d", &swap);
        arregloNumeros[i] = swap; 
    }

    printf("\nValores ingresados:\n");
    for (int i = 0; i < size; i++)
    {
        printf("posicion[%d] = %d\n", i, arregloNumeros[i]);
    }

    return 0;
}
}

void programa6() {
#include <stdio.h>
int main()
{
    int size;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &size);

    int arregloNumeros[size]; 

    for (int i = 0; i < size; i++)
    {
        printf("Ingrese valor en posicion [%d]: \n", i);
        int swap;
        scanf("%d", &swap);
        arregloNumeros[i] = swap; 
    }

    printf("\nValores ingresados:\n");
    for (int i = 0; i < size; i++)
    {
        printf("posicion[%d] = %d\n", i, arregloNumeros[i]);
    }

    return 0;
}
}

void programa7() {
#include <stdio.h>
#include <string.h>

struct KeyValue
{
    char clave[50];
    char valor[100];
};

int main(){
    struct KeyValue tabla[3]={
        {"usuario","admin"},
        {"contraseña","1234"},
        {"servidor","localhost"}
    };

    printf("Tabla Clave-Valor:\n");
    for (int i=0;i<3;i++){
        printf("%s: %s\n", tabla[i].clave,tabla[i].valor);
    }
    return 0;
}
}

void programa8() {
#include<stdio.h>//libreria para imprimir y leer
#include<math.h>//libreria para operaciones matematicas tryhards

struct Triangulo {//creo estrucutra para triangulo
    int x1, y1;//datos de la primera coordenada 
    int x2, y2;//datos para la segunda coordenadaa
    int x3, y3;//datos para la tercer coordenada
};

struct Cuadrado {//creo estructura para el cuadrado
    int x1, y1;//datos de la primer coordenada
    int x2, y2;//datos de la segunda coordneda
    int x3, y3;//datos para la tercer coordenad
    int x4, y4;//datos para la cuarta coordenada
};

int main() {//inicio prgrma
    int opc;//creo varibale para mi menu
    printf("Eliga que figra quiere\n");//solo pido que elijan
    printf("1._Trianglo\n");//opc 1
    printf("2._Cuadrado\n");//opc 2
    scanf("%d", &opc);//leo la opcion
    
    switch (opc) {//un switch para irme al caso que eligieron en opc
    case 1: {//opc 1 el triangulo
        struct Triangulo tria;//estrucutra del triangulo para .tria y poder guardar
        printf("Ingrese los puntos del triangulo:\n");//indico que eligio un triangulo
        printf("x1:\n");//pido x1
        scanf("%d",&tria.x1);//leo x1
        printf("y1:\n");//pido y1
        scanf("%d",&tria.y1);//leo y1
        printf("x2:\n");//pido x2
        scanf("%d",&tria.x2);//leo x2
        printf("y2:\n");//pido y2
        scanf("%d",&tria.y2);//leo y2
        printf("x3:\n");//pido x3
        scanf("%d",&tria.x3);//leo x3
        printf("y3:\n");//pido y3
        scanf("%d",&tria.y3);//leo y3
        
        float lado1 = sqrt(pow(tria.x2 - tria.x1, 2) + pow(tria.y2 - tria.y1, 2));//saque la formula para ver distancia entre dos puntos
        float lado2 = sqrt(pow(tria.x3 - tria.x2, 2) + pow(tria.y3 - tria.y2, 2));//saque la formula para ver distancia entre dos puntos
        float lado3 = sqrt(pow(tria.x1 - tria.x3, 2) + pow(tria.y1 - tria.y3, 2));//saque la formula para ver distancia entre dos puntos
        float perimetro = lado1 + lado2 + lado3;//sumo todos los lados 
        
        float s = perimetro / 2;//sirve para calcular el semiperimetro, formula que ya existe
        float area = sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));//formula de herón
        
        printf("Perimetro del triangulo : %.2f\n", perimetro);//devuelvo el perimetro
        printf("Area dl triagulo: %.2f\n", area);//devuelvo el area
        break;//termino mi primer caso 
    }


    case 2: {//caso 2 cuadrado
        struct Cuadrado cua;//estrucutra del cradrado para .cua 
        printf("Ingrese los puntos del cuadrado:\n");//digo que eligio un cuadrado
        printf("x1:\n");//pido x1
        scanf("%d",&cua.x1);//leo x1
        printf("xy:\n");//pido y1
        scanf("%d",&cua.y1);//leo y1
        printf("x2:\n");//pido x2
        scanf("%d",&cua.x2);//leo x2
        printf("y2:\n");//pido y2
        scanf("%d",&cua.y2);//leo y2
        printf("x3:\n");//pido x3
        scanf("%d",&cua.x3);//leo x3
        printf("y3:\n");//pido y3
        scanf("%d",&cua.y3);//leo y3
        printf("x4:\n");//pido x4
        scanf("%d",&cua.x4);//leo x4
        printf("y4:\n");//pido y4
        scanf("%d",&cua.y4);//leo y4
        
        float lado = sqrt(pow(cua.x2 - cua.x1, 2) + pow(cua.y2 - cua.y1, 2));//como es un cuadrado solo calculo 1 vez el lado 
        float perimetro = 4 * lado;//calculo perimetrp
        float area = lado * lado;//calculo area
        
        printf("Perimetro: %.2f\n", perimetro);//muestro perimetro
        printf("Area: %.2f\n", area);//muestro area
        break;//fin caso 2
    }


    default://si ponen otra cosa que no sea 1 o 2
        printf("Opcion invalia\n");//para que se den cuenta que no esta bien loq ue ingresaron
        break;//fin del utimo caso
    }

    return 0;//fin del prgrma 
}
}

void programa9() {
#include <stdio.h>
#include <math.h>

struct Coordenada {
    int x;
    int y;
};

int main() {
    int opc;
    printf("Seleccione una opcion\n");
    printf("1._Cuadrado\n");
    printf("2._Triangulo\n");
    scanf("%d", &opc);

    switch (opc) {
        case 1: {
            struct Coordenada arreglo[4];
            for (int i = 0; i < 4; i++) {
                int posicion = i + 1;
                printf("Ingresa coordenada x%d: ", posicion);
                scanf("%d", &arreglo[i].x);
                printf("Ingrese la coordenada y%d: ", posicion);
                scanf("%d", &arreglo[i].y);
            }

            float ab = sqrt(pow(arreglo[1].x - arreglo[0].x, 2) + pow(arreglo[1].y - arreglo[0].y, 2));
            float bc = sqrt(pow(arreglo[2].x - arreglo[1].x, 2) + pow(arreglo[2].y - arreglo[1].y, 2));
            float dc = sqrt(pow(arreglo[3].x - arreglo[2].x, 2) + pow(arreglo[3].y - arreglo[2].y, 2));
            float ad = sqrt(pow(arreglo[0].x - arreglo[3].x, 2) + pow(arreglo[0].y - arreglo[3].y, 2));

            float perimetro = ab + bc + dc + ad;
            float area = bc * ad;  

            printf("Perimetro total: %.2f\n", perimetro);
            printf("Area: %.2f\n", area);
            break;
        }

        case 2: {
            struct Coordenada arreglo2[3];
            for (int i = 0; i < 3; i++) {
                int posicion = i + 1;
                printf("Ingresa coordenada x%d: ", posicion);
                scanf("%d", &arreglo2[i].x);
                printf("Ingrese la coordenada y%d: ", posicion);
                scanf("%d", &arreglo2[i].y);
            }

            float ac = sqrt(pow(arreglo2[1].x - arreglo2[0].x, 2) + pow(arreglo2[1].y - arreglo2[0].y, 2));
            float cd = sqrt(pow(arreglo2[2].x - arreglo2[1].x, 2) + pow(arreglo2[2].y - arreglo2[1].y, 2));
            float ad = sqrt(pow(arreglo2[2].x - arreglo2[0].x, 2) + pow(arreglo2[2].y - arreglo2[0].y, 2));

            float perimetro = ac + cd + ad;
            float s = perimetro / 2;  
            float area = sqrt(s * (s - ac) * (s - cd) * (s - ad));  

            printf("Perimetro total: %.2f\n", perimetro);
            printf("Area: %.2f\n", area);
            break;
        }

        default:
            printf("Opcion no valida.\n");
            break;
    }
    return 0;
}
}

void programa10() {
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
}

void programa11() {
#include<stdio.h>
#include<string.h>
#include<math.h>
struct EcCuadratica
{
    int a;
    int b;
    int c;
    int discriminante;
    float x1;
    float x2;
    char solucion[30];
};
int main(){
    struct EcCuadratica arreglo[2]={
        {2,3,-5,0,0.00,0.00},
        {3,7,-6,0,0.00,0.00}
    };

    for(int i=0;i<2;i++){
        int d=(arreglo[i].b*arreglo[i].b)-(4*arreglo[i].a*arreglo[i].c);
    if (d<0){
        strcpy (arreglo[i].solucion,"No  tiene  solucion");
    }else{
        int valorx1=((-1)*arreglo[i].b+sqrt(d))/2*arreglo[i].a;
        int valorx2=((-1)*arreglo[i].b-sqrt(d))/2*arreglo[i].a;
        strcpy(arreglo[i].solucion,"Tiene  solucion:");
        arreglo[i].x1=valorx1;
        arreglo[i].x2=valorx2;
       }
    }

    printf("%s|%s|%s|%s|%s|%s\n", "a", "b", "c", "x1", "x2", "Solucion");
    for (int i = 0; i < 2; i++)
    {
        printf("%d|%d|%d|%.2f|%.2f|%s\n", arreglo[i].a, arreglo[i].b, arreglo[i].c, arreglo[i].x1, arreglo[i].x2, arreglo[i].solucion);

    }
    
    return 0;
}
}

void programa12() {
#include <stdio.h>
struct Estudiante
    {
        char nombre[50];
        int edad;
        float promedio;
    };
    
int main(){
    struct Estudiante estudiante1={"Antonio Coronel",19,9.9};

    printf("Nombre: %s\n",estudiante1.nombre);
    printf("Edad: %d\n",estudiante1.edad);
    printf("Promedio: %.2f\n",estudiante1.promedio);
    return 0;
}
}

void programa13() {
#include <stdio.h>
typedef struct 
    {
       char nombre[50];
       int edad;
       float promedio;
    }Estudiante;
int main(){
    Estudiante estudiante1={"Antonio Coronel",22,9.3};
    printf("Nombre: %s\n",estudiante1.nombre);
    return 0 ;
}
}

void programa14() {
#include <stdio.h>
struct Direccion
    {
        char calle[50];
        int numero;
    };
    struct Persona
    {
       char nombre[50];
       struct Direccion domicilio;
    };
int main(){
    struct Persona persona1={"Coronel Anotnio",{"Av.Zaachila",6969}};
    printf("Nombre: %s\n",persona1.nombre);
    printf("Domicilio: %s #%d\n",persona1.domicilio.calle,persona1.domicilio.numero);
    return 0;
}
}

void programa15() {
#include <stdio.h>
struct Coordenadas
{
    char calle[50];
    char numCasa[10];
    int cp;
};

struct Direccion
{
    char colonia[50];
    struct Coordenadas domicilio;
};

struct Estudiantes
{
    int id;
    char nombre[50];
    struct Direccion vivienda;
};

int main(){

    int size;
    printf("Ingresa el tamaño de tu arreglo: ");
    scanf("%d",&size);
    struct Estudiantes arreglo[size];

    for (int i =0; i<size;i++){
        printf("\nIngrese los datos del estudiante %d\n",i+1);

        printf("id: ");
        scanf("%d",&arreglo[i].id);

        printf("Nombre: ");
        scanf("%s",&arreglo[i].nombre);

    
         printf("Colonia: ");
         scanf("%s",&arreglo[i].vivienda.colonia);
 
        
         printf("Calle: ");
         scanf("%s",arreglo[i].vivienda.domicilio.calle);
 
         
         printf("Numero de casa: ");
         scanf(" %s",arreglo[i].vivienda.domicilio.numCasa);
 
         printf("Codigo Postal: ");
         scanf("%d",&arreglo[i].vivienda.domicilio.cp);
    }
    printf("\nEstudiantes:\n");
    for (int i = 0; i < size; i++)
    {
        printf("\nEstudiante %d:\n", i + 1);
        printf("Id:%d\n", arreglo[i].id);
        printf("Nombre: %s\n", arreglo[i].nombre);
        printf("Direccion: Colonia:%s, Calle:%s, NumCasa:%s, CP:%d\n",arreglo[i].vivienda.colonia, arreglo[i].vivienda.domicilio.calle,arreglo[i].vivienda.domicilio.numCasa, arreglo[i].vivienda.domicilio.cp);
    }
    return 0;
}
}

void programa16() {
#include <stdio.h>
struct Direccion
{
    char codigo[50];
    int id;
};

struct Persona
{
    char nombre[50];
    struct Direccion modelo;
    char marca[50];
    float peso;
    int plazas;
    int caballos;
    float velocidad;
    char ensamblador[50];
    float precio;
    char color[50];
    int stock;
};

int main(){
    int n;
    printf("Ingrese el número de carros: ");
    scanf("%d",&n);
    getchar();

    struct Persona personas[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nIngrese los datos del carro %d: \n",i+1);

        printf("Nombre del carro: ");
        scanf("%s",personas[i].nombre);
        printf("Codigo: ");
        scanf("%s",personas[i].modelo.codigo);
        printf("Id: ");
        scanf("%d",&personas[i].modelo.id);

        printf("Marca del carro: ");
        scanf("%s",personas[i].marca);
        printf("Peso: ");
        scanf("%f",&personas[i].peso);
        printf("Plazas: ");
        scanf("%d",&personas[i].plazas);
        printf("Caballos: ");
        scanf("%d",&personas[i].caballos);
        printf("Velocidad maxima: ");
        scanf("%f",&personas[i].velocidad);
        printf("Ensamblador del carro: ");
        scanf("%s",personas[i].ensamblador);
        printf("Precio: ");
        scanf("%f",&personas[i].precio);
        printf("Color del carro: ");
        scanf("%s",personas[i].color);
        printf("Stock: ");
        scanf("%d",&personas[i].stock);
    }
    
    printf("\n%-15s | %-10s | %-8s | %-15s | %-8s | %-6s | %-8s | %-8s | %-15s | %-15s | %-10s | %-5s\n",
        "Nombre", "Codigo", "ID", "Marca", "Peso", "Plazas", "Caballos", "Velocidad", "Ensamblador", "Precio", "Color", "Stock");
 printf("------------------------------------------------------------------------------------------------------------------------------------------------\n");

 for (int i = 0; i < n; i++)
 {
     printf("%-15s | %-10s | %-8d | %-15s | %-8.2f | %-6d | %-8d | %-8.2f | %-15s | %-15.2f | %-10s | %-5d\n",
            personas[i].nombre, personas[i].modelo.codigo, personas[i].modelo.id, personas[i].marca, 
            personas[i].peso, personas[i].plazas, personas[i].caballos, personas[i].velocidad,
            personas[i].ensamblador, personas[i].precio, personas[i].color, personas[i].stock);
 }

 return 0;
}
}

void programa17() {
#include <stdio.h>
struct Direccion
{
    char calle[50];
    int numero;
};

struct Persona
{
    char nombre[50];
    struct Direccion domicilio;
};

int main(){
    int n;
    printf("Ingrese el número de personas: ");
    scanf("%d",&n);
    getchar();

    struct Persona personas[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nIngrese los datos de la persona %d: \n",i+1);
        printf("Nombre: ");
        scanf("%s",personas[i].nombre);
        printf("Calle: ");
        scanf("%s",personas[i].domicilio.calle);
        printf("Numero: ");
        scanf("%d",&personas[i].domicilio.numero);
        getchar();
    }
    printf("\n%-20s | %-20s | %-10s\n","Nombre","Direccion","Numero");
    printf("--------------------------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("%-20s | %-20s | %-10d\n", 
        personas[i].nombre, personas[i].domicilio.calle,personas[i].domicilio.numero);
    }
    
    return 0;
}
}

void programa18() {
#include <stdio.h>
struct Usuario
{
    char nombre[50];
    int edad;
    char correo[50];
};

int main(){
    struct Usuario usuario1;
    printf("Ingrese su nombre: ");
    scanf("%s", usuario1.nombre);

    printf("Ingrese su edad: ");
    scanf("%d",&usuario1.edad);

    printf("Ingrese su correo: ");
    scanf("%s",usuario1.correo);

    printf("\nDatos de usuarios:");
    printf("\nNombre: %s",usuario1.nombre);
        printf("\nEdad: %d",usuario1.edad);
        printf("\nCorreo: %s\n",usuario1.correo);
    return 0;
}
}

void programa19() {
#include <stdio.h>
#include <string.h>

#define FILAS 2  
#define COLUMNAS 2

typedef struct {
    char nombre[50];
    int edad;
} Persona;

typedef struct {
    char productos[50];
    float precio;
} Producto;

typedef union {
    Persona persona;
    Producto producto;
} Dato;

typedef struct {
    Dato valor;
    int tipo;
} Celda;

int main() {
    Celda matriz[FILAS][COLUMNAS];

 
    strcpy(matriz[0][0].valor.persona.nombre, "Roberto");
    matriz[0][0].valor.persona.edad = 25;
    matriz[0][0].tipo = 1;

    strcpy(matriz[0][1].valor.persona.nombre, "Alejandro");
    matriz[0][1].valor.persona.edad = 30;
    matriz[0][1].tipo = 1;


    strcpy(matriz[1][0].valor.producto.productos, "Conejo");
    matriz[1][0].valor.producto.precio = 88.99;
    matriz[1][0].tipo = 2;

    strcpy(matriz[1][1].valor.producto.productos, "Golden");
    matriz[1][1].valor.producto.precio = 1377.99;
    matriz[1][1].tipo = 2;
    

    printf("Recorriendo la matriz de uniones con estructuras:\n");

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Celda [%d][%d]: ", i, j);
            if (matriz[i][j].tipo == 1) {
                printf("Persona - Nombre: %s, Edad: %d\n",
                    matriz[i][j].valor.persona.nombre,
                    matriz[i][j].valor.persona.edad);
            } else if (matriz[i][j].tipo == 2) {
                printf("Producto - Nombre: %s, Precio: %.2f\n",
                    matriz[i][j].valor.producto.productos,
                    matriz[i][j].valor.producto.precio);
            }
        }
    }

    return 0;
}
}

void programa20() {
#include <stdio.h>
#define FILAS 3
#define COLUMNAS 3

int main(){
    
    char matriz[FILAS][COLUMNAS][10]; 

    
    printf("Introduce tus palabras: \n");
    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            printf("Introduce la palaba en la posi: [%d][%d]: ", i, j);
            scanf("%9s", matriz[i][j]); 
        }
    }

    printf("Recorriendo la matriz:\n");
    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            printf("| %-10s |", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
}

void programa21() {
#include <stdio.h>
#define FILAS 2
#define COLUMNAS 2

struct Lap {
    int id;
    char nombre[20]; 
};

int main() {
    struct Lap matriz[FILAS][COLUMNAS] = {
        {{2, "DEL"}, {5, "HP"}},
        {{8, "Mac"}, {3, "Asus"}}
    };

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("| ID: %d, Nombre: %s ", matriz[i][j].id, matriz[i][j].nombre);
        }
        printf("|\n");
    }

    return 0;
}
}

void programa22() {
#include <stdio.h>
#define FILAS 2
#define COLUMNAS 2

struct Lap {
    int id;
    char nombre[20]; 
};

int main() {
    struct Lap matriz[FILAS][COLUMNAS] = {
        {{2, "DEL"}, {5, "HP"}},
        {{8, "Mac"}, {3, "Asus"}}
    };

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("| ID: %d, Nombre: %s ", matriz[i][j].id, matriz[i][j].nombre);
        }
        printf("|\n");
    }

    return 0;
}
}

void programa23() {
#include <stdio.h>
#define FILAS 6
#define COLUMNAS 6

int main() {
    int matriz[FILAS][COLUMNAS] = {
        {1,2,3,4,6,3},
        {4,5,6,6,4,2},
        {7,8,9,0,5,3},
        {1,2,3,4,6,3},
        {4,5,6,6,4,2},
        {7,8,9,0,5,3}
    };

    printf("Recorriendo la matriz:\n");

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {

            if (j % 2 == 0) { 
                printf("|%d ", matriz[i][j]);
            } else { 
                printf("|# ");
            }
        }
        printf("\n");
    }

    return 0;
}
}

void programa24() {
#include <stdio.h>

#define FILAS 3
#define COLUMNAS 2  

int main() {
    float matriz[FILAS][COLUMNAS];  

    float suma[FILAS], resta[FILAS], multi[FILAS], divi[FILAS];


    printf("Introduce tus numeros: \n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Introduce el num en la posi [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }



    for (int i = 0; i < FILAS; i++) {
        suma[i] = matriz[i][0] + matriz[i][1];
        resta[i] = matriz[i][0] - matriz[i][1];
        multi[i] = matriz[i][0] * matriz[i][1];
        divi[i] = matriz[i][0] / matriz[i][1] ; 
    }


    printf("\n| %-10s | %-10s | %-10s | %-10s | %-10s | %-10s |\n", "Val 1", "Val 2", "Suma", "Resta", "Multi", "Div");

    
    for (int i = 0; i < FILAS; i++) {
        printf("| %-10.2f | %-10.2f | %-10.2f | %-10.2f | %-10.2f | %-10.2f |\n", 
               matriz[i][0], matriz[i][1], suma[i], resta[i], multi[i], divi[i]);
    }

    return 0;
}
}

void programa25() {
#include <stdio.h>
#include <string.h>

#define FILAS 2  
#define COLUMNAS 2

typedef struct {
    char nombre[50];
    char raza[50];
} Animal;

typedef union {
    Animal animal;
} Dato;

typedef struct {
    Dato valor;
    int tipo; 
} Celda;

int main() {
    Celda matriz[FILAS][COLUMNAS];

    printf("Ingresa los datos para la matriz de animales:\n");

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("\nCelda [%d][%d]:\n", i, j);
            printf("Tipo de animal (1 = Perro, 2 = Gato): ");
            scanf("%d", &matriz[i][j].tipo);

            switch (matriz[i][j].tipo) {
                case 1:
                    printf("Ingresaste un Perro.\n");
                    printf("Nombre: ");
                    scanf("%s", matriz[i][j].valor.animal.nombre);

                    printf("Raza: ");
                    scanf("%s", matriz[i][j].valor.animal.raza);
                    break;

                case 2:
                    printf("Ingresaste un Gato.\n");
                    printf("Nombre: ");
                    scanf("%s", matriz[i][j].valor.animal.nombre);

                    printf("Raza: ");
                    scanf("%s", matriz[i][j].valor.animal.raza);
                    break;

                default:
                    printf("Tipo no válido. Se dejará vacío.\n");
                    break;
            }
        }
    }


    printf("\nMostrando la matriz de animales:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Celda [%d][%d]: ", i, j);
            if (matriz[i][j].tipo == 1) {
                printf("Perro - Nombre: %s, Raza: %s\n", 
                    matriz[i][j].valor.animal.nombre, 
                    matriz[i][j].valor.animal.raza);
            } else if (matriz[i][j].tipo == 2) {
                printf("Gato - Nombre: %s, Raza: %s\n", 
                    matriz[i][j].valor.animal.nombre, 
                    matriz[i][j].valor.animal.raza);
            } else {
                printf("No se ingresó un animal válido.\n");
            }
        }
    }

    return 0;
}
}

void programa26() {
#include<stdio.h>
struct Tabla
{
    int valor1;
    int  valor2;
    int  resultado;
};

int main(){
    struct Tabla arreglo[3]={
        {1,3,0},
        {2,3,0},
        {3,3,0}
    };

    for(int i=0;i<3;i++){
        int resultado =arreglo[i].valor1*arreglo[i].valor2;
        arreglo[i].resultado=resultado;
    }
    for (int i=0;i<3;i++){
        printf("%d x %d = %d\n",arreglo[i].valor1, arreglo[i].valor2,arreglo[i].resultado);
    }
 return 0;
}
}

void programa27() {
#include <stdio.h>
int main(){
    char buffer[100];
    float pi=3.1416;
    sprintf(buffer,"The value of pi is %.2f",pi);
    printf("%s\n",buffer);
    return 0;
}
}

void programa28() {
#include <stdio.h>
int main(){

    int fno, sno, *ptr, *qtr, sum;

    printf("\n\n Pointer: Add tow numbers:\n");
    printf("--------------------------------\n");

    printf("Input the first number:");
    scanf("%d",&fno);

    printf("Input the second number:");
    scanf("%d",&sno);

    ptr=&fno;
    qtr=&sno;
    printf("\n\n Pointer1: %p",ptr);
    printf("\n\n Pointer2: %p",qtr);

    sum=*ptr +*qtr;
    printf("\n\n The sum of the entered numbers is: %d\n\n",sum);
    return 0;
}
}

void programa29() {
/**
 * Una union en c es similar a la estructura, 
 * */ 
#include <stdio.h>
union Dato
{
    int entero;
    float decimal;
    char texto[20];
};

int main(){
    union Dato variable;
    
    variable.entero=42;
    printf("Entero: %d\n",variable.entero);

    variable.decimal=3.14;
    printf("Decimal: %.2f\n",variable.texto);

    sprintf(variable.texto,"Hola C");
    printf("Texto: %s\n",variable.texto);

    printf("\nDespues de asignar un texto: \n");
    printf("Entero: %d\n",variable.entero);
    printf("Decimal: %.2f\n",variable.decimal);
    printf("Texto: %s\n",variable.texto);


    return 0;
}
}

void programa30() {
#include <stdio.h>
#define FILAS 3
#define COLUMNAS 3
int main(){
    int matriz [FILAS][COLUMNAS]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    printf("Reccoriendo la matriz:\n");
    for(int i=0;i<FILAS;i++){
        for (int j = 0; j < COLUMNAS; j++)
        {
            printf
            ("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
}

void programa31() {
#include <stdio.h>
int main(){
    int a,b,c,d,e;

    printf("Ingrese valor A\n");
    scanf("%d",&a);
    printf("Ingrese valor B\n");
    scanf("%d",&b);
    printf("Ingrese valor C\n");
    scanf("%d",&c);
    printf("Ingrese valor D\n");
    scanf("%d",&d);
    printf("Ingrese valor E\n");
    scanf("%d",&e);

    int *const pa=&a;
    int *const pb=&b;
    int *const pc=&c;
    int *const pd=&d;
    int *const pe=&e;

    printf("Valor ingresados; A=%p\n",&pa);
    printf("Valor ingresados; B=%p\n",&pd);
    printf("Valor ingresados; C=%p\n",&pc);
    printf("Valor ingresados; D=%p\n",&pd);
    printf("Valor ingresados; E=%p\n",&pe);

    int suma=*pa+*pa;
    printf("Resultado de la suma: %d\n",suma);

    *pa=suma;
    printf("Valor nuevo A=%d\n",*pa);

    int resta=*pb-*pb;
    printf("Resultado de la resta: %d\n",resta);

    *pb=resta;
    printf("Valor nuevo B=%d\n",*pb);

    int multi=(*pc)*(*pc);
    printf("Resultado de la multiplicacion: %d\n",multi);

    *pc=multi;
    printf("Valor nuevo C=%d\n",*pc);

    float divi=(*pd)/(*pd);
    printf("Resultado de la division: %f\n",divi);

    *pd=divi;
    printf("Valor nuevo D=%d\n",*pd);

    return 0;
}
}

void programa32() {
#include <stdio.h>

int main() {

    printf("\033[7;34m");
    printf("***** ");
    printf("\033[0m");  // Resetear color
    printf("\033[7;31m");
    printf("**********\n");

    printf("\033[0m");  // Resetear color
    printf("\033[7;34m");
    printf("***** ");
    printf("\033[0m");  // Resetear color
    printf("\033[7;37m");
    printf("**********\n");

    printf("\033[0m");  // Resetear color
    printf("\033[7;31m");
    printf("********");
    printf("\033[0m");  // Resetear color
    printf("\033[7;31m");
    printf("********\n");

    printf("\033[0m");  // Resetear color
    printf("\033[7;37m");
    printf("********");
    printf("********\n");

    printf("\033[0m");  // Resetear color
    printf("\033[7;31m");
    printf("********");
    printf("********\n");

    printf("\033[0m");  // Resetear color
    printf("\033[7;37m");
    printf("********");
    printf("********\n");

    printf("\033[0m");  // Resetear color
    printf("\033[7;31m");
    printf("********");
    printf("********\n");
    printf("\033[0m");  // Resetear color

    return 0;
}
}

void programa33() {
// Función para cambiar el color
void setColor(const char* color) {
    printf("%s", color);
}
int main(){
    printf("\033[0m"); //limpio
    setColor("\033[7;32m");//pongo color
    printf("Bandera de mexico");
    printf("\033[0m"); //limpio
    printf("\n");
    printf("\033[0m"); //limpio


    for (int i = 0; i < 5; i++)
    {
        printf("\033[0m"); //limpio
        //verde
    setColor("\033[7;32m");//pongo color
    printf("%4s","*********");
    printf("\033[0m"); //limpio
    //blanco
    setColor("\033[7;37m");//pongo color
    printf("%4s","*********");
    printf("\033[0m"); //limpio
    //rojo
    setColor("\033[7;31m");//pongo color
    printf("%4s","*********");
    printf("\033[0m"); //limpio
    printf("\n");
    }
    
    return 0;
}
}

void programa34() {
#include <stdio.h>
void setColor(const char* color){
    printf("%s",color);
}

int main(){
    printf("\033[2j");
    setColor("\033[4;36m");
    printf("\n¡Bienvenido al programa con marco y colores!\n");

    setColor("\n033[0m");
    setColor("\033[7;34m");
    printf("\n¡Bienvenido al progrma con marco y colores!\n");
    setColor("\033[0m");
    setColor("\n033[4:34m");
    printf("\n¡Bienvenido al programa con marco y colores 2!\n");
    return 0;
}
}

void programa35() {
#include <stdio.h>
void setColor(const char* color){
    printf("%s",color);
}

int main(){
    printf("\033[2j");
    setColor("\033[4;36m");
    printf("\n¡Bienvenido al programa con marco y colores!\n");

    setColor("\n033[0m");
    setColor("\033[7;34m");
    printf("\n¡Bienvenido al progrma con marco y colores!\n");
    setColor("\033[0m");
    setColor("\n033[4:34m");
    printf("\n¡Bienvenido al programa con marco y colores 2!\n");
    return 0;
}
}

void programa36() {
#include <stdio.h>

void pedirMatriz(int m[3][3], char nombre) {
    printf("Dame los nums de la matris %c:\n", nombre);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c[%d][%d]: ", nombre, i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
}

void imprimirMatrizHorizontal(int a[3][3], char op, int b[3][3], int r[3][3]) {
    for (int i = 0; i < 3; i++) {
        printf("* %2d  %2d  %2d *   %c   * %2d  %2d  %2d *   =   * %2d  %2d  %2d *\n", 
            a[i][0], a[i][1], a[i][2], op, b[i][0], b[i][1], b[i][2], r[i][0], r[i][1], r[i][2]);
        printf("*            *       *            *       *            *\n");
    }
}

void imprimirMatrizEscalar(int a[3][3], int esc, int r[3][3]) {
    for (int i = 0; i < 3; i++) {
        printf("* %2d  %2d  %2d *   x   %d   =   * %2d  %2d  %2d *\n", 
            a[i][0], a[i][1], a[i][2], esc, r[i][0], r[i][1], r[i][2]);
        printf("*            *       *            *\n");
    }
}

void imprimirDeterminante(int m[3][3], int det) {
    for (int i = 0; i < 3; i++) {
        printf("* %2d  %2d  %2d *\n", m[i][0], m[i][1], m[i][2]);
        printf("*            *\n");
    }
    printf("Determinante: %d\n", det);
}

void sumar(int a[3][3], int b[3][3], int r[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            r[i][j] = a[i][j] + b[i][j];
}

void restar(int a[3][3], int b[3][3], int r[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            r[i][j] = a[i][j] - b[i][j];
}

void escalar(int a[3][3], int r[3][3], int esc) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            r[i][j] = a[i][j] * esc;
}

int sarrus(int m[3][3]) {
    int positivo = 0, negativo = 0;

    for (int i = 0; i < 3; i++) {
        int producto = 1;
        for (int j = 0; j < 3; j++) {
            producto *= m[j][(i + j) % 3];
        }
        positivo += producto;
    }

    for (int i = 0; i < 3; i++) {
        int producto = 1;
        for (int j = 0; j < 3; j++) {
            producto *= m[j][(i - j + 3) % 3];
        }
        negativo += producto;
    }

    return positivo - negativo;
}

int main() {
    int A[3][3], B[3][3], R[3][3];
    int opcion, esc;

    pedirMatriz(A, 'A');
    pedirMatriz(B, 'B');

    printf("\nElige tu opc:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Escalar\n");
    printf("4. Determinante\n");
    printf("Elige una opc: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            sumar(A, B, R);
            imprimirMatrizHorizontal(A, '+', B, R);
            break;
        case 2:
            restar(A, B, R);
            imprimirMatrizHorizontal(A, '-', B, R);
            break;
        case 3:
            printf("Pon tu num para el escalar: ");
            scanf("%d", &esc);
            escalar(A, R, esc);
            imprimirMatrizEscalar(A, esc, R);
            break;
        case 4:
            imprimirDeterminante(A, sarrus(A));
            break;
        default:
            printf("Opc invalida .\n");
    }

    return 0;
}
}

void programa37() {
#include <stdio.h>

int suma(int a, int b) {
    int suma = 0;
    
    // Asegurar que a sea menor que b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        suma += i;
    }

    return suma;
}

void imprimir(int resultado) {
    printf("La suma del rango es: %d\n", resultado);
}

int main() {
    int num1, num2;
    
    printf("Dame tu num 1: ");
    scanf("%d", &num1);
    
    printf("Dame tu num 2: ");
    scanf("%d", &num2);

    int resultado = suma(num1, num2);
    imprimir(resultado);

    return 0;
}
}

void programa38() {
#include <stdio.h>

void calor(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f grados Celsius son %.2f grados Fahrenheit.\n", celsius, fahrenheit);
}

int main() {
    float grados;

    printf("Dame una temperatura en grados Celsius: ");
    scanf("%f", &grados);

    calor(grados);

    return 0;
}
}

void programa39() {
#include <stdio.h>

void cak(float celsius) {
    float kelvin = celsius + 273.15;
    printf("%.2f grados Celsius son %.2f grados Kelvin.\n", celsius, kelvin);
}

int main() {
    float grados;

    printf("Dame una temperatura en grados Celsius: ");
    scanf("%f", &grados);

    cak(grados);

    return 0;
}
}

void programa40() {
#include <stdio.h>
#define TAM 3  
void llenarMatriz(char *nombre, int matriz[TAM][TAM]) {
    printf(" %s:\n", nombre);
    for (int i = 0; i < TAM; i++) {
    for (int j = 0; j < TAM; j++) {
            printf("Mete el num en [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
                 }
    }
}

void imprimirMatriz(char *nombre, int matriz[TAM][TAM]) {
    printf("%s:\n", nombre);
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
         printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}


    void productoEscalar(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int resultado[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }
}


int determinanteSarrus(int matriz[TAM][TAM]) {
    int suma = 0, resta = 0;   
        for (int i = 0; i < TAM; i++) {
        int producto = 1;
        for (int j = 0; j < TAM; j++) {
         producto *= matriz[j][(i + j) % TAM];
        }
        suma += producto;
    }
    for (int i = 0; i < TAM; i++) {
        int producto = 1;
       for (int j = 0; j < TAM; j++) {
            producto *= matriz[j][(i - j + TAM) % TAM];
            }
        resta += producto;
    }
    return suma - resta;
}

/*int determinanteSarrus(int matriz[TAM][TAM]) {
int det = 0;
det =  matriz[0][0]*matriz[1][1]*matriz[2][2]
             + matriz[0][1]*matriz[1][2]*matriz[2][0]
         + matriz[0][2]*matriz[1][0]*matriz[2][1]
         - matriz[0][2]*matriz[1][1]*matriz[2][0]
         - matriz[0][0]*matriz[1][2]*matriz[2][1]
         - matriz[0][1]*matriz[1][0]*matriz[2][2];
    return det;
}
*/


int main() {
    int matrizA[TAM][TAM], matrizB[TAM][TAM], matrizResultado[TAM][TAM];

    llenarMatriz("Matriz A", matrizA);
    llenarMatriz("Matriz B", matrizB);

    imprimirMatriz("Matriz A", matrizA);
    imprimirMatriz("Matriz B", matrizB);

    productoEscalar(matrizA, matrizB, matrizResultado);
    imprimirMatriz("Producto escalar:", matrizResultado);

    int detA = determinanteSarrus(matrizA);
    int detB = determinanteSarrus(matrizB);

    printf("Determinante de Matriz A : %d\n", detA);
    printf("Determinante de Matriz B : %d\n", detB);

    return 0;
}
}

void programa41() {
#include <stdio.h>

void divisa(float dolares) {
    float tipoCambio = 20.10;
    float pesos = dolares * tipoCambio;
    printf("%.2f dólares son %.2f pesos mexicanos (a un tipo de cambio de %.2f).\n", dolares, pesos, tipoCambio);
}

int main() {
    float cantidad;

    printf("Dame la cantidad en dólares: ");
    scanf("%f", &cantidad);

    divisa(cantidad);

    return 0;
}
}

void programa42() {
#include <stdio.h>
#include <math.h>

void formula_general(float a, float b, float c) {
    float discriminante = b * b - 4 * a * c;

    if (a == 0) {
        printf("No es una ecuación de segundo grado (a no puede ser 0).\n");
    } else if (discriminante > 0) {
        float x1 = (-b + sqrt(discriminante)) / (2 * a);
        float x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Soluciones reales diferentes:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else if (discriminante == 0) {
        float x = -b / (2 * a);
        printf("Solución real doble:\n");
        printf("x = %.2f\n", x);
    } else {
        float parteReal = -b / (2 * a);
        float parteImaginaria = sqrt(-discriminante) / (2 * a);
        printf("Soluciones complejas:\n");
        printf("x1 = %.2f + %.2fi\n", parteReal, parteImaginaria);
        printf("x2 = %.2f - %.2fi\n", parteReal, parteImaginaria);
    }
}

int main() {
    float a, b, c;

    printf("Resolver ecuación ax^2 + bx + c = 0\n");
    printf("Dame el valor de a: ");
    scanf("%f", &a);
    printf("Dame el valor de b: ");
    scanf("%f", &b);
    printf("Dame el valor de c: ");
    scanf("%f", &c);

    formula_general(a, b, c);

    return 0;
}
}

void programa43() {
#include <stdio.h>
//1
float potencia(float base, int exp) {
    float resultado = 1;
    for (int i = 0; i < exp; i++) {
        resultado =resultado*base;  
    }
    return resultado;
}
void imprimir(float resultado) {
    printf("\nResultados:\nEl resultado de tu operacin es: %.2f\n", resultado);
}

int main() {
    //1
    float a;
    int b;  
    printf("Dame tu num base: ");
    scanf("%f", &a);
    printf("Dame tu exponente ");
    scanf("%d", &b);
    float resultado = potencia(a, b);
    imprimir(resultado);

    return 0;
}
}

void programa44() {
#include <stdio.h>

void impares(int numero) {
    printf("Numeros impares del 0 al %d:\n", numero);
    for (int i = 0; i <= numero; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int num;

    printf("Dame un numero: ");
    scanf("%d", &num);

    impares(num);

    return 0;
}
}

void programa45() {
#include <stdio.h>

void kafrio(float kelvin) {
    float fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;
    printf("%.2f grados Kelvin son %.2f grados Fahrenheit.\n", kelvin, fahrenheit);
}

int main() {
    float grados;

    printf("Dame una temperatura en grados Kelvin: ");
    scanf("%f", &grados);

    kafrio(grados);

    return 0;
}
}

void programa46() {
#include <stdio.h>

#define TAM 3  

void llenarMatriz(int matriz[TAM][TAM]) {
    printf("\nLlena la matris 3x3:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatris ingresada:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicarMatrices(int A[TAM][TAM], int B[TAM][TAM], int resultado[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < TAM; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void copiarMatriz(int origen[TAM][TAM], int destino[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            destino[i][j] = origen[i][j];
        }
    }
}

void elevarMatriz(int matriz[TAM][TAM], int exponente) {
    int resultado[TAM][TAM];
    int temp[TAM][TAM];

    copiarMatriz(matriz, resultado);

    for (int e = 1; e < exponente; e++) {
        copiarMatriz(resultado, temp);
        multiplicarMatrices(temp, matriz, resultado);
    }

    printf("\nMatriz elevada a la %d:\n", exponente);
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[TAM][TAM];
    int exponente;

    llenarMatriz(matriz);

    printf("Ingesa tunum: ");
    scanf("%d", &exponente);

    if (exponente < 1) {
        printf("El exponente debe ser mayor o igual a 1.\n");
    } else {
        elevarMatriz(matriz, exponente);
    }

    return 0;
}
}

void programa47() {
#include <stdio.h>

void llenarMatriz(int matriz[3][3]) {
    printf("Ingresa los nums:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Num [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void transponerMatriz(int matriz[3][3], int transpuesta[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}

int main() {
    int matriz[3][3];
    int transpuesta[3][3];

    llenarMatriz(matriz);
    transponerMatriz(matriz, transpuesta);

    printf("\nMatriz ingresada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transpuesta:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transpuesta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
}

void programa48() {
#include <stdio.h>

void ingresarNumeros(int matriz[3][3]) {
    printf("Ingresa los num para la matris 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Num [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void procesarVector(int matriz[3][3]) {
    int vector[3];
    int resultado[3] = {0, 0, 0};

    printf("\nIngresa los valores del vector:\n");
    for (int i = 0; i < 3; i++) {
        printf("Vector[%d]: ", i);
        scanf("%d", &vector[i]);
    }

    for (int i = 0; i < 3; i++) {
        resultado[i] = 0;
        for (int j = 0; j < 3; j++) {
            resultado[i] += matriz[i][j] * vector[j];
        }
    }


    printf("\nResultado de la mutli:\n");
    for (int i = 0; i < 3; i++) {
        printf("Resultado[%d] = %d\n", i, resultado[i]);
    }
}

int main() {
    int matriz[3][3];

    ingresarNumeros(matriz);
    procesarVector(matriz);

    return 0;
}
}

void programa49() {
#include <stdio.h>

int mayor(int a, int b, int c) {
    int resultado = a;

    if (b > resultado) {
        resultado = b;
    }
    if (c > resultado) {
        resultado = c;
    }

    return resultado;
}

void imprimir(int resultado) {
    printf("El numero mayor es: %d\n", resultado);
}

int main() {
    int a, b, c;
    
    printf("Dame tu num 1: ");
    scanf("%d", &a);
    
    printf("Dame tu num 2: ");
    scanf("%d", &b);
    
    printf("Dame tu num 3: ");
    scanf("%d", &c);
    
    int resultado = mayor(a, b, c);
    imprimir(resultado);

    return 0;
}
}

void programa50() {
#include <stdio.h>

int mayor(int a, int b, int c) {
    int resultado = a;

    if (b > resultado) {
        resultado = b;
    }
    if (c > resultado) {
        resultado = c;
    }

    return resultado;
}

void imprimir(int resultado) {
    printf("El numero mayor es: %d\n", resultado);
}

int main() {
    int a, b, c;
    
    printf("Dame tu num 1: ");
    scanf("%d", &a);
    
    printf("Dame tu num 2: ");
    scanf("%d", &b);
    
    printf("Dame tu num 3: ");
    scanf("%d", &c);
    
    int resultado = mayor(a, b, c);
    imprimir(resultado);

    return 0;
}
}

void programa51() {
#include <stdio.h>

void numpalabra(int numero) {
    switch (numero) {
        case 1:
            printf("1 = fortnite\n");
            break;
        case 2:
            printf("2 = fut\n");
            break;
        case 3:
            printf("3 = perro\n");
            break;
        case 4:
            printf("4 = mata\n");
            break;
        case 5:
            printf("5 = roto\n");
            break;
        case 6:
            printf("6 = kosako\n");
            break;
        case 7:
            printf("7 = karat\n");
            break;
        case 8:
            printf("8 = vape\n");
            break;
        case 9:
            printf("9 = ziu\n");
            break;
        default:
            printf("Número fuera de rango. Solo del 1 al 9.\n");
    }
}

int main() {
    int num;

    printf("Dame un número del 1 al 9: ");
    scanf("%d", &num);

    numpalabra(num);

    return 0;
}
}

void programa52() {
#include <stdio.h>
#include <stdbool.h>


bool esRaizExacta(int num, int* raiz) {
    for (int i = 1; i * i <= num; i++) {
        if (i * i == num) {
            *raiz = i;
            return true;
        }
    }
    return false;
}


void llenarMatriz(char matriz[][100], int tam) {
    printf("\nLlena la matriz %dx%d:\n", tam, tam);
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("Posición [%d][%d]: ", i, j);
            scanf(" %c", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(char matriz[][100], int tam) {
    printf("\nMatriz ingresada:\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

void convertirAMatrizLineal(char matriz[][100], char arreglo[], int tam, int* longitud) {
    int pos = 0;
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            arreglo[pos++] = matriz[i][j];
        }
    }
    *longitud = pos;
}


void imprimirArreglo(char arreglo[], int longitud) {
    printf("\nArreglo lineal:\n");
    for (int i = 0; i < longitud; i++) {
        printf("%c ", arreglo[i]);
    }
    printf("\n");
}

int main() {
    int num, raiz;
    bool valido = false;
    char matriz[100][100];
    char arreglo[10000];
    int longitud = 0;

    while (!valido) {
        printf("Ingresa tu num con riz exacta: ");
        scanf("%d", &num);

        valido = esRaizExacta(num, &raiz);
        if (!valido) {
            printf("No es exacta.\n");
        }
    }

    llenarMatriz(matriz, raiz);
    imprimirMatriz(matriz, raiz);
    convertirAMatrizLineal(matriz, arreglo, raiz, &longitud);
    imprimirArreglo(arreglo, longitud);

    return 0;
}
}

void programa53() {
#include <stdio.h>
#include <stdbool.h>


bool esRaizExacta(int num, int* raiz) {
    for (int i = 1; i * i <= num; i++) {
        if (i * i == num) {
            *raiz = i;
            return true;
        }
    }
    return false;
}


void llenarMatriz(char matriz[][100], int tam) {
    printf("\nLlena la matriz %dx%d:\n", tam, tam);
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("Posición [%d][%d]: ", i, j);
            scanf(" %c", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(char matriz[][100], int tam) {
    printf("\nMatriz ingresada:\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

void convertirAMatrizLineal(char matriz[][100], char arreglo[], int tam, int* longitud) {
    int pos = 0;
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            arreglo[pos++] = matriz[i][j];
        }
    }
    *longitud = pos;
}


void imprimirArreglo(char arreglo[], int longitud) {
    printf("\nArreglo lineal:\n");
    for (int i = 0; i < longitud; i++) {
        printf("%c ", arreglo[i]);
    }
    printf("\n");
}

int main() {
    int num, raiz;
    bool valido = false;
    char matriz[100][100];
    char arreglo[10000];
    int longitud = 0;

    while (!valido) {
        printf("Ingresa tu num con riz exacta: ");
        scanf("%d", &num);

        valido = esRaizExacta(num, &raiz);
        if (!valido) {
            printf("No es exacta.\n");
        }
    }

    llenarMatriz(matriz, raiz);
    imprimirMatriz(matriz, raiz);
    convertirAMatrizLineal(matriz, arreglo, raiz, &longitud);
    imprimirArreglo(arreglo, longitud);

    return 0;
}
}

void programa54() {
#include <stdio.h>

int mayor(int a, int b) {
    int resultado = 0;
    if (a < b) {
        resultado = b;
    } else {
        resultado = a;
    }
    return resultado;
}

void imprimir(int resultado) {
    printf("El numero mayor es: %d\n", resultado);
}

int main() {
    int a2, b2;
    printf("Dame tu num 1: ");
    scanf("%d", &a2);
    printf("Dame tu num 2: ");
    scanf("%d", &b2);
    
    int resultado = mayor(a2, b2);
    imprimir(resultado);

    return 0;
}
}

void programa55() {
#include <stdio.h>
int suma(int a,int b){
    return a+b;
}
int resta (int a, int b){
    int resultado = a-b;
    return resultado;
}
int multiplicar(int a){
    return a*a;
}
float divi(int a, int b){
    return a/b;
}
void imprimir(int a, int b,int c, float d){
    printf("\n Retultados: \n Suma %d \n Resta %d \n Multiplicacion %d \n Divi %.2f");
}
int main(){
    //Mnadar a llamar las funciones
    int op1=suma(3,2);
    int op2=resta(5,3);
    int op3=multiplicar(3);
    float op4=divi(5,3);
    imprimir (op1,op2,op3,op4);
    return 0;
}
}

void programa56() {
#include <stdio.h>

void frio(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f grados Fahrenheit son %.2f grados Celsius.\n", fahrenheit, celsius);
}

int main() {
    float grados;

    printf("Dame una temperatura en grados Fahrenheit: ");
    scanf("%f", &grados);

    frio(grados);

    return 0;
}
}

void programa57() {
#include <stdio.h>
#define PI 3.1416
union Dato {
    float resultado;
};

// figuras 2D
float cuadrado(float lado) {
    return lado * lado;
}

float triangulo(float base, float altura) {
    return (base * altura) / 2;
}

float rectangulo(float base, float altura) {
    return base * altura;
}

float circulo(float radio) {
    return PI * radio * radio;
}

float trapecio(float base_mayor, float base_menor, float altura) {
    return ((base_mayor + base_menor) / 2) * altura;
}

//  figuras 3D
float cubo(float lado) {
    return lado * lado * lado;
}

float piramide(float base, float altura) {
    return (base * altura) / 3;
}

float caja_rectangular(float largo, float ancho, float altura) {
    return largo * ancho * altura;
}

float esfera(float radio) {
    return (4.0 / 3.0) * PI * radio * radio * radio;
}

float cono(float radio, float altura) {
    return (1.0 / 3.0) * PI * radio * radio * altura;
}


void imprimir(float resultado) {
    printf("\nResultado: %.2f\n", resultado);
}

int main() {
    int opc;
    union Dato figura[1]; 
    
    printf("\nElige la dimnsion de tu figura:");
    printf("\n1. Figuras 2D");
    printf("\n2. Figuras 3D");
    printf("\nOpc: ");
    scanf("%d", &opc);
    
    if (opc == 1) {
        printf("\nElige la figura 2D que deseas calcular su area:");
        printf("\n1. Cuadrado");
        printf("\n2. Triangulo");
        printf("\n3. Rectangulo");
        printf("\n4. Circulo");
        printf("\n5. Trapecio");
        printf("\nOpc: ");
        
        int opc2;
        scanf("%d", &opc2);
        
        switch (opc2) {
            case 1: {
                float lado;
                printf("\nIngrese el lado del cuadrado: ");
                scanf("%f", &lado);
                figura[0].resultado = cuadrado(lado);
                break;
            }
            case 2: {
                float base, altura;
                printf("\nIngrese la base del triangulo: ");
                scanf("%f", &base);
                printf("Ingrese la altura del tringulo: ");
                scanf("%f", &altura);
                figura[0].resultado = triangulo(base, altura);
                break;
            }
            case 3: {
                float base, altura;
                printf("\nIngrese la base del rectangulo: ");
                scanf("%f", &base);
                printf("Ingrese la altura del rectangulo: ");
                scanf("%f", &altura);
                figura[0].resultado = rectangulo(base, altura);
                break;
            }
            case 4: {
                float radio;
                printf("\nIngrese el radio del circulo: ");
                scanf("%f", &radio);
                figura[0].resultado = circulo(radio);
                break;
            }
            case 5: {
                float base_mayor, base_menor, altura;
                printf("\nIngrese la base mayor del trapecio: ");
                scanf("%f", &base_mayor);
                printf("Ingrese la base menor del trapecio: ");
                scanf("%f", &base_menor);
                printf("Ingrese la altura del trapecio: ");
                scanf("%f", &altura);
                figura[0].resultado = trapecio(base_mayor, base_menor, altura);
                break;
            }
            default:
                printf("\nOpción inválida\n");
                return 0;
        }
    }
    else if (opc == 2) {
        printf("\nElige la figura 3D que deseas calcular su volumen:");
        printf("\n1. Cubo");
        printf("\n2. Piramide");
        printf("\n3. Caja Rectangular");
        printf("\n4. Esfera");
        printf("\n5. Cono");
        printf("\nOpc: ");
        
        int opc3;
        scanf("%d", &opc3);
        
        switch (opc3) {
            case 1: {
                float lado;
                printf("\nIngrese el lado del cubo: ");
                scanf("%f", &lado);
                figura[0].resultado = cubo(lado);
                break;
            }
            case 2: {
                float base, altura;
                printf("\nIngrese la base de la piramide: ");
                scanf("%f", &base);
                printf("Ingrese la altura de la piramide: ");
                scanf("%f", &altura);
                figura[0].resultado = piramide(base, altura);
                break;
            }
            case 3: {
                float largo, ancho, altura;
                printf("\nIngrese el largo de la caja: ");
                scanf("%f", &largo);
                printf("Ingrese el ancho de la caja: ");
                scanf("%f", &ancho);
                printf("Ingrese la altura de la caja: ");
                scanf("%f", &altura);
                figura[0].resultado = caja_rectangular(largo, ancho, altura);
                break;
            }
            case 4: {
                float radio;
                printf("\nIngrese el radio de la esfera: ");
                scanf("%f", &radio);
                figura[0].resultado = esfera(radio);
                break;
            }
            case 5: {
                float radio, altura;
                printf("\nIngrese el radio del cono: ");
                scanf("%f", &radio);
                printf("Ingrese la altura del cono: ");
                scanf("%f", &altura);
                figura[0].resultado = cono(radio, altura);
                break;
            }
            default:
                printf("\nOpción inválida\n");
                return 0;
        }
    }
    else {
        printf("\nOpción inválida\n");
        return 0;
    }
    
    imprimir(figura[0].resultado);
    return 0;
}
}

void programa58() {
#include<stdio.h>
void gotoxy(int x,int y){
    printf("\033[%d;%dH",y,x);
}
int main(){
    printf("\033[2J");
    gotoxy(10,5);
    printf("Hola desde(10,5)!");
    return 0;
}
}

void programa59() {
#include <stdio.h>
 
void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
 
// Función para cambiar el color
void setColor(const char* color) {
    printf("%s", color);
}
 
int main() {
    char nombre[50];
    int edad;
 
    printf("\033[2J"); // Limpia la pantalla
    setColor("\033[7;34m");
 
    gotoxy(10, 5);
    printf("Ingrese su nombre: ");
    gotoxy(30, 5);
    setColor("\033[7;35m");
    scanf("%s", nombre);
 
    setColor("\033[7;34m");
    gotoxy(10, 7);
    printf("Ingrese su edad: ");
    gotoxy(30, 7);
    setColor("\033[7;35m");
    scanf("%d", &edad);
 
    gotoxy(10, 9);
    printf("Hola %s, tienes %d años.\n", nombre, edad);
 
    return 0;
}
}

void programa60() {
#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g=0;

    printf("Ingrese valor A\n");
    scanf("%d",&a);
    printf("Ingrese valor B\n");
    scanf("%d",&b);
    printf("Ingrese valor C\n");
    scanf("%d",&c);
    printf("Ingrese valor D\n");
    scanf("%d",&d);
    printf("Ingrese valor E\n");
    scanf("%d",&e);
    printf("Ingrese valor F\n");
    scanf("%d",&f);

    int *const AH=&a;
    int *const AL=&b;
    int *const BH=&c;
    int *const BL=&d;
    int *const CL=&e;
    int *const CH=&f;
    int *const DL=&g;


    printf("Valor ingresados; A=%p\n",&AH);
    printf("Valor ingresados; B=%p\n",&AL);
    printf("Valor ingresados; C=%p\n",&BH);
    printf("Valor ingresados; D=%p\n",&BL);
    printf("Valor ingresados; E=%p\n",&CL);

    printf("----------------------------\n");
printf("Operacion entre AH y AL\n");
    int suma=*AH+*AL;
    printf("Resultado de la suma: %d\n",suma);

    *DL=suma;
    printf("Direccion=%d\n",*DL);
    
    int resta=*AH-*AL;
    printf("Resultado de la suma: %d\n",resta);

    *DL=resta;
    printf("Direccion=%d\n",*DL);

    int multi=(*AH)*(*AL);
    printf("Resultado de la multiplicacion: %d\n",multi);

    *DL=multi;
    printf("Direccion=%d\n",*DL);

    float divi=(*AH)/(*AL);
    printf("Resultado de la divicion: %f\n",divi);

    *DL=divi;
    printf("Direccion=%d\n",*DL);

    printf("----------------------------\n");
    printf("Operacion entre BH y BL\n");
    int suma2=*BH+*BL;
    printf("Resultado de la suma: %d\n",suma2);

    *DL=suma2;
    printf("Direccion=%d\n",*DL);
    
    int resta2=*BH-*BL;
    printf("Resultado de la suma: %d\n",resta2);

    *DL=resta2;
    printf("Direccion=%d\n",*DL);

    int multi2=(*BH)*(*BL);
    printf("Resultado de la multiplicacion: %d\n",multi2);

    *DL=multi2;
    printf("Direccion=%d\n",*DL);

    float divi2=(*BH)/(*BL);
    printf("Resultado de la divicion: %f\n",divi2);

    *DL=divi2;
    printf("Direccion=%d\n",*DL);

    printf("----------------------------\n");
    printf("Operacion entre CH y CL\n");
    int suma3=*CH+*CL;
    printf("Resultado de la suma: %d\n",suma3);

    *DL=suma3;
    printf("Direccion=%d\n",*DL);
    
    int resta3=*CH-*CL;
    printf("Resultado de la suma: %d\n",resta3);

    *DL=resta3;
    printf("Direccion=%d\n",*DL);

    int multi3=(*CH)*(*CL);
    printf("Resultado de la multiplicacion: %d\n",multi3);

    *DL=multi3;
    printf("Direccion=%d\n",*DL);

    float divi3=(*CH)/(*CL);
    printf("Resultado de la divicion: %f\n",divi3);

    *DL=divi;
    printf("Direccion=%d\n",*DL);
    

    return 0;
}
}

void programa61() {
#include <stdio.h>



void llenarMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {

 printf("Nombre de la matriz: %s\n", nombre);

 for (int i = 0; i < filas; i++) {

 for (int j = 0; j < columnas; j++) {

 printf("Ingrese el valor para la posición [%d][%d]: ", i, j);

 scanf("%d", &matriz[i][j]);

 }

 }

}



void saveMatriz(int filas, int columnas, int matriz[filas][columnas]) {

 FILE *archivo = fopen("../matriz.txt", "w");

 if (archivo == NULL) {

 printf("Error al abrir el archivo.\n");

 return;

 }

 

 for (int i = 0; i < filas; i++) {

 for (int j = 0; j < columnas; j++) {

 fprintf(archivo, "%d ", matriz[i][j]);

 }

 fprintf(archivo, "\n");

 }

 

 fclose(archivo);

 printf("Matriz guardada en 'matriz.txt' exitosamente.\n");

}



void imprimirMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {

 printf("Nombre de la matriz: %s\n", nombre);

 printf("Matriz ingresada:\n");

 for (int i = 0; i < filas; i++) {

 for (int j = 0; j < columnas; j++) {

 printf("%4d ", matriz[i][j]);

 }

 printf("\n");

 }

}



void sumarMatriz(int filas, int columnas, 

 int matriz1[filas][columnas], int matriz2[filas][columnas], 

 int matrizr[filas][columnas]){

 for (int i = 0 ; i < filas; i++){

 for (int j = 0 ; j < columnas; j++){

 matrizr[i][j] = matriz1[i][j] + matriz2[i][j];

 }

 }

}



//Realizar el método para escalar 



//Realizar el método para multiplicar 



int main() {

 int filas, columnas;

 

 printf("Ingrese el número de filas: ");

 scanf("%d", &filas);

 printf("Ingrese el número de columnas: ");

 scanf("%d", &columnas);

 

 int matriz_a[filas][columnas];

 int matriz_b[filas][columnas];

 int matriz_r[filas][columnas];



 llenarMatriz("Matriz A", filas, columnas, matriz_a);

 llenarMatriz("Matriz B", filas, columnas, matriz_b);

 imprimirMatriz("Matriz A", filas, columnas, matriz_a);

 imprimirMatriz("MAtriz B", filas, columnas, matriz_b);

 sumarMatriz(filas, columnas, matriz_a, matriz_b, matriz_r);

 imprimirMatriz("SUMA A-B", filas, columnas, matriz_b);

 saveMatriz(filas, columnas, matriz_r); 



 return 0;

}
}

void programa62() {
#include<stdio.h>
void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
 
// Función para cambiar el color
void setColor(const char* color) {
    printf("%s", color);
}
int main(){
    
    int opc=0;
    float num1, num2;

    printf("\033[0m"); //limpio
    setColor("\033[7;32m");//pongo color
    gotoxy(6,9);//cordenas
    printf("Caculadorea Basica con gotoxy y switch-case");

    printf("\033[0m"); //limpio
    setColor("\033[4;37m");//pongo color
    gotoxy(6,11);//cordenas
    printf("\nMenu de operaciones:");

    //suma
    printf("\033[0m"); //limpio
    setColor("\033[7;31m");//pongo color
    gotoxy(6,12);//cordenas
    printf("\n1._ ");
    printf("\033[0m"); //limpio
    printf("Suma");

    //Resta
    printf("\033[0m"); //limpio
    setColor("\033[7;36m");//pongo color
    gotoxy(6,13);//cordenas
    printf("\n2._ ");
    printf("\033[0m"); //limpio
    printf("Resta");

    //Multiplicacion
    printf("\033[0m"); //limpio
    setColor("\033[7;34m");//pongo color
    gotoxy(6,14);//cordenas
    printf("\n3._ ");
    printf("\033[0m"); //limpio
    printf("Multiplicacion");

    //Division
    printf("\033[0m"); //limpio
    setColor("\033[7;35m");//pongo color
    gotoxy(6,15);//cordenas
    printf("\n4._ ");
    printf("\033[0m"); //limpio
    printf("Division");

    printf("\033[0m"); //limpio
    gotoxy(6,17);//cordenas
    printf("\nSeleccione una opcion");
    printf("\033[0m"); //limpio
    setColor("\033[7;33m");//pongo color
    printf("(1-4):");
    printf("\033[0m"); //limpio
    
    scanf("%d",&opc);

    printf("Ingresa el primer num:");
    scanf("%f",&num1);
    printf("Ingresa el segundo num:");
    scanf("%f",&num2);

    switch (opc) {
        case 1: {
            float suma = num1 + num2;
            printf("\033[0m"); // Limpiar color
            setColor("\033[7;032m"); // Establecer color
            printf("\nEl resultado de la suma es: %.2f", suma);
            printf("\033[0m"); // Limpiar color
            break;
        }
        case 2: {
            float resta = num1 - num2;
            printf("\033[0m"); // Limpiar color
            setColor("\033[7;36m"); // Establecer color
            printf("\nEl resultado de la resta es: %.2f", resta);
            printf("\033[0m"); // Limpiar color
            break;
        }
        case 3: {
            float multiplicacion = num1 * num2;
            printf("\033[0m"); // Limpiar color
            setColor("\033[7;35m"); // Establecer color
            printf("\nEl resultado de la multiplicación es: %.2f", multiplicacion);
            printf("\033[0m"); // Limpiar color
            break;
        }
        case 4: {
                float division = num1 / num2;
                if (num2>0)
                {
                    printf("\033[0m"); // Limpiar color
                    setColor("\033[7;35m");// Establecer color
                    printf("\nEl resultado de la división es: %.2f", division);
                    printf("\033[0m"); // Limpiar color
                }else{
                    printf("\033[0m"); // Limpiar color
                    setColor("\033[7;35m");// Establecer color
                    printf("\nNo se puede dividir");
                    printf("\033[0m"); // Limpiar color
                }
                
                
        }
            break;
        default:
            printf("\033[0m"); // Limpiar color
            printf("\nOpción inválida.");
            printf("\033[0m"); // Limpiar color
            break;
    }

    return 0;
}
}


int main() {
    int opcion;
    while (1) {
        printf("\n==== MENU DE 63 PROGRAMAS ===\n");
        for (int i = 1; i <= 63; i++) {
            printf("%d. Programa %d\n", i, i);
        }
        printf("0. Salir\n");
        printf("Selecciona un programa: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: programa1(); break;
            case 2: programa2(); break;
            case 3: programa3(); break;
            case 4: programa4(); break;
            case 5: programa5(); break;
            case 6: programa6(); break;
            case 7: programa7(); break;
            case 8: programa8(); break;
            case 9: programa9(); break;
            case 10: programa10(); break;
            case 11: programa11(); break;
            case 12: programa12(); break;
            case 13: programa13(); break;
            case 14: programa14(); break;
            case 15: programa15(); break;
            case 16: programa16(); break;
            case 17: programa17(); break;
            case 18: programa18(); break;
            case 19: programa19(); break;
            case 20: programa20(); break;
            case 21: programa21(); break;
            case 22: programa22(); break;
            case 23: programa23(); break;
            case 24: programa24(); break;
            case 25: programa25(); break;
            case 26: programa26(); break;
            case 27: programa27(); break;
            case 28: programa28(); break;
            case 29: programa29(); break;
            case 30: programa30(); break;
            case 31: programa31(); break;
            case 32: programa32(); break;
            case 33: programa33(); break;
            case 34: programa34(); break;
            case 35: programa35(); break;
            case 36: programa36(); break;
            case 37: programa37(); break;
            case 38: programa38(); break;
            case 39: programa39(); break;
            case 40: programa40(); break;
            case 41: programa41(); break;
            case 42: programa42(); break;
            case 43: programa43(); break;
            case 44: programa44(); break;
            case 45: programa45(); break;
            case 46: programa46(); break;
            case 47: programa47(); break;
            case 48: programa48(); break;
            case 49: programa49(); break;
            case 50: programa50(); break;
            case 51: programa51(); break;
            case 52: programa52(); break;
            case 53: programa53(); break;
            case 54: programa54(); break;
            case 55: programa55(); break;
            case 56: programa56(); break;
            case 57: programa57(); break;
            case 58: programa58(); break;
            case 59: programa59(); break;
            case 60: programa60(); break;
            case 61: programa61(); break;
            case 62: programa62(); break;
            default:
                printf("Opción inválida\n");
        }
    }
    return 0;
}
