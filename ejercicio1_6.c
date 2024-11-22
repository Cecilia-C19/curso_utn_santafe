#include <stdio.h>
#include <stdlib.h>

int main(){
    float nro1, nro2, suma, producto, resta;
    
    printf("Ingrese el primer nro: \n");
    scanf("%f", &nro1);
    printf("Ingrese el segundo nro: \n");
    scanf("%f", &nro2);

    suma = nro1 + nro2;
    producto = nro1 * nro2;
    resta = nro1 - nro2;

    printf("La suma de %.2f y %.2f es: %.2f \nEl producto de %.2f y %.2f es: %.2f\nLa resta de %.2f menos %.2f es %.2f\n", nro1, nro2, suma, nro1, nro2, producto, nro1, nro2, resta);
    
    system("pause");
    return 0;
    
}