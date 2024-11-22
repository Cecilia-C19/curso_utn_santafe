#include <stdio.h>
#include <stdlib.h>

int main(){

    int acum = 0;
    /*for (int i = 1; i <= 10; i++)
    {
        if (i%2 == 1 )
        {
          acum += i;
        }        
        
    }*/

   for (int i = 1; i <= 10; i+= 2)
    {
        
         acum += i;
                
        
    }


    
    printf("La suma de los nros. impares es: %d ", acum);

    system("pause");
    return 0;
}