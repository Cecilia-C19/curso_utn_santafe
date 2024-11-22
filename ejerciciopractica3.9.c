#include <stdio.h>
#include <stdlib.h>

void main(){

for(int i=1;i<10;i++){
    printf("La tabla del %i es: \n",i);
    for(int j=1; j<11; j++){
        
        printf("%dX%d=%d\n",i,j,i*j);
        
    }  
}

system("pause");


}