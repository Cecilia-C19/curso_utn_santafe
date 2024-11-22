int main() {
    int num,cant;
    float suma=0, promedio=0 ,precio,preciom=0 ,precioM=0;
    printf("        PROGRAMA FINALIZA CON NUMERO DE ARTICULO = 0");
    printf("\n\nIngresar numero de articulo :");
    scanf("%d",&num);
    while(num!=0)
    {
       cant=cant+1;
       printf("\nIngrese el precio del articulo:%d: $ ",num);
       scanf("%f",&precio);
       suma=suma+precio;
       if(preciom==0)
       {
           preciom=precio;
       }
       if(precioM<precio)
       {
           precioM=precio;
       }
           if(preciom>precio)
           {
          preciom=precio;
        }
        system("cls");
        printf("        PROGRAMA FINALIZA CON NUMERO DE ARTICULO = 0");
        printf("\n\nIngresar numero de articulo ");
        scanf("%d",&num);

    }
    promedio=suma/cant;
    if(cant=0)
    {

        printf("AUN NO HA INGRESADO NINGUN ARTICULO");
        systerm("pause");
    }
    else
    {
        printf("su precio mayor es :$%f ,y el precio menor es :$%f",precioM,preciom);
        printf("\n\nEl promedio de los precios es:$    %f",promedio);
        printf("\n\n la suma de todos los precios de sus articulos es :$%f",suma);

    }



    return 0;
}