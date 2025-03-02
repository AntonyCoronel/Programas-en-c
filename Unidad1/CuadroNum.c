#include <stdio.h>
int main(){
    int limitey=10;
    while ((limitey>=0))
    {
        int limitex=10;
        while (limitex>=0)
        {
            printf("%4d",limitex);
            limitex--;
        }
        printf("\n");
        limitey--;
        
    }
    return 0;

}