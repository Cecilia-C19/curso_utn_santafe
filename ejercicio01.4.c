#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int lado1, lado2, hipotenusa;
    printf("Ingrese el 1er lado: \t");
    scanf("%d", &lado1);
    printf("Ingrese el 2do lado: \t");
    scanf("%d", &lado2);
    hipotenusa = sqrt(pow(lado1,2) + pow(lado2,2));

    printf("La hipotenusa del tri%cngulo rect%cngulo ingresado es: %d\t", 160, 160, hipotenusa);


    system("pause");
    return 0;
}