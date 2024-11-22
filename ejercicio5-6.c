#include <stdio.h>
#include <stdlib.h> /* 6. Ingrese por teclado la facturación de los últimos 6 meses. Informar: - La facturación total - El promedio de facturación - La máxima facturación - La mínima facturación */ }

int main() {
float facturacion[6];
float total = 0, maximo, minimo;

for (int i = 0; i < 6; i++)
{
    printf("Ingrese facturaci%cn del mes %d\n", 162, i + 1);
    scanf("%f", &facturacion[i]);
    if (i == 0)
    {
        maximo = facturacion[i];
        minimo = facturacion[i];
    }
    if (facturacion[i] > maximo)
    {
        maximo = facturacion[i];
    }
    if (facturacion[i] < minimo)
    {
        minimo = facturacion[i];
    }
    total += facturacion[i];
}
printf("Facturacion total: %.2f\n", total);
printf("Promedio: %.2f\n", total / 6);
printf("Minima facturaci%cn: %.2f \n", 162, minimo);
printf("Maxima facturaci%cn: %.2f \n", 162, maximo);
system("pause");
return 0;
}