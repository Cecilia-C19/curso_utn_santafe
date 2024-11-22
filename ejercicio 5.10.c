#include <stdio.h>
#include <stdlib.h>

/* Ejercicio 10. Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente
la suma de todos los números que no están en la diagonal principal.*/

int main()
{ 
    
    int i,j, suma=0;   
    int tam_matriz = 3;  
    int M[tam_matriz][tam_matriz]; 

    /* lectura por filas */
    printf("Ingrese los valores de la matriz M 3x3: \n");
    for(i = 0; i < tam_matriz; i++) {
        for (j = 0;j < tam_matriz;j++) {
            scanf("%d",&M[i][j]); 
        }        
    }
    /* escritura por filas */
    printf("La matriz ingresada es: \n");
    for(i = 0; i < tam_matriz;i++) { 
        for (j = 0; j < tam_matriz;j++) {
            printf("%5d",M[i][j]);            
        }        
         printf("\n"); 
    } 
    
    // realización de la suma 
    for(i = 0; i < tam_matriz;i++) {
        for (j = 0; j < tam_matriz;j++) {
            if(!(i == j)) {
                suma += M[i][j]; 
            }    
           
        }       
        
    }      
    printf("La suma de sus elementos sin la diagonal principal es %d \n", suma);  
    system("pause");
    return 0;
}
