#include <stdlib.h>
#include <stdio.h>

int main()
{
    char nombre[30];
    char fecha_nac[30];
    
    printf("Ingrese su nombre completo: \n");
    scanf("%[^\n]", &nombre);
    fflush(stdin);
    printf("Ingrese tu fecha de nacimiento con letras: \n");
    scanf("%[^\n]", &fecha_nac);

    printf("tu nombre es: %s \n", nombre);
    printf("tu fecha de nacimiento es: %s \n", fecha_nac);
    
    system("pause");
    return 0;
}
