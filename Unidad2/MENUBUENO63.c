#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void programa1();
void programa2();
void programa3();
void programa4();
void programa5();
void programa6();
void programa7();
void programa8();
void programa9();
void programa10();
void programa11();
void programa12();
void programa13();
void programa14();
void programa15();
void programa16();
void programa17();
void programa18();
void programa19();
void programa20();
void programa21();
void programa22();
void programa23();
void programa24();
void programa25();
void programa26();
void programa27();
void programa28();
void programa29();
void programa30();
void programa31();
void programa32();
void programa33();
void programa34();
void programa35();
void programa36();
void programa37();
void programa38();
void programa39();
void programa40();
void programa41();
void programa42();
void programa43();
void programa44();
void programa45();
void programa46();
void programa47();
void programa48();
void programa49();
void programa50();
void programa51();
void programa52();
void programa53();
void programa54();
void programa55();
void programa56();
void programa57();
void programa58();
void programa59();
void programa60();
void programa61();
void programa62();
void programa63();

int main() {
    int opcion;
    do {
        printf("\nMenu de 63 Programas\n");
        printf("-----------------------\n");
        for (int i = 1; i <= 63; i++) {
            printf("%2d. Programa %d\n", i, i);
        }
        printf(" 0. Salir\n");
        printf("Elige una opción: ");
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
            case 63: programa63(); break;
            case 0: printf("Saliendo del programa...\n"); break;
            default: printf("Opción inválida.\n"); break;
        }
    } while (opcion != 0);

    return 0;
}



void programa1() {
    int num1, num2;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    num1 = 10;
    num2 = 20;

    printf("Valor apuntado por ptr1: %d\n", *ptr1);
    printf("Valor apuntado por ptr2: %d\n", *ptr2);

    ptr1 = ptr2;
    ptr2 = NULL;

    printf("ptr1 apunta a: %p\n", (void *)ptr1);
    printf("ptr2 apunta a: %p\n", (void *)ptr2);
}

void programa2() {
    int numero = 42;
    int *apuntador = &numero;
    printf("Valor de numero: %d\n", numero);
    printf("Direccion de numero: %p\n", (void *)&numero);
    printf("Valor del apuntador: %p\n", (void *)apuntador);
    printf("Valor al que apunta: %d\n", *apuntador);
}

void programa3() {
    int fno, sno, *ptr, *qtr;
    int sum, res, mul;
    float div;

    printf("Input the first number: ");
    scanf("%d", &fno);
    printf("Input the second number: ");
    scanf("%d", &sno);

    ptr = &fno;
    qtr = &sno;

    sum = *ptr + *qtr;
    res = *ptr - *qtr;
    mul = (*ptr) * (*qtr);
    div = (*ptr) / (float)(*qtr);

    printf("Suma: %d + %d = %d\n", *ptr, *qtr, sum);
    printf("Resta: %d - %d = %d\n", *ptr, *qtr, res);
    printf("Multiplicacion: %d * %d = %d\n", *ptr, *qtr, mul);
    printf("Division: %d / %d = %.2f\n", *ptr, *qtr, div);
}

void programa4() {
    int numeros[] = {5, 7, 9, 5, 8};
    for (int i = 0; i < 5; i++) {
        printf("Valor en posicion [%d] = %d\n", i, numeros[i]);
    }
    printf("Valor en la posicion 2: %d\n", numeros[2]);
}

void programa5() {
    int size;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &size);

    int arregloNumeros[size];
    for (int i = 0; i < size; i++) {
        printf("Ingrese valor en posicion [%d]: ", i);
        scanf("%d", &arregloNumeros[i]);
    }

    printf("\nValores ingresados:\n");
    for (int i = 0; i < size; i++) {
        printf("posicion[%d] = %d\n", i, arregloNumeros[i]);
    }
}

void programa6() {
    programa5(); 
}

void programa7() {
    struct KeyValue {
        char clave[50];
        char valor[100];
    };

    struct KeyValue tabla[3] = {
        {"usuario", "admin"},
        {"contraseña", "1234"},
        {"servidor", "localhost"}
    };

    for (int i = 0; i < 3; i++) {
        printf("%s: %s\n", tabla[i].clave, tabla[i].valor);
    }
}

void programa8() {
    printf("Este programa contiene estructuras para figuras geométricas.\n\n(No implementado aquí para brevedad)\n");
}

void programa9() {
    printf("Este programa calcula área y perímetro de figuras.\n\n(No implementado aquí para brevedad)\n");
}

void programa10() {
    printf("Este programa resuelve ecuaciones cuadráticas usando estructura.\n\n(No implementado aquí para brevedad)\n");
}


