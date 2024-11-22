#include <stdio.h>
#include <stdlib.h>

//Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio.

int main(){

    float nota, suma = 0, promedio;
    int cont = 0;

    do
    {
      do
      {
         printf("Ingrese la nota:\n");
        scanf("%f", &nota);

      
        if (nota <= 10 && nota >= 1)
        {
            suma += nota;
            cont ++;
        }
        else
        {
            if (nota != 0)
            {
               printf("Nota inv%clida, debe ser entre 1 y 10\n", 160);
            }
                        
        }   
      } while (nota > 10 || nota < 1 );    
       
        
    } while (nota != 0);
    
    promedio = suma / cont;
    printf("El promedio de las notas ingresadas es: %.2f\n", promedio);

    system("pause");
    return 0;
}