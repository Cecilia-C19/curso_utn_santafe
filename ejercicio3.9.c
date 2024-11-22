#include <stdio.h>
#include <stdlib.h>


void main()
{
int n1, n2;

for (n1 = 1; n1 <= 9; n1++)
{
    printf("Tabla de multiplicar de %d\n", n1);

    for (n2 = 1; n2 <= 10; n2++)
    {
        printf("%d X %d = %d\n", n1, n2, n1*n2);
    }
    
}
system("pause");
} 