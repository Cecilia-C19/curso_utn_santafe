#include <stdio.h>
#include <stdlib.h>

int main(){ 
    int cant_vend = 1;
    float tot_vta, vta, vta_vend_a, vta_vend_b, vta_vend_c, vta_vend_d, vta_vend_e;
    float com_vend_a, com_vend_b, com_vend_c, com_vend_d, com_vend_e;
    float com = 0.25;

    do
    {
        printf("Ingrese el importe de la venta, (0 para finalizar la carga del vendedor) \n");
        scanf("%f", &vta);
        if (vta != 0)
        {
            tot_vta = tot_vta + vta;
        }
        else
        {
            
            switch (cant_vend)
            {
            case 1:
                vta_vend_a = tot_vta; 
                break;
            case 2:
                vta_vend_b = tot_vta; 
                break;    
            case 3:
                vta_vend_c = tot_vta; 
                break;    
            case 4:
                vta_vend_d = tot_vta; 
                break;    
            case 5:
                vta_vend_e = tot_vta; 
                break;        
            default:
                printf("error\n");
                break;
            }
            cant_vend +=1;
            tot_vta = 0;
        }
    }
    while (cant_vend < 6);
    
    com_vend_a = vta_vend_a * com;
    com_vend_b = vta_vend_b * com;
    com_vend_c = vta_vend_c * com;
    com_vend_d = vta_vend_d * com;
    com_vend_e = vta_vend_e * com;
    printf("La com. del vendedor A es: %f\n", com_vend_a);
    printf("La com. del vendedor B es: %f\n", com_vend_b);
    printf("La com. del vendedor C es: %f\n", com_vend_c);
    printf("La com. del vendedor D es: %f\n", com_vend_d);
    printf("La com. del vendedor E es: %f\n", com_vend_e);

    system("pause");
    return 0;
}