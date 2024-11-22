#include <stdio.h>
#include <stdlib.h>

int tam = 50;

void cargarEnvios(int arrayId[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[]);
void mostrarEnvios(int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[]);
void modificarEstadoDeUnEnvio(int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[]);
void mostrarEnvioParaDestino(int destino, int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[]);

int main()
{
    int numerosID[50];
    float pesos[50];
    int destinos[50];
    int horasPlanificadas[50];
    int estados[50];

    int opcion = 0;
    int des = 0;

    do
    {
        printf("\n1- Cargar env%cos planificados.", 161);
        printf("\n2- Mostrar env%cos planificados.", 161);
        printf("\n3- Modificar estado de un env%co.", 161);
        printf("\n4- Mostrar env%cos para un destino.", 161);
        printf("\n5- Salir.\n\n");
        scanf("%d", &opcion);

        if (opcion != 5)
        {
            switch (opcion)
            {
            case 1:
                // Cargar envíos planificados
                cargarEnvios(numerosID, pesos, destinos, horasPlanificadas, estados);
                break;
            case 2:
                // Mostrar envíos planificados
                mostrarEnvios(numerosID, pesos, destinos, horasPlanificadas, estados);
                break;
            case 3:
                // Modificar estado de un envío
                modificarEstadoDeUnEnvio(numerosID, pesos, destinos, horasPlanificadas, estados);
                break;
            case 4:
                // Mostrar envíos para un destino
                printf("Destino a buscar: ");
                printf("\n1- Rosario");
                printf("\n2- Funes");
                printf("\n3- Roldan");
                printf("\n4- Baigorria");
                printf("\n");
                scanf("%i", &des);

                mostrarEnvioParaDestino(des, numerosID, pesos, destinos, horasPlanificadas, estados);
                break;
            default:
                printf("La opci%cn ingresada es inv%clida\n", 162, 160);
            }
        }

    } while (opcion != 5);

    return 0;
}

void cargarEnvios(int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[])
{
    printf("--Ingrese los datos de los env%cos--\n", 161);

    for (int i = 0; i < tam; i++)
    {
        printf("Nro. de env%co: ", 161);
        scanf("%d", &arrayIds[i]);

        printf("Ingrese el peso: ");
        scanf("%f", &arrayPesos[i]);
        do{
             printf("Ingrese el destino: ");
            printf("\n1- Rosario");
            printf("\n2- Funes");
            printf("\n3- Roldan");
            printf("\n4- Baigorria");
            printf("\n");
            scanf("%i", &arrayDestinos[i]);
        }while (arrayDestinos[i]<1 && arrayDestinos[i]>4);
        
       

        printf("Ingrese la hora: ");
        scanf("%d", &arrayHorasPlanificadas[i]);

        printf("Ingrese el estado: ");
        printf("\n0- Pendiente");
        printf("\n1- Despachado");
        printf("\n");
        scanf("%d", &arrayEstados[i]);
    }
}

void mostrarEnvios(int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[])
{
    for (int i = 0; i < tam; i++)
    {
        printf(" %d \t", arrayIds[i]);
        printf(" %.2f \t", arrayPesos[i]);
        switch (arrayDestinos[i])
        {
        case 1:
            printf("Rosario");
            break;
        case 2:
            printf("Funes");
            break;
        case 3:
            printf("Roldan");
            break;
        case 4:
            printf("Baigorria");
            break;
        default:
            printf("Destino inv%clido\n", 160);
        }
        printf("\t");
        printf(" %d hs \t", arrayHorasPlanificadas[i]);

        switch (arrayEstados[i])
        {
        case 0:
            printf("Pendiente");
            break;
        case 1:
            printf("Despachado");
            break;
        default:
            printf("Estado inv%clido\n", 160);
        }

        printf("\n");
    }
}

void modificarEstadoDeUnEnvio(int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[])
{
    int nroID = 0, est = 0;
    int encontrado = 0;

    printf("Nro del env%co a modificar:", 161);
    scanf("%d", &nroID);

   

    

}

void mostrarEnvioParaDestino(int destino, int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[])
{

}