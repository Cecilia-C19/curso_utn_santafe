#include <stdio.h>
#include <stdlib.h>

/*Realizar un programa que permita ver información a un cliente de un banco. Para ello
el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero),
validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de
ingreso de contraseña. Al loguarse correctamente presentar un menú con las
siguientes opciones:
1- Consultar saldo
2- Consultar CBU
3- Salir
*/


int main() {

 int dni = 35654123;
 int pass = 1234;
 int saldo = 150000;
 int cbu = 986323456;
 int dniIngresado = 0;
 int passIngresado = 0;
 int intentos = 1;
 int ingresaCorrectamente = 0;
 int opcion;

 do {
     printf("Ingrese dni: \n");
     scanf("%d", &dniIngresado);
     printf("Ingrese la contrase%ca: \n", 164);
     scanf("%d", &passIngresado);

     if (dniIngresado == dni)
     {
         if (passIngresado == pass) {
             ingresaCorrectamente = 1;
         }
         else
         {
             ingresaCorrectamente = 0;
             intentos++;
             printf("La contrase%ca es incorrecta\n", 164);
         }        
     }
     else
     {
         printf("El usuario es incorrecto\n");
     }

 } while (ingresaCorrectamente == 0 && intentos <= 3);

 if (ingresaCorrectamente == 1)
 {
     //presentar el menú
     do {
         printf("Seleccione una opci%cn:\n",162);
         printf("1. Consultar saldo\n");
         printf("2. Consultar CBU\n");
         printf("3. Salir\n");
         scanf("%d", &opcion);

         if (opcion != 3)
         {
             switch (opcion)
             {
             case 1:
                 printf("Su saldo es: %d \n", saldo);
                 break;
             case 2:
                printf("Su CBU es: %d \n", cbu);
                break;             
             default:
                printf("La opci%cn es incorrecta\n", 162);
                 break;
             }
         }     


     } while(opcion !=3);

 }
 else
 {
     printf("Se terminaron los intentos\n");
 }
 
 system("pause");
 return 0;

}