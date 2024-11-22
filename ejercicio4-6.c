#include <stdio.h>
#include <stdlib.h>

/*Realizar un programa que permita ver información a un cliente de un banco. Para ello
el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero),
validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de
ingreso de contraseña. Al loguarse correctamente presentar un menú con las
siguientes opciones:
1- Consultar saldo
2- Consultar CBU
3- Salir*/

int main()
{

    int dni = 35654123;
    int pass = 1234;
    float saldo = 150000;
    int cbu = 986323456;

    int dni_ingresado, pass_ingresada, cont_intentos = 0, op, band = 0;

    do
    {

        printf("Ingrese el dni:\n");
        scanf("%d", &dni_ingresado);

        printf("Ingrese la contrase%ca:\n", 164);
        scanf("%d", &pass_ingresada);

        if (dni_ingresado == dni)
        {
            if (pass_ingresada == pass)
            {
                band = 1;
            }
            else
            {
                cont_intentos++;
            }
        }
        else
        {
            cont_intentos++;
        }

    } while (cont_intentos < 3 && band == 0);

    if (band == 1)
    {
        do
        {
            printf("1. Consultar saldo\n");
            printf("2. Consultar CBU\n");
            printf("3. Salir\n");
            printf("Seleccione una operaci%cn:\n", 162);
            scanf("%d", &op);
            // valido primero que el numero sea distinto de 5
            if (op != 3)
            {
                switch (op)
                {
                case 1:
                    printf("Su saldo es: %i\n", saldo);
                    break;
                case 2:
                    printf("Su CBU es: %i\n", cbu);
                    break;
                default:
                    printf("La opci%cn ingresada es incorrecta.\n", 162);
                    break;
                }
            }
        } while (op != 3);
    }
    else
    {
        printf("Se permiten 3 intentos");
    }   
    

    system("pause");
    return 0;
}