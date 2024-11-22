#include <stdio.h>
#include <stdlib.h>

int main(){
    int nro1, nro2;

    printf("Ingrese un nro: \n");
    scanf("%d", &nro1);

    printf("Ingrese el 2do nro: \n");
    scanf("%d", &nro2);

    if (nro1>nro2){
       printf("El  nro mayor es nro1: %d\n", nro1 );
    }
    else {
        if (nro1 < nro2)
        {
            printf("El  nro mayor es nro2: %d\n", nro2);
        }
        else
        {
            printf("Los nros son iguales.\n");
        }
    }     
    
    system("pause"); 
    return 0;
}