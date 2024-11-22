/*Realizar un programa de conversión que traduzca un peso ingresado en Kg a gramos, o a libras, o a toneladas o a onzas.
 El sistema debe preguntar al usuario a qué lo quiere convertir. 
 Ejemplo de cómo se puede preguntar: Seleccione la opción deseada:
  1: para convertir a gramos - 2: para convertir a toneladas – 3: para convertir a libras - 4: para convertir a onzas.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int op;
    float cantidad = 0, conversion = 0;

    do
        {
           
            printf("1) Convertir a gramos. \n");
            printf("2) Convertir a toneladas.\n");
            printf("3) Convertir a libras.\n");
            printf("4) Convertir a onzas.\n");
            printf("5) Salir\n\n");
            scanf("%d", &op);

            switch (op) //opción de menú ingresada
                {
                case 1:
                    printf("Ingrese el valor a convetir (Kg.):\n");
                    scanf("%f", &cantidad);            
                    conversion = cantidad * 1000;
                    printf("%f Kg. son %f gramos\n", cantidad, conversion);                    
                    break;
                case 2:
                    printf("Ingrese el valor a convetir (Kg.):\n");
                    scanf("%f", &cantidad);           
                    conversion = cantidad / 1000;
                    printf("%f Kg. son %f toneladas\n", cantidad, conversion);          
                    break;
                case 3:
                     printf("Ingrese el valor a convetir (Kg.):\n");
                    scanf("%f", &cantidad);           
                    conversion = cantidad *  2.205;
                    printf("%f Kg. son %f libras\n", cantidad, conversion);                     
                    break;
                case 4:
                    printf("Ingrese el valor a convetir (Kg.):\n");
                    scanf("%f", &cantidad);           
                    conversion = cantidad * 35.274;
                    printf("%f Kg. son %f onzas\n", cantidad, conversion);                     
                    break;                    
                case 5:
                    printf("Gracias por usar nuestro software de conversi%cn.\n", 162); 
                    break;                       
                default:
                    printf("Opci%cn inv%clida.\n", 162, 160);
                    break;
                }                         
                
        } while (op!=5);    
    system("pause");         
    return 0;
    }
  
      
