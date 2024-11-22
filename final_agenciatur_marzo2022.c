/*Final  agencia turismo*/
#include <stdio.h>
#include <stdlib.h>

int const tam = 3;

void cargarPaquetes();
void mostrarPaquetes();
void modificarEstadoPaquete();
void mostrarPaquetesxMes();
void validarAlerta();

    struct paquete
{
    int id;
    int precio;
    char destino[30];
    int mes;
    int estado;
};
struct paquete paquetes[15];

/*int id, precio, mes, estado;
char destino[15];*/

int main()
{
    int opcion = 0;

do {
     printf("\nElija una opci%cn\n", 162);
        printf("1. Cargar paquetes\n");
        printf("2. Mostrar paquetes\n");
        printf("3. Modificar estado de un paquete\n");
        printf("4. Mostrar paquetes para un mes\n");
        printf("5. Validar con el txt de Alerta Covid si el destino queda fuera de vigencia.\n");
        printf("6. Salir.\n\n");
        scanf("%d",&opcion);

    if(opcion != 6) 
        {
             switch(opcion)
            {
                case 1: 
                cargarPaquetes();
                break;
                
                case 2:
                mostrarPaquetes();
                break;

                case 3:
                modificarEstadoPaquete();
                break;

                case 4:
                mostrarPaquetesxMes();
                break;

                case 5:
                validarAlerta();
                break;

                case 6:
                break;

                default:
                printf("----Ingreso una opcion incorrecta----\n");
            }
        } 
    }   while (opcion!=6);

        return 0;
        
}

void cargarPaquetes(){
    printf("--Ingrese los datos de 15 paquetes turísticos--\n");

	for (int i = 0; i < tam; i++)
	{
        printf("Nro. identificador del paquete:\n");
        scanf("%d", &paquetes[i].id);
        //paquetes[i].id = id;
        printf("Ingrese el precio del paquete:\n");
        scanf("%d", &paquetes[i].precio);
//        paquetes[i].precio = precio;
        printf("Ingrese el lugar destino del paquete:\n");
        scanf("%s", &paquetes[i].destino);
        //paquetes[i].destino[] = destino;
        printf("Ingrese el mes en el que se realiza el viaje (nro. del 1 a 12):\n");
        scanf("%d", &paquetes[i].mes);
        printf("Ingrese el estado del paquete (1 vigente/  2 no vigente):\n");        
        scanf("%d", &paquetes[i].estado);
    }

}
void mostrarPaquetes(){
        printf("*****PAQUETES*****\n");
        printf("Id. paquete     Precio        Destino         Mes         Estado       \n");
    	for(int i = 0; i < tam; i++){
        printf("%d               %d            %s         ", paquetes[i].id, paquetes[i].precio, paquetes[i].destino);
            switch (paquetes[i].mes)
            {
            case 1:
                printf("Enero");
                break;
            case 2:
                printf("Febrero");
                break;
            case 3:
                printf("Marzo");
                break;    
            case 4:
                printf("Abril");
                break;    
            case 5:
                printf("Mayo");
                break;
            case 6:
                printf("Junio");
                break;
            case 7:
                printf("Julio");
                break;
            case 8:
                printf("Agosto");
                break;
            case 9:
                printf("Septiembre");
                break;
            case 10:
                printf("Octubre");
                break;
            case 11:
                printf("Noviembre");
                break;
            case 12:
                printf("Diciembre");
                break;

            default:
                printf("Mes incorrecto: %d", paquetes[i].mes);
                break;
            }
            if (paquetes[i].estado = 1)
            {
            printf("    Vigente\n");
            }
            else
            {
                printf("   No Vigente\n");
            }                
        }    
}

void modificarEstadoPaquete(){

    int encontrado = 0;
    int paquete_aModificar = 0;

    printf("Ingrese el nro. identificador del paquete a modificar: \n ");
    scanf("%d", &paquete_aModificar);
    for (int i = 0; i < tam; i++)
    {
        if (paquetes[i].id == paquete_aModificar){
            printf("Ingrese el nuevo estado:\n");
            scanf("%d", &paquetes[i].estado);
            encontrado = 1;
        }
    }
    if (encontrado = 0)
    {
        printf("No existe el paquete");
    }    

}
void mostrarPaquetesxMes(){

    int mes_aBuscar = 0;   
    int encontrado = 0;
    do
    {
        printf("Ingrese el mes para los que desea buscar paquetes (entre 1 y 12):\n");
        scanf("%d", &mes_aBuscar);
    } while (mes_aBuscar < 1 || mes_aBuscar > 12 );            

    for (int i = 0; i < tam; i++)
    {
        if (mes_aBuscar == paquetes[i].mes)
        {
            printf("\n %s", paquetes[i].destino);
            encontrado = 1;
        }
        
    }
    if (encontrado = 0)
    {
        printf("No se encontraron destinos para el mes ingresado");
    }
    
    
}

void validarAlerta(){
//int fscanf(FILE *F, const char *cad_ctrol);
//char *fgets(char *str, int long, FILE *F);

FILE *alertaCovid;
char destinoAlerta[50];

alertaCovid = fopen("alertaCovid.txt","r");
if (alertaCovid == NULL)
{
    exit(1);
}
else{
    printf("\n Los destinos con alerta Covid son: \n");
    while (feof(alertaCovid) ==0)
    {
        fgets(destinoAlerta,50,alertaCovid);
        printf("%s\n", destinoAlerta);
    }
    fclose(alertaCovid);
    
}

}