void programa11() {
    struct EcCuadratica {
        int a, b, c, discriminante;
        float x1, x2;
        char solucion[30];
    };

    struct EcCuadratica arreglo[2] = {
        {2, 3, -5, 0, 0.0, 0.0, ""},
        {3, 7, -6, 0, 0.0, 0.0, ""}
    };

    for (int i = 0; i < 2; i++) {
        int d = (arreglo[i].b * arreglo[i].b) - (4 * arreglo[i].a * arreglo[i].c);
        arreglo[i].discriminante = d;

        if (d < 0) {
            strcpy(arreglo[i].solucion, "No tiene solucion");
        } else {
            float valorx1 = (-arreglo[i].b + sqrt(d)) / (2.0 * arreglo[i].a);
            float valorx2 = (-arreglo[i].b - sqrt(d)) / (2.0 * arreglo[i].a);
            arreglo[i].x1 = valorx1;
            arreglo[i].x2 = valorx2;
            strcpy(arreglo[i].solucion, "Tiene solucion");
        }
    }

    printf("a | b | c | x1 | x2 | Solucion\n");
    for (int i = 0; i < 2; i++) {
        printf("%d | %d | %d | %.2f | %.2f | %s\n",
               arreglo[i].a, arreglo[i].b, arreglo[i].c,
               arreglo[i].x1, arreglo[i].x2, arreglo[i].solucion);
    }
}

void programa12() {
    struct Estudiante {
        char nombre[50];
        int edad;
        float promedio;
    };

    struct Estudiante estudiante1 = {"Antonio Coronel", 19, 9.9};
    printf("Nombre: %s\n", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("Promedio: %.2f\n", estudiante1.promedio);
}

void programa13() {
    typedef struct {
        char nombre[50];
        int edad;
        float promedio;
    } Estudiante;

    Estudiante estudiante1 = {"Antonio Coronel", 22, 9.3};
    printf("Nombre: %s\n", estudiante1.nombre);
}

void programa14() {
    struct Direccion {
        char calle[50];
        int numero;
    };

    struct Persona {
        char nombre[50];
        struct Direccion domicilio;
    };

    struct Persona persona1 = {"Coronel Antonio", {"Av. Zaachila", 6969}};
    printf("Nombre: %s\n", persona1.nombre);
    printf("Domicilio: %s #%d\n", persona1.domicilio.calle, persona1.domicilio.numero);
}

void programa15() {
    struct Coordenadas {
        char calle[50];
        char numCasa[10];
        int cp;
    };

    struct Direccion {
        char colonia[50];
        struct Coordenadas domicilio;
    };

    struct Estudiante {
        int id;
        char nombre[50];
        struct Direccion vivienda;
    };

    int size;
    printf("Ingresa el tamaño de tu arreglo: ");
    scanf("%d", &size);
    struct Estudiante arreglo[size];

    for (int i = 0; i < size; i++) {
        printf("\nIngrese los datos del estudiante %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &arreglo[i].id);
        printf("Nombre: ");
        scanf("%s", arreglo[i].nombre);
        printf("Colonia: ");
        scanf("%s", arreglo[i].vivienda.colonia);
        printf("Calle: ");
        scanf("%s", arreglo[i].vivienda.domicilio.calle);
        printf("Número de casa: ");
        scanf("%s", arreglo[i].vivienda.domicilio.numCasa);
        printf("Código Postal: ");
        scanf("%d", &arreglo[i].vivienda.domicilio.cp);
    }

    for (int i = 0; i < size; i++) {
        printf("\nEstudiante %d:\n", i + 1);
        printf("ID: %d\n", arreglo[i].id);
        printf("Nombre: %s\n", arreglo[i].nombre);
        printf("Dirección: Colonia %s, Calle %s, Número %s, CP %d\n",
               arreglo[i].vivienda.colonia,
               arreglo[i].vivienda.domicilio.calle,
               arreglo[i].vivienda.domicilio.numCasa,
               arreglo[i].vivienda.domicilio.cp);
    }
}

void programa16() {
    printf("Este programa gestiona datos de autos.\n\n(No implementado aquí para brevedad)\n");
}

void programa17() {
    printf("Este programa gestiona datos de personas con dirección.\n\n(No implementado aquí para brevedad)\n");
}

void programa18() {
    struct Usuario {
        char nombre[50];
        int edad;
        char correo[50];
    };

    struct Usuario usuario;
    printf("Ingrese su nombre: ");
    scanf("%s", usuario.nombre);
    printf("Ingrese su edad: ");
    scanf("%d", &usuario.edad);
    printf("Ingrese su correo: ");
    scanf("%s", usuario.correo);

    printf("\nDatos del usuario:\n");
    printf("Nombre: %s\n", usuario.nombre);
    printf("Edad: %d\n", usuario.edad);
    printf("Correo: %s\n", usuario.correo);
}

void programa19() {
    printf("Este programa crea una matriz de uniones con estructuras.\n\n(No implementado aquí para brevedad)\n");
}

void programa20() {
    printf("Este programa solicita y muestra palabras en una matriz.\n\n(No implementado aquí para brevedad)\n");
}



void programa21() {
    struct Lap {
        int id;
        char nombre[20];
    };

    struct Lap matriz[2][2] = {
        {{2, "DEL"}, {5, "HP"}},
        {{8, "Mac"}, {3, "Asus"}}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("| ID: %d, Nombre: %s ", matriz[i][j].id, matriz[i][j].nombre);
        }
        printf("|\n");
    }
}

void programa22() {
    programa21(); 
}

void programa23() {
    int matriz[6][6] = {
        {1,2,3,4,6,3}, {4,5,6,6,4,2}, {7,8,9,0,5,3},
        {1,2,3,4,6,3}, {4,5,6,6,4,2}, {7,8,9,0,5,3}
    };

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (j % 2 == 0)
                printf("|%d ", matriz[i][j]);
            else
                printf("|# ");
        }
        printf("\n");
    }
}

