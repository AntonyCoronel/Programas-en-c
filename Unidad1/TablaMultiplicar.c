#include <stdio.h>
int main(){
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
    return 0;
}