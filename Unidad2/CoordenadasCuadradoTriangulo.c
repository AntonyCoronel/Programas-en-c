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
