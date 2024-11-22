 #include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1, num2;
    printf("Ingresa primer nro:\n");
    scanf("%d", &num1);
    printf("Ingresar el segundo nro:\n");
    scanf("%d", &num2);

    if (num1 > num2) printf("El primer  nro ingresado es el mayor: %d\n", num1);
    else if (num2 > num1) printf("El segundo nro ingresado es el mayor: %d\n", num2);
        else printf("Los nros son iguales\n");

    system("pause");
  
}