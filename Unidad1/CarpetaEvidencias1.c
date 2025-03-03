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

    printf("%s\n","p) Promedio de calificaciones leer");
    printf("%s\n","q)Tabla de multiplicar");
    printf("%s\n","s)Prueba Switch");
    printf("%s\n","r)Calculadora");
    printf("%s\n","t)Prueba switch 2");
    printf("%s\n","w)Volumen Figuras");
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

        case 'p': {
            float calf1=0,calf2=0,calf3=0;
    float promedio;
    printf("%s\n","Ingresa tu primera calificacion: ");
    scanf("%f",&calf1);
    printf("%s\n","Ingresa tu segunda calificacion: ");
    scanf("%f",&calf2);
    printf("%s\n","Ingresa tu tercera calificacion: ");
    scanf("%f",&calf3);
    promedio=(calf1+calf2+calf3)/3;
    printf("%s%.2f\n","Su promedio es de: ",promedio);
    return 0;
            break;
        }

        case 'q': {
            int tabla=0;
    while(tabla<=10){
        int num=0;
        while(num<=10){
            int mult=num*tabla;
            printf("%s%d%s%d%s%d\n","(",tabla,")(",num,")=",mult);
            num++;
        }
        tabla++;
    }
            break;
        }


        case 'r': {
            int num1, num2, opc;
            float operacion;
            
            printf("Dame tu primer numero:\n");
            scanf("%d", &num1);
            
            printf("Dame tu segundo numero:\n");
            scanf("%d", &num2);
            
            printf("Seleccione una opcion:\n");
            printf("1._ Sumar\n");
            printf("2._ Restar\n");
            printf("3._ Multiplicar\n");
            printf("4._ Division\n");
            scanf("%d", &opc);
            
            switch (opc) {
                case 1:
                    printf("Se ha seleccionado suma\n");
                    operacion = num1 + num2;
                    printf("Su resultado es: %.2f\n", operacion);
                    break;
                
                case 2:
                    printf("Se ha seleccionado resta\n");
                    operacion = num1 - num2;
                    printf("Su resultado es: %.2f\n", operacion);
                    break;
                
                case 3:
                    printf("Se ha seleccionado multiplicacion\n");
                    operacion = num1 * num2;
                    printf("Su resultado es: %.2f\n", operacion);
                    break;
                
                case 4:
                    printf("Se ha seleccionado division\n");
                    if (num2 != 0) {
                        operacion = (float)num1 / num2;
                        printf("Su resultado es: %.2f\n", operacion);
                    } else {
                        printf("Error: No se puede dividir entre cero.\n");
                    }
                    break;
                
                default:
                    printf("No ha seleccionado una opcion valida\n");
                    break;
            }
        break;
    }
              
            break;
        

        case 't': {
            printf("%s\n","Selecciona una opcion");
            printf("%s\n","a)Seleccionar opc 1");
            printf("%s\n","b)Seleccionar opc 2");
            char opc;
            scanf("%c",&opc);
            switch (opc)
            {
            case 'a':
                printf("%s\n","Selecciono opc1");
                break;
            
            case 'b':
                printf("%s\n","Selecciono opc2");
                break;
            
            default:
                break;
            }
            
            break;
        }
        case 's': {
            int opc;
    printf("%s\n","Seleccione una opcion");
    printf("%s\n","1._Sumar");
    printf("%s\n","2._Restar");
   scanf("%d",&opc);
    switch (opc)
    {
    case 1:
    printf("%s\n","Ha seleccionado suma");
        break;

    case 2:
    printf("%s\n","Ha seleccionado resta");
    break;
    default:
    printf("%s\n","No ha seleccionado una opcion valida");
        break;
    }
            break;
        }
        

        case 'w': {
            double radio, altura, vEs,vCi,vCo;
    float pi=3.1416;
    
    printf("%s","Ingresa el radio: ");
    scanf("%lf", &radio);
    printf("Ingresa la altura: ");
    scanf("%lf", &altura);
    
    vEs = (4.0 / 3.0) * pi * radio * radio * radio;
    vCi = pi * radio * radio * altura;
    vCo = (1.0 / 3.0) * pi * radio * radio * altura;
    
    printf("\nVolumen de la esfera: %.2lf\n", vEs);
    printf("Volumen del cilindro: %.2lf\n", vCi);
    printf("Volumen del cono: %.2lf\n", vCo);
            break;
        }

        default:
            printf("Opcion invalida\n");
            break;
    }
    return 0;
}
