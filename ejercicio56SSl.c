#include<stdio.h>
main(){


    int nro,i ;
    do{
        printf("Ingrese un nro. no negativo\n");
        scanf("%f", &nro);

        }while(nro<0);

    for (i=nro; i>=0; i--){
        printf("%d", i);
    }

}