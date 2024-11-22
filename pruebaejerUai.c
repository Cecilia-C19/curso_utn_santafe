#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
int i, contpar, contimp, num, cont;
float promtotal, suma, pares, prompares, promimpar, impares;
contpar = 0;
contimp = 0;
pares = 0;
impares = 0;
cont = 0;
for (i=1; i<=8; i++)
{
	printf("Ingrese un n%cmero entero: ", 163);
	scanf("%d", &num);
	if (num > 15)
	{
		cont++;
	}
	if (num % 2 == 0)
	{
		pares += num;
		contpar++;
	}
	else
	{
		impares += num;
		contimp++;
	}
	suma += num;
	}
	promtotal = suma / 8;
	prompares = pares / contpar;
	promimpar = impares / contimp;
	printf("\nLa cantidad de n%cmeros que superaron al valor 15 es de: %d \n\n",163, cont);
	printf("El promedio total es de: %.2f \n", promtotal);
	if (prompares == 0)
	{
		printf("No se ingresaron n%cmeros pares. \n", 163);
	}
	else
	{
		printf("El promedio de n%cmeros pares es de: %.2f \n", 163, prompares);
	}
	if (promimpar == 0)
	{
		printf("No se ingresaron n%cmeros impares. \n", 163);
	}
	else
	{
		printf("El promedio de n%cmeros impares es de: %.2f \n", 163, promimpar);
	}
system("pause");
return 0;
}