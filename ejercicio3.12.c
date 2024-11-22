#include <stdio.h>
#include <stdlib.h>


/*Ingresar una secuencia ordenada alfabéticamente de letras con repeticiones. 
*Informar cada carácter y la cantidad de veces que aparece en la lista. 
*La secuencia finaliza con un ‘*’. */

int main(){ 

    char control_char, caracter;
    control_char = '0';
    int cont = 1;
    
    do
    {
        printf("Ingrese un caracter, (* para finalizar la secuencia) \n");
        scanf("%c",&caracter);
        if (control_char != caracter)
        {
            control_char = caracter;

        }
        do
        {
            cont += 1;
        } while (control_char = caracter);        
       printf("El caracter: %c se ingreso %d veces", control_char, cont);
       /*control_char = caracter;*/
       cont = 1;
        }
        

    while (caracter!= '*');

    system("pause");
    return 0;
}
    

