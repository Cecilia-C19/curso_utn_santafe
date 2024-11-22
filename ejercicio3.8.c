int main()
{ 
 
    float suma = 0;
    float promedio = 0;
 
    float nota;
    int cantidadNotas = 0;
 
    do
    {
        printf("Ingrese una nota (0 para finalizar)\n");
 
        scanf("%f", &nota); 
 
        if (nota != 0)
        {
            suma = suma + nota;
            cantidadNotas = cantidadNotas + 1;
        }
 
    } while (nota != 0);
 
    if (cantidadNotas != 0)
    {
        promedio = suma / cantidadNotas;
 
        printf("La suma es = %f \n", suma);
        printf("El promedio es = %f \n", promedio);
    }   
    else
    {
        printf("No ha ingresado ninguna nota.\n");
    }
 
    system("pause");
    return 0;
}
