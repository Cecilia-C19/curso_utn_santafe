#include <stdio.h>
#include <stdlib.h>

int main(){
    int nro;
    printf("Ingrese un nro: \n");
    scanf("%d", &nro);
    
    if (nro > 0)
    {
        printf("El nro. ingresado es positivo");
    }
    else
    {
        if (nro < 0)
        {
            printf("El nro. ingresado es negativo");
        }
        else
        {
            printf("El nro. ingresado es cero");
        }
        
    }
    
}