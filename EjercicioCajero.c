#include <stdio.h>
#include <stdlib.h>
//#include <conio.h> para usar getch - revisar si es necesario , tenia entendido que tomaba bien el getch sin esta libreria

/*Ejercicio cajero automático*/

int main(){
    int cuenta, pass, passingresada, cont, op, cont_op;
    float saldo, dep, extr;
    pass = 1234; //contraseña de la cuenta
    cont = 1; //contador de veces que ingresa la contraseña
    cont_op=0; //contador de cantidad de operaciones
    saldo = 1258; //saldo inicial
    cuenta = 234;
    char caracter;
    printf("Ingrese la contrase%ca correspondiente a la cuenta: %d\n", -92, cuenta);
    scanf("%d", &passingresada);
    //while(caracter = getch()){ //Se puede adaptar para que muestre * en la lectura de la contraseña, 
      //  printf('*');           // la contraseña tiene que ser una cadena    
    //}

    
    
    if (passingresada == pass){        
        do
        {
            if (cont_op < 10)
            {
                printf("1) Dep%csito. \n", 162);
                printf("2) Extracci%cn.\n", 162);
                printf("3) Consultar saldo.\n");
                printf("4) Mostrar la cantidad de operaciones realizadas y el saldo actual.\n");
                printf("5) Salir\n\n");
                scanf("%d", &op);

                switch (op) //opción de menú ingresada
                {
                case 1:
                    printf("Ingrese el valor a depositar:\n");
                    scanf("%f", &dep);            
                    saldo = saldo + dep;
                    cont_op +=1;
                    printf("Operaci%cn finalizada.\n\n", 162);
                    break;
                case 2:
                    printf("Ingrese el valor a extraer:\n");
                    scanf("%f", &extr);
                    if  (extr > saldo){
                        printf("No es posible realizar la operaci%cn. El importe supera el saldo de la cuenta\n.", 162);            
                    }
                    else{
                        saldo = saldo - extr;
                        printf("Operaci%cn completada.\n", 162);
                    }
                    cont_op +=1;
                    break;
                case 3:
                    printf("Su saldo es de:%f\n", saldo);
                    cont_op +=1;
                    break;
                case 4:
                    printf("Cantidad de operaciones realizadas: %d \n", cont_op);
                    printf("Su saldo es de: %f\n", saldo);
                    cont_op +=1;
                    break;
                case 5:
                    printf("Gracias por usar nuestros cajeros autom%cticos.\n", 160); 
                    break;   
                    
                default:
                printf("Opci%cn inv%clida.\n", 162, 160);
                    break;
                }
                    }
            else {
                printf("Lleg%c al l%Cmite de operaciones. Fin. Gracias!\n", 162, 161);
                break;
               }
                    
                
            } while (op!=5);        

    }

    else
        {  
        while (passingresada != pass)
        {
            if (cont < 3){
                printf("Contrase%ca incorrecta. Intente nuevamente.\n", -92);
                scanf("%d", &passingresada);
                cont +=1; 
            }
            else {
                printf("Contrase%ca incorrecta.  Ya no se permiten m%cs intentos\n", -92, 160);
                break;
                
            }
        }     
         
        }
        system("pause");         
        return 0;
        }
        
        

