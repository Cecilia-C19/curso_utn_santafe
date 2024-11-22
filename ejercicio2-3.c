#include <stdio.h>
#include <stdlib.h>

int main(){
    int nro;
    printf("Ingrese un nro:\n");
    scanf("%d",&nro);

    if (nro%2 == 0 )
    {
        printf("El nro. ingresado es par\n");
    }
    else
    {
        printf("El nro. ingresado es impar\n");
    }
    
    system("pause");
    return 0;

}