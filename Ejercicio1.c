#include <stdio.h>
#include<stdlib.h>



int main()
{
    int num1; // valor 1ro que se ingresa
    int num2;
    int resultado;
    printf("ingrese el primer valor\n");
    scanf("%d", &num1);
    printf("ingrese el segundo valor\n");
    scanf("%d",&num2); 
    resultado = num1 + num2; //cálculo de la suma
    printf("el resultado de la suma de los nros: %d y %d es:\n%d\n", num1, num2, resultado);
    system("pause");
    return 0;
}

