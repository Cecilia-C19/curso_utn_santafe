#include <stdio.h>
#include <stdlib.h>

int main()
{
int op;

    do {
        printf("Menu: \n");
        printf("1. Opcion1\n");
        printf("2. Opcion2\n");
        printf("3. Opcion3\n");
        printf("4. Salir\n");
        scanf("%i", &op);

            switch(op)
            {
                case 1:
                    printf("opcion1");
                    break;
                case 2:
                    printf("opcion2");
                    break;
                case 3:
                    printf("opcion3");
                    break;
                default:
                if (op!=4)
                {
                 printf("op incorrecta");
                           }
                                
            
           }
        } while(op!=4);

system("pause");
return 0;
}