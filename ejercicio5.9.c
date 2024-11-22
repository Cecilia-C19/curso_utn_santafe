#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numeros1[2][2], numeros2[2][2];
    int i;
    for (i = 0; i < 2; i++)
    {
         for (int j = 0; j < 2; j++)
            {
                printf("Escriba un nro\n");
                scanf("%d", &numeros1[i][j]);

                numeros2[i][j] = numeros1[i][j] * 2;

            }
    }
/*
    for (i = 0; i < 5; i++)
    {
        numeros2[i] = numeros1[i] * 2;
    }*/

    printf("\nLos nros. ingresados multiplicados por 2 son: \n");
    for (i = 0; i < 2; i++)
    {
          for (int j = 0; j < 2; j++)
            {
                printf("%d\t", numeros2[i][j]);
            }
    }

    system("pause");
    return 0;
}