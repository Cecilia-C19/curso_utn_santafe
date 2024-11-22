#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float lado1, lado2, hipotenusa;
    printf("Ingrese el 1er lado: \t");
    scanf("%f", &lado1);
    printf("Ingrese el 2do lado: \t");
    scanf("%f", &lado2);
    hipotenusa = sqrt(pow(lado1,2) + pow(lado2,2));

    printf("La hipotenusa del tri%cngulo rect%cngulo ingresado es: %f\t", 160, 160, hipotenusa);


    system("pause");
    return 0;
}