#include <stdio.h>


//para el gotxy 
void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
 
// Función para cambiar el color
void setColor(const char* color) {
    printf("%s", color);
}


//pido matriz 
void pedirMatriz(int m[3][3], char nombre) {
    printf("Dame los nums de la matris %c:\n", nombre);
    printf("\033[0m"); //limpio
    setColor("\033[7;32m");
    printf("Matris 1\n");
    printf("\033[0m"); //limpio
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            gotoxy(i+(2*i), j+5);
            scanf("%d", &m[i][j]);
        }
    }
    printf("\033[2J"); 
}
//imprimir horizontal
void imprimirMatrizHorizontal(int a[3][3], char op, int b[3][3], int r[3][3]) {
    printf("\n");
    printf("\033[0m"); //limpio
    setColor("\033[7;32m");
    printf("  Matriz 1            Matriz 2\n");
    printf("\033[0m"); //limpio
    for (int i = 0; i < 3; i++) {
        printf("* %2d  %2d  %2d *   %c   * %2d  %2d  %2d *  \n", 
            a[i][0], a[i][1], a[i][2], op, b[i][0], b[i][1], b[i][2]);
        printf("*            *       *            *        \n");
    }
    printf("\033[0m"); //limpio
    setColor("\033[7;38m");
    printf("      Resultado:           \n");
    printf("\033[0m"); //limpio
    printf("\n");
    for (int x = 0; x < 3; x++)
    {
        printf("     * %2d  %2d  %2d *\n", 
            r[x][0], r[x][1], r[x][2]);
        printf("     *            *\n");
    }
    
}


//suma
void sumar(int a[3][3], int b[3][3], int r[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            r[i][j] = a[i][j] + b[i][j];
}

//resta
void restar(int a[3][3], int b[3][3], int r[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            r[i][j] = a[i][j] - b[i][j];
}

//multiplicacion
void multi(int a[3][3], int b[3][3], int r[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            r[i][j] = a[i][j] * b[i][j];
}

//determinante
void imprimirDeterminante(int m[3][3], int det) {
    printf("\033[0m"); //limpio
    setColor("\033[7;38m");
    printf("      Resultado         \n");
    printf("\033[0m"); //limpio
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("* %2d  %2d  %2d *\n", m[i][0], m[i][1], m[i][2]);
        printf("*            *\n");
    }
    printf("Determinante: %d\n", det);
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
int main(){

    for (int i = 0; i < 20; i++)
    {
        printf("******************************************************");
        for (int j = 0; i < 20; i++)
        {
            printf("*                                                     *\n");
        }
        printf("*******************************************************");
    }

    int opc;
    setColor("\033[7;34m");
    gotoxy(15, 5);
    printf("Menu ");

    printf("\033[0m"); //limpio
    setColor("\033[7;36m");
    gotoxy(11, 7);
    printf("1) Suma de matrices ");

    printf("\033[0m"); //limpio
    setColor("\033[7;32m");
    gotoxy(11, 9);
    printf("2) Resta de matrices ");

    printf("\033[0m"); //limpio
    setColor("\033[7;39m");
    gotoxy(11, 11);
    printf("3) Multiplicacion de matrices ");

    printf("\033[0m"); //limpio
    setColor("\033[7;31m");
    gotoxy(11, 13);
    printf("4) Determinante ");

    setColor("\033[7;34m");
    gotoxy(25, 20);
    printf("Opc: ");
    gotoxy(30, 20);
    setColor("\033[7;35m");
    scanf("%d", &opc);
    printf("\033[0m"); //limpio

    printf("\033[2J"); 
    int A[3][3], B[3][3], R[3][3];
    switch (opc)
    {
    case 1:
    pedirMatriz(A, 'A');
    pedirMatriz(B, 'B');
    sumar(A, B, R);
            imprimirMatrizHorizontal(A, '+', B, R);
        break;


    case 2:
    pedirMatriz(A, 'A');
    pedirMatriz(B, 'B');
    restar(A, B, R);
            imprimirMatrizHorizontal(A, '-', B, R);
        break;


    case 3:
    pedirMatriz(A, 'A');
    pedirMatriz(B, 'B');
    multi(A, B, R);
            imprimirMatrizHorizontal(A, 'x', B, R);
        break;

    case 4:
    imprimirDeterminante(A, sarrus(A));
        break;
    
    default:
        printf("\nSu opcion es invalida");
        break;
    }
    
    return 0;
}