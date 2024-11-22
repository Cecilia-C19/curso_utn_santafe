#include <stdio.h>
#include <stdlib.h>

void main() 
{

    int dnis[10] = {0};
    float notas[10] = {0};

	int opcion = 0;
    int dniIngresado = 0;
    float notaNueva;
    int encontrado = 0;

    int tam = 3;


    do{
        printf("\nElija una opci%cn\n", 162);
        printf("1. Cargar alumnos\n");
        printf("2. Buscar un alumno\n");
        printf("3. Modificar una nota\n");
        printf("4. Mostrar alumnos\n");
        printf("5. Salir.\n\n");
        scanf("%d",&opcion);	
		
        if(opcion != 5) 
        {
            switch(opcion)
            {
                case 1:
                    for(int i = 0; i < tam; i++)
                    {
                        do
                        {
                            printf("Introduzca el dni del alumno %i\n", i+1);
                            scanf("%d", &dnis[i]);  
                            if (dnis[i] < 1000000 || dnis[i] > 99999999)
                            {
                                printf("Nro. de DNI inv%clido\n", 160);
                            }

                        }while(dnis[i] < 1000000 || dnis[i] > 99999999);
	
                        do
                        {
                            printf("Ingrese la nota: \n");
                            scanf("%f",&notas[i]);  
                            if (notas[i] < 0 || notas[i] > 10)
                            {
                                printf("Nota inv%clida\n", 160);
                            }

                        }while(notas[i] < 0 || notas[i] > 10);

                        printf("\n");
                    }	
                    break;
                case 2:

                    encontrado = 0;

                    printf("Ingrese el dni del alumno a buscar: \n");
                    scanf("%i", &dniIngresado);
                    for(int i = 0; i < tam; i++)
                    {
                        if(dnis[i] == dniIngresado)
                        {
                            printf("\nDNI alumno: %i.\n", dnis[i]);
                            printf("Nota: %.2f\n", notas[i]);

                            encontrado = 1;
                        }
                    }

                    if (encontrado == 0)
                    {
                        printf("Alumno inexistente...\n");	
                    }
                    break;
                case 3: 

                    encontrado = 0;

                    printf("Ingrese el dni del alumno a buscar: \n");
                    scanf("%i", &dniIngresado);
                    for(int i = 0; i < tam; i++)
                    {
                        if(dnis[i] == dniIngresado)
                        {
                            printf("\nDNI alumno: %i.\n", dnis[i]);
                            printf("Ingrese la nueva nota: ");
                            scanf("%f",&notaNueva);
                            notas[i] = notaNueva;
                            printf("\n La nueva nota del alumno fue cargada.\n");

                            encontrado = 1;
                        }
                    }

                    if (encontrado == 0)
                    {
                        printf("Alumno inexistente...\n");	
                    }
                    break;
                case 4:
                    printf("Listado de alumnos: \n");
                    for(int i = 0; i < tam; i++)
                    {
                        printf("DNI alumno: %i. ", dnis[i]);
                        printf("Nota: %.2f\n", notas[i]);
                    }
                    break;
                default:
                    printf("La opci%cn ingresada es incorrecta.\n", 162); 
                    break;
            }
        }	
	} while(opcion != 5);

    system("pause");
}