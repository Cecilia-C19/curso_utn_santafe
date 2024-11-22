#include <stdio.h>
#include <stdlib.h>

void dibujaTriangulo(char letra, int numero);

int main()
{
    char caracter;
    int numero;

    printf("Escriba una caracter: ");
    scanf("%c", &caracter);
    printf("Escriba un numero: ");
    scanf("%d", &numero);
    dibujaTriangulo(caracter, numero);

    system("pause");
    return 0;
}

void dibujaTriangulo(char letra, int numero)
{
    int i;

    while (numero > 0)
    {
        for (i=0; i<numero; i++)
            printf("%c", letra);
        printf("\n");
        numero--;
    }
    return;
}
