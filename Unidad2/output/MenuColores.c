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