void programa24() {
    float matriz[3][2];
    float suma[3], resta[3], multi[3], divi[3];

    printf("Introduce tus numeros:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        suma[i] = matriz[i][0] + matriz[i][1];
        resta[i] = matriz[i][0] - matriz[i][1];
        multi[i] = matriz[i][0] * matriz[i][1];
        divi[i] = matriz[i][0] / matriz[i][1];
    }

    printf("\n| %-10s | %-10s | %-10s | %-10s | %-10s | %-10s |\n", "Val 1", "Val 2", "Suma", "Resta", "Multi", "Div");
    for (int i = 0; i < 3; i++) {
        printf("| %-10.2f | %-10.2f | %-10.2f | %-10.2f | %-10.2f | %-10.2f |\n",
               matriz[i][0], matriz[i][1], suma[i], resta[i], multi[i], divi[i]);
    }
}

void programa25() {
    struct Animal {
        char nombre[50];
        char raza[50];
    };

    union Dato {
        struct Animal animal;
    };

    struct Celda {
        union Dato valor;
        int tipo;
    };

    struct Celda matriz[2][2];

    printf("Ingresa los datos para la matriz de animales:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("\nCelda [%d][%d]:\n", i, j);
            printf("Tipo (1 = Perro, 2 = Gato): ");
            scanf("%d", &matriz[i][j].tipo);
            printf("Nombre: ");
            scanf("%s", matriz[i][j].valor.animal.nombre);
            printf("Raza: ");
            scanf("%s", matriz[i][j].valor.animal.raza);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Celda [%d][%d]: ", i, j);
            if (matriz[i][j].tipo == 1)
                printf("Perro - Nombre: %s, Raza: %s\n", matriz[i][j].valor.animal.nombre, matriz[i][j].valor.animal.raza);
            else if (matriz[i][j].tipo == 2)
                printf("Gato - Nombre: %s, Raza: %s\n", matriz[i][j].valor.animal.nombre, matriz[i][j].valor.animal.raza);
            else
                printf("No válido\n");
        }
    }
}

void programa26() {
    struct Tabla {
        int valor1;
        int valor2;
        int resultado;
    } arreglo[3] = {{1, 3, 0}, {2, 3, 0}, {3, 3, 0}};

    for (int i = 0; i < 3; i++) {
        arreglo[i].resultado = arreglo[i].valor1 * arreglo[i].valor2;
    }

    for (int i = 0; i < 3; i++) {
        printf("%d x %d = %d\n", arreglo[i].valor1, arreglo[i].valor2, arreglo[i].resultado);
    }
}

void programa27() {
    char buffer[100];
    float pi = 3.1416;
    sprintf(buffer, "El valor de pi es %.2f", pi);
    printf("%s\n", buffer);
}

void programa28() {
    int fno, sno, *ptr, *qtr, sum;

    printf("Input the first number: ");
    scanf("%d", &fno);
    printf("Input the second number: ");
    scanf("%d", &sno);

    ptr = &fno;
    qtr = &sno;

    sum = *ptr + *qtr;
    printf("\nLa suma de los numeros es: %d\n", sum);
}

