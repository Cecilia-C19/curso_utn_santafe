      do
            {
                printf("Ingrese DNI %i \n", y);
                scanf("%f", &dni); 
 
                if(dni <= 999999 || dni > 6000000)
                {
                    printf("dni invalido\n", 160);
                    cont =+1; 
                }
               
 
            }while((dni <= 999999 || dni > 6000000) && cont <= 3);