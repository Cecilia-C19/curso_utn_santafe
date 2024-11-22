#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, acum = 0;

    for (i = 1; i <= 10; i++)
    {
        acum += i*3;
    }
    
    printf("La suma de los 10 1ros m%cltiplos de 3 es: %d\n",163,  acum);
    system("pause");
    return 0;
}