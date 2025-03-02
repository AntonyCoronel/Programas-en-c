#include <stdio.h>
#include <math.h>

int main(){
    printf("%s\n","Carpeta de evidencias");
    printf("%s\n","Coronel Martinez Jose Antonio");
    printf("%s\n","Seleccione el programa que desea ver");
    printf("%s\n","a)Caracteres de escape");
    printf("%s\n","b)Tipos de datos");
    printf("%s\n","c)Promedio de calificacion");
    printf("%s\n","d)Temperatura Entero");
    printf("%s\n","e)Temperatura Flotante");
    printf("%s\n","f)Diagonal 1");
    printf("%s\n","g)Diagonal 2");
    printf("%s\n","h)Cuadrado de numeros");
    printf("%s\n","i)Cuadrado de asteriscos");
    printf("%s\n","j)Triangulo 1");
    printf("%s\n","k)Triangulo 2");
    printf("%s\n","l)Triangulo 3");
    printf("%s\n","m)Triangulo 4");
    printf("%s\n","n)Triangulo Equilatero o pino");
    printf("%s\n","o)Trapecio");

    char opc;
    scanf(" %c", &opc);  // Agregué un espacio antes de %c para evitar que lea el salto de línea previo

    switch (opc) {
        case 'a': {
            printf("%s\a"," \\a= Campana\n");
            printf("%s\b","\\b= Retroceso\n");
            printf("%s\f","\\f= Avance de pagina\n");
            printf("%s\n","\\n= Nueva linea\n");
            printf("%s\r","\\r= Retorno de carro\n");
            printf("%s\t","\\t= Tabulacion horizontal\n");
            printf("%s\v","\\v= Taculacion vertical\n");
            printf("%s\r","\\r= Retorno de carro\n");
            printf("%s\'","\\'= Comilla simple\n");
            printf("%s\"","\\\"= Comillas Dobles\n");
            printf("%s\\","\\= Barra diagonal inversa\n");
            printf("%s?","\\?= Signo de interrogacion literal\n");
            printf("%s","\\121= Caracter ASCII en notacion octal\n");
            printf("%s","\\x32= Caracter ASCII en notacion hexadecimal\n");
            break;
        }
        
        case 'b': {
            char letra='a';
            int entero=10;
            unsigned positivo=4;
            short intcorto=-24;
            long intlargo=124123124;
            float decimalcorto=6.324;
            double decimallargo=35.342532423;
            char nombre[]="Antonio Coronel";

            printf("Letra: %c\n", letra);
            printf("Entero: %d\n", entero);
            printf("Unsigned positivo: %u\n", positivo);
            printf("Short int corto: %hd\n", intcorto);
            printf("Long int largo: %ld\n", intlargo);
            printf("Float decimal corto: %f\n", decimalcorto);
            printf("Double decimal largo: %lf\n", decimallargo);
            printf("Nombre: %s\n", nombre);
            break;
        }

        case 'c': {
            float calf1=7.4, calf2=6.7, calf3=8.4;
            float promedio = (calf1 + calf2 + calf3) / 3;
            printf("Su promedio es de: %.2f\n", promedio);
            break;
        }

        case 'd': {
            int fahr=0, celsius;
            int step=20;
            while (fahr <= 300) {
                celsius =(5.0/9.0)*(fahr-32.0); 
                printf("%d %d\n", fahr, celsius);
                fahr += step;
            }
            break;
        }

        case 'e': {
            float fahrF=0, celsius;
            int step=20;
            while (fahrF <= 300) {
                celsius =(5.0/9.0)*(fahrF-32.0); 
                printf("%.2f %.2f\n", fahrF, celsius);
                fahrF += step;
            }
            break;
        }

        case 'f': {
            int i, j, n=10;
            for (i = 0; i < n; i++) {
                for (j = 0; j < i; j++) {
                    printf("   ");
                }
                printf("*\n");
            }
            break;
        }

        case 'g': {
            int i, j, n=10;
            for (i = 0; i < n; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    printf("   "); 
                }
                printf("*\n");
            }
            break;
        }

        case 'h': {
            int limitey=10;
            while (limitey >= 0) {
                int limitex=10;
                while (limitex >= 0) {
                    printf("%4d", limitex);
                    limitex--;
                }
                printf("\n");
                limitey--;
            }
            break;
        }

        case 'i': {
            int x = 10;
            for (int i = 0; i < x; i++) {
                for (int j = 0; j < x; j++) {
                    if (i == 0 || i == x - 1 || j == 0 || j == x - 1) {
                        printf("* ");
                    } else {
                        printf("  ");
                    }
                }
                printf("\n");
            }
            break;
        }

        case 'j': {
            int limitey = 10;
            int contador = 1;
            while (limitey >= 1) {
                int limitex = 10;
                while (limitex >= contador) {
                    printf("%4d", limitex);
                    limitex--;
                }
                contador++;
                printf("\n");
                limitey--;
            }
            break;
        }
        
        case 'k': {
            int fila = 10;
            while (fila >= 1) {
                int num = fila;
                while (num <= 10) {
                    printf("%4d", num);
                    num++;
                }
                printf("\n");
                fila--;
            }
            break;
        }
        
        case 'l': {
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
            break;
        }
        
        case 'm': {
            int limitey = 10;
            for (int contador = limitey; contador >= 1; contador--) {
                for (int s = 0; s < contador * 4; s++) {
                    printf(" ");
                }
                for (int limitex = 10; limitex >= contador; limitex--) {
                    printf("%4d", limitex);
                }
                printf("\n");
            }
            break;
        }



        case 'n': {
            int espacios=6, asteriscos=1;
            for(int i=6; i>=0;i--) {
                for(int j=1;j<=espacios;j++) {
                    printf("%4s"," ");
                }
                espacios--;
                for(int k=1;k<=asteriscos;k++) {
                    printf("%4s","*");
                }
                asteriscos +=2;
                printf("\n");
            }
            break;
        }

        case 'o': {
            int espacios=6, asteriscos=3;
            for(int i=3; i>=0;i--) {
                for(int j=1;j<=espacios;j++) {
                    printf("%4s"," ");
                }
                espacios--;
                for(int k=1;k<=asteriscos;k++) {
                    printf("%4s","*");
                }
                asteriscos +=2;
                printf("\n");
            }
            break;
        }

        default:
            printf("Opcion invalida\n");
            break;
    }
    return 0;
}
