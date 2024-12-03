#include <stdio.h>
#include <stdlib.h>

float cubica(float numero);
float global;
const float constante = 21;

int main(){

    float nro, cubo;
    global = 0;

    printf("Ingrese un nro. real:\n");
    scanf("%f", &nro);

    cubo = cubica(nro);

    printf("%.2f elevado al cubo es: %.2f\n", nro, cubo);

    system("pause");
    return 0;
}

float cubica(float numero){
    float rdo;
    global = 1;
    rdo = numero * numero * numero;
    return rdo;
}