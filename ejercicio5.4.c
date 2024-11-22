#include <stdio.h>
#include <stdlib.h>
/* 4. Dado el vector {10, 20, 5, 15, 30, 20}
- Informar el vector de la forma: "Indice: X, Valor: Y".
- Totalizar el vector e informar el total.
- Informar el contenido de los indices impares.
- Informar los indices que contienen números impares.
- Informar el mayor número.
- Informar cuántas veces aparece el número 20. */
int main()
{
    int vec[] = {10, 20, 5, 15, 30, 20};
    int total = 0, maximo = vec[0], cont = 0;
    for (int i = 0; i < 6; i++)
    {

        printf("Indice: %d \t Valor: %d \n", i, vec[i]);
        total = total + vec[i];
        if (i % 2 == 1)
        {
            printf("PosImp %d valor: %d\n", i, vec[i]);
        }
        if (vec[i] % 2 == 1)
        {
            printf("Contenido impar %d posicion: %d\n", vec[i], i);
        }
        if (vec[i] > maximo)
        {
            maximo = vec[i];
        }
        if (vec[i] == 20)
        {
            cont++;
        }
    }
    printf("El mayor es: %d\n", maximo);
    printf("El total es: %d\n", total);
    printf("Veces que se repite el nro 20 en el array: %d\n", cont);
    system("pause");
    return 0;
}
