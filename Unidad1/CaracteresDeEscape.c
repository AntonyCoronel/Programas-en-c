#include<stdio.h>
int main(){
    printf("%s\a"," \\a= Campana\n");
    printf("%s\b","\\b= Retroceso\n");
    printf("%s\f","\\f= Avance de pagina\n");
    printf("%s\n","\\n= Nueva linea\n");
    printf("%s\r","\\r= Retorno de carro\n");
    printf("%s\t","\\t= Tabulacion horizontal\n");
    printf("%s\v","\\v= Taculacion vertical\n");
    printf("%s\r","\\r= Retorno de carro\n");
    printf("%s\'","\\'= Comilla simple");
    printf("\n");
    printf("%s\"","\\comillasdobles= Comillas Dobles");
    printf("\n");
    printf("%s\\","\\= Barra diagonal inversa");
    printf("\n");
    printf("%s\?","\\?= Signo  de interrogacion literal");
    printf("\n");
    printf("%s\121","\\121= Caracter ASCII en  notacion octal\n");
    printf("%s\x32","\\x23= Caracter ASCII en  notacion hexadecimal\n");
    printf("%s\x6434","\\x6434= Caracter Unicode\n");
    return  0;
}