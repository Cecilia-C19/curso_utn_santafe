#include <stdio.h>
#include <stdlib.h>

main(){
    int i, j,n;
   
    do{
        printf("ingrese un valor > 0 \n");
        scanf("%d", &n);

        if(n<=0){
            printf("ERROR\n ");
        }

    }while (n<=0);
    

    for ( i = n; i >=1; i--)
    {
        j=1; 
        while(j<=i)
        {
            printf("%d", j);
             j++;
        }

        printf("\n");
    }
    
    system("pause");
}