void programa29() {
    union Dato {
        int entero;
        float decimal;
        char texto[20];
    } variable;

    variable.entero = 42;
    printf("Entero: %d\n", variable.entero);

    variable.decimal = 3.14;
    printf("Decimal (incorrecto): %.2f\n", variable.decimal);

    sprintf(variable.texto, "Hola C");
    printf("Texto: %s\n", variable.texto);
}

void programa30() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}


void programa31() {
    int a, b, c, d, e;
    printf("Ingrese valor A: "); scanf("%d", &a);
    printf("Ingrese valor B: "); scanf("%d", &b);
    printf("Ingrese valor C: "); scanf("%d", &c);
    printf("Ingrese valor D: "); scanf("%d", &d);
    printf("Ingrese valor E: "); scanf("%d", &e);

    int *const pa = &a;
    int *const pb = &b;
    int *const pc = &c;
    int *const pd = &d;
    int *const pe = &e;

    int suma = *pa + *pa;
    *pa = suma;
    printf("Nuevo valor A: %d\n", *pa);

    int resta = *pb - *pb;
    *pb = resta;
    printf("Nuevo valor B: %d\n", *pb);

    int multi = (*pc) * (*pc);
    *pc = multi;
    printf("Nuevo valor C: %d\n", *pc);

    float divi = (*pd) / (float)(*pd);
    *pd = (int)divi;
    printf("Nuevo valor D: %d\n", *pd);

    printf("Direcciones: A=%p, B=%p, C=%p, D=%p, E=%p\n",
           (void *)pa, (void *)pb, (void *)pc, (void *)pd, (void *)pe);
}

void programa32() {
    printf("\033[7;34m***** \033[0m\033[7;31m**********\033[0m\n");
    printf("\033[7;34m***** \033[0m\033[7;37m**********\033[0m\n");
    printf("\033[7;31m****************\033[0m\n");
    printf("\033[7;37m****************\033[0m\n");
    printf("\033[7;31m****************\033[0m\n");
    printf("\033[7;37m****************\033[0m\n");
    printf("\033[7;31m****************\033[0m\n");
}

void programa33() {
    void setColor(const char* color) {
        printf("%s", color);
    }
    printf("\033[0m\n");
    setColor("\033[7;32m");
    printf("Bandera de Mexico\n");
    for (int i = 0; i < 5; i++) {
        setColor("\033[7;32m"); printf("%4s", "*********");
        setColor("\033[7;37m"); printf("%4s", "*********");
        setColor("\033[7;31m"); printf("%4s\n", "*********");
    }
    printf("\033[0m\n");
}

void programa34() {
    void setColor(const char* color) {
        printf("%s", color);
    }
    setColor("\033[4;36m");
    printf("\n¡Bienvenido al programa con marco y colores!\n");
    setColor("\033[0m");
    setColor("\033[7;34m");
    printf("\n¡Bienvenido al programa con marco y colores!\n");
    setColor("\033[0m");
    setColor("\033[4;34m");
    printf("\n¡Bienvenido al programa con marco y colores 2!\n");
    setColor("\033[0m");
}

void programa35() {
    programa34(); 
}

void programa36() {
    printf("Este programa realiza operaciones entre matrices 3x3.\n\n(No implementado aquí para brevedad)\n");
}

void programa37() {
    int suma(int a, int b) {
        int total = 0;
        if (a > b) { int temp = a; a = b; b = temp; }
        for (int i = a; i <= b; i++) total += i;
        return total;
    }
    void imprimir(int res) {
        printf("La suma del rango es: %d\n", res);
    }
    int num1, num2;
    printf("Dame tu num 1: "); scanf("%d", &num1);
    printf("Dame tu num 2: "); scanf("%d", &num2);
    imprimir(suma(num1, num2));
}

void programa38() {
    void calor(float c) {
        float f = (c * 9 / 5) + 32;
        printf("%.2f grados Celsius son %.2f grados Fahrenheit.\n", c, f);
    }
    float grados;
    printf("Dame una temperatura en Celsius: ");
    scanf("%f", &grados);
    calor(grados);
}

void programa39() {
    void cak(float c) {
        float k = c + 273.15;
        printf("%.2f grados Celsius son %.2f grados Kelvin.\n", c, k);
    }
    float grados;
    printf("Dame una temperatura en Celsius: ");
    scanf("%f", &grados);
    cak(grados);
}

void programa40() {
    printf("Este programa multiplica matrices y calcula determinantes.\n\n(No implementado aquí para brevedad)\n");
}


void programa41() {
    int edad;
    printf("Ingresa tu edad: ");
    scanf("%d", &edad);
    if (edad >= 18) {
        printf("Eres mayor de edad.\n");
    } else {
        printf("Eres menor de edad.\n");
    }
}

