#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, i, multiplicacion;
    //printf("Ingrese el nro del que quiere saber la tabla de multiplicar: \n");
    //scanf("%d", &n1);

    printf("Las tablas de multiplicar son:\n");

    
    for(int j = 1; j<=9; j++){

    
        for (int i=1;i <=10;i++){
            multiplicacion = j*i;
            printf("%d x %d = %d\n", j, i, multiplicacion);


        }
    }

    system("pause");

}