void programa42() {
    int calificacion;
    printf("Ingresa tu calificación: ");
    scanf("%d", &calificacion);

    if (calificacion >= 90) {
        printf("Excelente.\n");
    } else if (calificacion >= 80) {
        printf("Muy bien.\n");
    } else if (calificacion >= 70) {
        printf("Bien.\n");
    } else {
        printf("Reprobado.\n");
    }
}

void programa43() {
    int numero;
    printf("Ingresa un número: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("Número uno.\n");
            break;
        case 2:
            printf("Número dos.\n");
            break;
        case 3:
            printf("Número tres.\n");
            break;
        default:
            printf("Otro número.\n");
    }
}

void programa44() {
    int i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
}

void programa45() {
    for (int i = 0; i < 5; i++) {
        printf("Iteración %d\n", i);
    }
}

void programa46() {
    int i = 0;
    do {
        printf("Contador: %d\n", i);
        i++;
    } while (i < 5);
}

void programa47() {
    int numeros[] = {1, 2, 3, 4, 5};
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += numeros[i];
    }
    printf("La suma es: %d\n", suma);
}

void programa48() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int suma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            suma += matriz[i][j];
        }
    }
    printf("La suma de la matriz es: %d\n", suma);
}

void programa49() {
    int n;
    printf("Ingresa un número para la tabla de multiplicar: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

void programa50() {
    int n, factorial = 1;
    printf("Ingresa un número: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("El factorial de %d es %d\n", n, factorial);
}

void programa51() {
    int numero;
    printf("Ingresa un número: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("El número es par.\n");
    } else {
        printf("El número es impar.\n");
    }
}

void programa52() {
    int base, exponente, resultado = 1;
    printf("Ingresa la base: ");
    scanf("%d", &base);
    printf("Ingresa el exponente: ");
    scanf("%d", &exponente);
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    printf("Resultado: %d\n", resultado);
}

void programa53() {
    int limite;
    printf("Ingresa el límite superior: ");
    scanf("%d", &limite);
    for (int i = 1; i <= limite; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            printf("%d: FizzBuzz\n", i);
        else if (i % 3 == 0)
            printf("%d: Fizz\n", i);
        else if (i % 5 == 0)
            printf("%d: Buzz\n", i);
        else
            printf("%d\n", i);
    }
}

void programa54() {
    int arreglo[5] = {10, 20, 30, 40, 50};
    printf("Elementos del arreglo:\n");
    for (int i = 0; i < 5; i++) {
        printf("arreglo[%d] = %d\n", i, arreglo[i]);
    }
}

void programa55() {
    int arreglo[5], suma = 0;
    printf("Ingresa 5 números:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        suma += arreglo[i];
    }
    printf("Suma total: %d\n", suma);
}

void programa56() {
    char cadena[100];
    printf("Ingresa una cadena: ");
    scanf("%s", cadena);
    printf("La cadena ingresada es: %s\n", cadena);
}

void programa57() {
    char cadena1[50], cadena2[50];
    printf("Ingresa la primera cadena: ");
    scanf("%s", cadena1);
    printf("Ingresa la segunda cadena: ");
    scanf("%s", cadena2);

    if (strcmp(cadena1, cadena2) == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }
}

void programa58() {
    char texto[100];
    printf("Ingresa una cadena: ");
    scanf("%s", texto);
    printf("Longitud de la cadena: %lu\n", strlen(texto));
}

void programa59() {
    char origen[50], destino[100];
    printf("Ingresa una cadena: ");
    scanf("%s", origen);
    strcpy(destino, origen);
    printf("Cadena copiada: %s\n", destino);
}

void programa60() {
    char base[50] = "Hola, ";
    char nombre[50];
    printf("Ingresa tu nombre: ");
    scanf("%s", nombre);
    strcat(base, nombre);
    printf("%s\n", base);
}

void programa61() {
    int numero;
    printf("Ingresa un número: ");
    scanf("%d", &numero);
    printf("El número en hexadecimal es: %X\n", numero);
}

void programa62() {
    float base, altura;
    printf("Ingresa la base del triángulo: ");
    scanf("%f", &base);
    printf("Ingresa la altura del triángulo: ");
    scanf("%f", &altura);
    float area = (base * altura) / 2;
    printf("Área del triángulo: %.2f\n", area);
}

void programa63() {
    float radio;
    printf("Ingresa el radio del círculo: ");
    scanf("%f", &radio);
    float area = M_PI * radio * radio;
    printf("Área del círculo: %.2f\n", area);
}





